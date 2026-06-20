from math import ceil, floor
import struct

def makeTable():
    table = [[0 for p in range(64)] for d in range(16)]

    for d_bits in range(8,16):
        dnum = d_bits / 16 #+0.5
        d_hi = dnum + 1/16# lower bound of this D interval
                    # upper bound
        ##D0. D1, D2, D3, D4
        
        for p_bits in range(0, 64):  # signed 6-bit range
            p_signed = p_bits if p_bits < 32 else p_bits - 64
            pnum = p_signed/32
            pHi = pnum + 1/32
            
            #PSign, P0.P1, P2, P3, P4
            q = 0
            if   (4*pHi <= (8/3)*dnum)  and (4*pnum >= (4/3)*d_hi):  q = 2
            elif (4*pHi <= (5/3)*dnum)  and (4*pnum >= (1/3)*d_hi):  q = 1
            elif (4*pHi <= (2/3)*dnum)  and (4*pnum >= (-2/3)*d_hi): q = 0
            elif (4*pHi <= (-1/3)*dnum) and (4*pnum >= (-5/3)*d_hi): q = -1
            elif (4*pHi <= (-4/3)*dnum) and (4*pnum >= (-8/3)*d_hi): q = -2
            else: q = 0

            table[d_bits][p_bits] = q
    return table

       
def printTable(table):
    for i in range(63,-1,-1):
        for j in range(8,16):
            print(table[j][i], end=" ")
        print("")
#b1000_001011
def writeLut(table):
    with open("caseFile.txt","w") as f:
        f.write("case" + "\n")
        for p in range(64):
            for d in range(8,16):
                q = table[d][p]
                tc_q = q&0b111
                f.write(f"10'b{d:04b}_{p:06b}:" + f"q = 3'b{tc_q:03b};" +"\n")
                
        f.write("endcase")
        
def binary_fixed_to_float(b: str) -> float:
    if '.' in b:
        int_part, frac_part = b.split('.')
    else:
        int_part, frac_part = b, ''

    # integer part
    value = int(int_part, 2)

    # fractional part
    for i, bit in enumerate(frac_part, start=1):
        if bit == '1':
            value += 2 ** (-i)

    return value
       

def verifyTable(table):
    errors = 0
    total = 0
    
    print("\n--- Starting LUT Verification ---")
    for d_bits in range(8, 16):
        d_min = d_bits / 16.0
        d_max = (d_bits + 1) / 16.0
        
        for p_bits in range(64):
            # Reconstruct signed value
            p_signed = p_bits if p_bits < 32 else p_bits - 64
            p_min = p_signed / 32.0
            p_max = (p_signed + 1) / 32.0
            
            q = table[d_bits][p_bits]
            
            # The 4 extremes of the uncertainty box for (P, D)
            corners = [
                (p_min, d_min),
                (p_min, d_max),
                (p_max, d_min), # Truncated P could actually be up to p_max
                (p_max, d_max)
            ]
            
            valid = True
            epsilon = 1e-9 # Prevent false failures from Python float rounding
            
            for p_val, d_val in corners:
                p_next = 4 * p_val - q * d_val
                bound = (2 / 3) * d_val
                
                # Check condition: -2/3*D <= P_next <= 2/3*D
                if not (-bound - epsilon <= p_next <= bound + epsilon):
                    valid = False
                    break # One failed corner makes the whole box invalid
                    
            if not valid:
                errors += 1
                if errors <= 10: # Limit spam
                    print(f"[FAIL] d={d_bits}, p={p_signed:3d} (index {p_bits:02d}) | q={q}")
            total += 1
            
    if errors == 0:
        print(f"PASS: All {total} entries are strictly bounded by |P_next| <= 2/3*D.")
    else:
        print(f"FAIL: {errors}/{total} entries violate the bounds.")
        if errors > 10:
            print("... (showing first 10 errors only)")
            
    return errors == 0

# Add this to your __main__ block:
if __name__ == "__main__":
    table = makeTable()
    verifyTable(table) # Run verification before writing
    printTable(table)
    writeLut(table)