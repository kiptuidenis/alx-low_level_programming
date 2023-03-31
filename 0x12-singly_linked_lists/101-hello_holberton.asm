section .data
    msg db 'Hello, Holberton', 0Ah, 0

section .text
    global main
    extern printf

main:
    mov rdi, msg
    xor rax, rax
    call printf
    xor rax, rax
    ret
