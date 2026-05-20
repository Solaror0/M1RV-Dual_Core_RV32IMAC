import lut_generator as lg

def get_bounds(q, d):
    """Calculates the strict legal min and max bounds for p given q and d"""
    rho = 2.0 / 3.0  # Redundancy factor for Radix-4 SRT
    p_max = rho * d + q * d
    p_min = -rho * d + q * d
    return p_min, p_max

def verify_lut():
    # Map your 3-bit hardware q_chosen codes back to actual integers
    q_map = {
        0b110: -2,
        0b111: -1,
        0b000:  0,
        0b001:  1,
        0b010:  2
    }
    
    errors = 0
    tested_cases = 0
    table = lg.makeTable()

    # 1. Sweep all possible 5-bit normalized divisor indices (bits [31:27])
    # For a normalized fractional divisor, the MSB is always 1, so range is 16 to 31
    for d_bits in range(16, 32):
        # Map to actual fractional value (assuming standard fractional alignment)
        # e.g., 16/32 = 0.5, 31/32 = 0.96875
        d_val = d_bits / 32.0 
        
        # 2. Sweep all possible 7-bit signed remainder indices from your adder
        for p_bits in range(128):
            # Convert 7-bit unsigned loop variable to two's complement signed integer
            p_signed = p_bits if p_bits < 64 else p_bits - 128
            
            # Map integer bits to the actual fractional value (3 fractional bits)
            p_lo = p_signed / 8.0
            p_hi = p_lo + 0.25  # Account for the +0.25 Carry-Save truncation uncertainty
            
            # 3. MOCK YOUR LUT HERE
            # Replace this dummy function with your actual look-up table logic!
            
            q_code = table[d_bits][p_signed]
            q_val = q_map.get(q_code, 0)
            
            # 4. Check boundaries
            p_min, p_max = get_bounds(q_val, d_val)
            
            # The entire truncated uncertainty window MUST fit within the legal bounds
            if p_lo < p_min or p_hi > p_max:
                print(f"❌ ERROR at Divisor Index {d_bits} ({d_val:.4f}), Remainder Index {p_signed} ({p_lo} to {p_hi}):")
                print(f"   LUT selected q = {q_val}. Legal range was [{p_min:.4f}, {p_max:.4f}]")
                errors += 1
            
            tested_cases += 1

    print("--------------------------------------------------")
    if errors == 0:
        print(f"✅ SUCCESS! All {tested_cases} table entries satisfy SRT continuity rules.")
    else:
        print(f"💥 FAILED! Found {errors} boundary violations out of {tested_cases} entries.")

def dummy_hardware_lut(p_signed, d_bits):
    # Place your case/lookup logic here to test it
    # Returns a 3-bit code matching your Verilog module
    return 0b000 

if __name__ == "__main__":
    verify_lut()