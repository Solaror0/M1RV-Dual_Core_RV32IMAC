
int main() {
    // --- Data for Memory Instructions (lb, lh) ---
    // We use a small array to load data from.
    // 0x1234F08D gives us a mix of positive and negative bytes/halfwords to test sign-extension.
    int data = 0x1234F08D; 
    volatile char *byte_ptr = (volatile char *)&data;
    volatile short *half_ptr = (volatile short *)&data;

    // 1. lb (Load Byte) -> Loads a signed 8-bit value (sign-extended)
    // Expecting: 0x8D is negative in signed char, so it becomes 0xFFFFFF8D (-115)
    int var_lb = *byte_ptr; 

    // 2. lh (Load Halfword) -> Loads a signed 16-bit value (sign-extended)
    // Expecting: 0xF08D is negative in signed short, so it becomes 0xFFFFF08D (-3955)
    int var_lh = *half_ptr; 


    // --- Arithmetic & Shift Instructions ---
    volatile int a = 5;
    volatile int b = 8;
    volatile int neg = -16;

    // 3. sub (Subtract)
    // Expecting: 5 - 8 = -3
    int var_sub = a - b; 

    // 4. sll (Shift Left Logical)
    // Expecting: 5 << 2 = 20
    int var_sll = a << 2; 

    // 5. srl (Shift Right Logical) -> Zero-fills the left side
    // Expecting: 8 >> 1 = 4
    int var_srl = b >> 1; 

    // 6. sra (Shift Right Arithmetic) -> Keeps the sign bit (1 for negative)
    // Expecting: -16 >> 2 = -4
    int var_sra = neg >> 2; 


    // --- Comparison Instructions ---
    // 7. slt (Set Less Than - Signed)
    // Expecting: Is -16 < 5? Yes, so 1.
    int var_slt = (neg < a) ? 1 : 0; 

    // 8. sltu (Set Less Than - Unsigned)
    // Expecting: -16 as unsigned is HUGE (0xFFFFFFF0). Is HUGE < 5? No, so 0.
    int var_sltu = ((unsigned int)neg < (unsigned int)a) ? 1 : 0; 


    // --- Final Sum ---
    // Just like your example, we sum them all up so you can check a single total.
    int total = var_lb + var_lh + var_sub + var_sll + var_srl + var_sra + var_slt + var_sltu;

    return total;
}