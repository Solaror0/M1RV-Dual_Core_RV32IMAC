OUTPUT_ARCH( "riscv" )
ENTRY( _start )

MEMORY
{
    IMEM (rx)  : ORIGIN = 0x00000000, LENGTH = 4K
    DMEM (rw)  : ORIGIN = 0x00000000, LENGTH = 4K
}

SECTIONS
{
    /* 1. Text Section: All executable code goes into IMEM */
    .text : {
        _stext = .;
        *(.init)      /* Our startup assembly code must be absolute first */
        *(.text*)     /* All compiled C functions */
        _etext = .;
    } > IMEM

    /* 2. Data Section: Initialized global variables (e.g., int x = 5;) */
    /* Crucial: It lives in DMEM when running, but its initial values */
    /* must be stored at the end of IMEM so they can be loaded onto the FPGA! */
    .data : AT ( ADDR ( .text ) + SIZEOF ( .text ) ) {
        _sdata = .;   /* Start of data in DMEM */
        *(.data*)
        *(.sdata*)
        _edata = .;   /* End of data in DMEM */
    } > DMEM

    /* This creates a pointer showing where the raw data values are stored in IMEM */
    _sidata = LOADADDR(.data);

    /* 3. BSS Section: Uninitialized global variables (guaranteed to start at 0) */
    .bss : {
        _sbss = .;   /* Start of BSS in DMEM */
        *(.bss*)
        *(.sbss*)
        _ebss = .;   /* End of BSS in DMEM */
    } > DMEM
}