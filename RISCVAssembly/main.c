// Assume you mapped a GPIO register to address 0x80000000 in your hardware
//#define LED_REG  *((volatile unsigned int *) 0x80000000)

// A specific 32-bit pattern pattern to load from
// Using large numbers to overflow 32 bits and force upper bits to populate
volatile int signed_a = 0x7FFFFFFF;       // Max positive signed integer
volatile unsigned int unsigned_b = 0xFFFFFFFF; // Max unsigned integer
volatile int e;

int main() {
    int result_high_bits;

    // Direct inline assembly forces the compiler to emit 'mulhsu'
    // It multiplies signed_a (rs1) and unsigned_b (rs2)
    // and stores the upper 32 bits of the 64-bit result into result_high_bits (rd)
    asm volatile (
        "mulhsu %0, %1, %2"
        : "=r" (result_high_bits) // %0: Output register
        : "r" (signed_a),         // %1: Input register (signed)
          "r" (unsigned_b)        // %2: Input register (unsigned)
    );

    e = result_high_bits;

    return (e); 
    // Math: 2147483647 * 4294967295 = 9223372032559812609 (0x7FFFFFFE00000001)
    // Upper 32 bits returned in e should be: 0x7FFFFFFE (2147483646)
}

//riscv64-unknown-elf-gcc -march=rv32im -mabi=ilp32 -T link.ld -nostdlib -Os start.S main.c -o program.elf
//riscv64-unknown-elf-objcopy -O verilog program.elf program.hex


// # 1. Extract raw binary payload from your ELF
// riscv64-unknown-elf-objcopy -O binary program.elf program.bin

// # 2. Format the binary into clean 4-byte little-endian hex rows
// xxd -e -c 4 -p program.bin > program.hex


//riscv64-unknown-elf-gcc -march=rv32im -mabi=ilp32 -S main.c -o main.s to get assembly


//actual workflow

// junnur@LAPTOP-CQFMG6HT:/mnt/c/Users/junnu/Downloads/RISCVAssembly$ riscv64-unknown-elf-objcopy -O elf32-littleriscv -j .text program.elf imem.elf
// riscv64-unknown-elf-objcopy: program.elf: warning: empty loadable segment detected at vaddr=0x400, is this intentional?
// junnur@LAPTOP-CQFMG6HT:/mnt/c/Users/junnu/Downloads/RISCVAssembly$ riscv64-unknown-elf-objcopy -O elf32-littleriscv -j .text program.elf imem.elf
// riscv64-unknown-elf-objcopy: program.elf: warning: empty loadable segment detected at vaddr=0x400, is this intentional?
// junnur@LAPTOP-CQFMG6HT:/mnt/c/Users/junnu/Downloads/RISCVAssembly$ y
// y: command not found
// junnur@LAPTOP-CQFMG6HT:/mnt/c/Users/junnu/Downloads/RISCVAssembly$ riscv64-unknown-elf-objcopy -O elf32-littleriscv -j .data -j .sdata program.elf dmem.elf
// riscv64-unknown-elf-objcopy: program.elf: warning: empty loadable segment detected at vaddr=0, is this intentional?
// junnur@LAPTOP-CQFMG6HT:/mnt/c/Users/junnu/Downloads/RISCVAssembly$ elf2hex --bit-width 32 --input imem.elf --output imem.hex
// junnur@LAPTOP-CQFMG6HT:/mnt/c/Users/junnu/Downloads/RISCVAssembly$ elf2hex --bit-width 32 --base 0x400 --input dmem.elf --output dmem.hex
// /usr/local/bin/elf2hex: unknown argument --base
// junnur@LAPTOP-CQFMG6HT:/mnt/c/Users/junnu/Downloads/RISCVAssembly$ elf2hex --bit-width 32  --input dmem.elf --output dmem.hex
// junnur@LAPTOP-CQFMG6HT:/mnt/c/Users/junnu/Downloads/RISCVAssembly$ 

//Actual actual workflow
//riscv64-unknown-elf-gcc -march=rv32im -mabi=ilp32 -T link.ld -nostdlib -Os start.S riscvtest.c -o program.elf
//riscv64-unknown-elf-objcopy -O binary -j .text program.elf imem.bin
//riscv64-unknown-elf-objcopy -O binary -j .data -j .sdata program.elf dmem.bin