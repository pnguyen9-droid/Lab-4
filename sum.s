    .section .text
    .globl sum
   

# int sum(int *arr, int n)
# arr in %rdi
# n in %rsi
# return value in %eax

sum:
    xor    %eax, %eax        # sum = 0
    xor    %ecx, %ecx        # i = 0

loop:
    cmp   %rsi, %rcx        # compare i and n
    jge     done            # if i >= n, exit

    mov   (%rdi,%rcx,4), %edx   # edx = arr[i]
    add   %edx, %eax            # sum += arr[i]

    inc    %rcx              # i++
    jmp     loop

done:
    ret

.section .note.GNU-stack,"",@progbits
