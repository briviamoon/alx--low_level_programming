section .data
    hello db 'Hello, Holberton', 10, 0  ; The string to print (10 is the newline character)

section .text
    global main
    extern printf

main:
    sub rsp, 8      ; Align the stack on a 16-byte boundary
    lea rdi, [rel hello]  ; Load the address of the string into rdi
    call printf     ; Call the printf function
    add rsp, 8      ; Restore the stack pointer
    mov rax, 0x60   ; Exit syscall number for x86_64
    xor rdi, rdi    ; Status code 0
    syscall         ; Invoke the syscall
