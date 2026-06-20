.section .init
.global _start

_start:
    # 1. Setup the Stack Pointer 
    # Point to the top of DMEM (e.g., 0x400 base + 0x1000 size = 0x1400)
    li sp, 0x1000

    # 2. Zero out the BSS section in DMEM
    la a0, _sbss
    la a1, _ebss

clear_bss_loop:
    beq a0, a1, call_main  # If start == end, we are done
    sw  zero, 0(a0)        # Write a 32-bit 0 to memory
    addi a0, a0, 4         # Move forward by one word (4 bytes)
    j clear_bss_loop

call_main:
    # 3. Jump to your C code!
    jal main

trap:
    j trap