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
            
            #PSign, P0.P1, P2, P3, P4
            q = 0
            if   (4*pnum <= (8/3)*d_hi)  and (4*pnum >= (4/3)*dnum):  q = 2
            elif (4*pnum <= (5/3)*d_hi)  and (4*pnum >= (1/3)*dnum):  q = 1
            elif (4*pnum <= (2/3)*d_hi)  and (4*pnum >= (-2/3)*dnum): q = 0
            elif (4*pnum <= (-1/3)*d_hi) and (4*pnum >= (-5/3)*dnum): q = -1
            elif (4*pnum <= (-4/3)*d_hi) and (4*pnum >= (-8/3)*dnum): q = -2
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
       
       
def verify(table):
    errors = []
    epsilon = 1e-9  # Accounts for floating-point precision limits
    
    for d_bits in range(16, 32):
        dnum = d_bits / 32
        dnum = (d_bits + 1) / 32
        
        for p_bits in range(0, 64):
            q = table[d_bits][p_bits]
            
            # 6-bit signed two's complement with 3 fractional bits
            p_signed = p_bits if p_bits < 32 else p_bits - 64
            p_lo = p_signed / 8
            p_hi = (p_signed + 1) / 8
            
            # Generate all potential vertices where the cell box and the SRT lines intersect
            candidates = [
                (dnum, p_lo), (dnum, p_hi), (dnum, p_lo), (dnum, p_hi),
                (dnum, (8/3)*dnum), (dnum, (-8/3)*dnum),
                (dnum, (8/3)*dnum), (dnum, (-8/3)*dnum),
                ((3/8)*p_lo, p_lo), (-(3/8)*p_lo, p_lo),
                ((3/8)*p_hi, p_hi), (-(3/8)*p_hi, p_hi)
            ]
            
            # Filter candidates to find the true valid boundaries inside this specific cell
            valid_test_points = []
            for d, p in candidates:
                # 1. Must be within the divisor column range
                if not (dnum - epsilon <= d <= dnum + epsilon): continue
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
   table =  makeTable()
   printTable(table)
   writeLut(table)
   