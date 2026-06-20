.section .text
.global _start

_start:
    li x1, 10       # Load 10 into register x1
    li x2, 20       # Load 20 into register x2
    add x3, x1, x2  # x3 = 30

end_loop:
    j end_loop      # Infinite loop to park the CPU