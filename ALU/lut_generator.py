from math import ceil, floor
import struct

def makeTable():
    table = [[0 for p in range(64)] for d in range(32)]

    for d_bits in range(16,32):
        d_lo = d_bits / 32 #+0.5       # lower bound of this D interval
        d_hi = d_lo + 1/32             # upper bound
        ##D0. D1, D2, D3, D4
        
        for p_bits in range(0, 64):  # signed 6-bit range
            p_signed = p_bits if p_bits < 32 else p_bits - 64
            p_lo = p_signed / 32
            p_hi = p_lo + 1/32
            
            #PSign, P0.P1, P2, P3, P4
            q = 0
            if   (p_hi <= (8/3)*d_lo)  and (p_lo >= (4/3)*d_hi):  q = 2
            elif (p_hi <= (5/3)*d_lo)  and (p_lo >= (1/3)*d_hi):  q = 1
            elif (p_hi <= (2/3)*d_lo)  and (p_lo >= (-2/3)*d_hi): q = 0
            elif (p_hi <= (-1/3)*d_lo) and (p_lo >= (-5/3)*d_hi): q = -1
            elif (p_hi <= (-4/3)*d_lo) and (p_lo >= (-8/3)*d_hi): q = -2
            else: q = 0

            table[d_bits][p_bits] = q
    return table

def makeTable2():
    table = [[0 for p in range(64)] for d in range(32)]

    for d_bits in range(16, 32):
        d_lo = d_bits / 32
        d_hi = d_lo + 1/32
        
        for p_bits in range(0, 64):
            # 6-bit signed two's complement
            p_signed = p_bits if p_bits < 32 else p_bits - 64
            
            # Change to 3 fractional bits so P can span up to 2.667
            p_lo = p_signed / 8  
            
            # Staircase logic matching your exact derived bounds
            # Positive bounds use d_hi, negative bounds use d_lo for worst-case safety
            if p_lo >= (4/3) * d_hi:
                q = 2
            elif p_lo >= (1/3) * d_hi:
                q = 1
            elif p_lo >= (-2/3) * d_lo:
                q = 0
            elif p_lo >= (-5/3) * d_lo:
                q = -1
            else:
                q = -2

            table[d_bits][p_bits] = q
    return table
       
def printTable(table):
    for i in range(63,-1,-1):
        for j in range(16,32):
            print(table[j][i], end=" ")
        print("")

def writeLut(table):
    with open("caseFile.txt","w") as f:
        f.write("case" + "\n")
        for p in range(64):
            for d in range(16,32):
                q = table[d][p]
                tc_q = q&0b111
                f.write(f"11'b{d:05b}_{p:06b}:" + f"q = 3'b{tc_q:03b};" +"\n")
                
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
       
       
def verify(table):
    errors = []
    epsilon = 1e-9  # Accounts for floating-point precision limits
    
    for d_bits in range(16, 32):
        d_lo = d_bits / 32
        d_hi = (d_bits + 1) / 32
        
        for p_bits in range(0, 64):
            q = table[d_bits][p_bits]
            
            # 6-bit signed two's complement with 3 fractional bits
            p_signed = p_bits if p_bits < 32 else p_bits - 64
            p_lo = p_signed / 8
            p_hi = (p_signed + 1) / 8
            
            # Generate all potential vertices where the cell box and the SRT lines intersect
            candidates = [
                (d_lo, p_lo), (d_lo, p_hi), (d_hi, p_lo), (d_hi, p_hi),
                (d_lo, (8/3)*d_lo), (d_lo, (-8/3)*d_lo),
                (d_hi, (8/3)*d_hi), (d_hi, (-8/3)*d_hi),
                ((3/8)*p_lo, p_lo), (-(3/8)*p_lo, p_lo),
                ((3/8)*p_hi, p_hi), (-(3/8)*p_hi, p_hi)
            ]
            
            # Filter candidates to find the true valid boundaries inside this specific cell
            valid_test_points = []
            for d, p in candidates:
                # 1. Must be within the divisor column range
                if not (d_lo - epsilon <= d <= d_hi + epsilon): continue
                # 2. Must be within the partial remainder row range
                if not (p_lo - epsilon <= p <= p_hi + epsilon): continue
                # 3. Must be a reachable input to begin with (the SRT global invariant)
                if not (abs(p) <= (8/3)*d + epsilon): continue
                
                valid_test_points.append((d, p))
            
            # Test only the valid, reachable region vertices
            for d, p in valid_test_points:
                p_next = 4 * (p - q * d)
                bound = (8 / 3) * d
                
                if abs(p_next) > bound + epsilon:
                    errors.append(
                        f"Fail at D_bits={d_bits:02d}, P_bits={p_bits:02d} | q={q}\n"
                        f"  Context: Evaluated valid point D={d:.4f}, P={p:.4f}\n"
                        f"  Result:  P_next={p_next:.4f} violates Bound=±{bound:.4f}\n"
                    )
                    break  # One true failure invalidates the cell
                    
    if errors:
        print(f"❌ Verification failed! Found {len(errors)} true invalid cells.\n")
        for err in errors[:5]:
            print(err)
        if len(errors) > 5:
            print(f"... and {len(errors) - 5} more errors.")
    else:
        print("✅ Verification passed! The LUT is 100% mathematically sound.")
        
    return len(errors) == 0
            
        
if __name__ == "__main__":
   table =  makeTable2()
   printTable(table)
   writeLut(table)
   verify(table)