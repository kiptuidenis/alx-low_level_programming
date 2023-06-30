section .data
	message db "Hello, Holberton", 0

section .text
	global _start

_start:
				; Prepare the arguments for printf
	mov rdi, message  ; Address of the string message
	xor eax, eax     ; Clear EAX register for variadic arguments
	call printf      ; Call the printf function

				; Exit the program
	mov eax, 60      ; System call number for exit
	xor edi, edi     ; Exit status 0
	syscall          ; Make the system call

section .data
	format db "%s", 0     ; Format specifier for printf

section .text
	extern printf

global _start

_start:
	sub rsp, 8     ; Allocate space for 8 bytes on the stack (alignment)

				; Prepare the arguments for printf
	mov rdi, format    ; Address of the format string
	mov rsi, message   ; Address of the message string
	xor eax, eax       ; Clear EAX register for variadic arguments
	call printf        ; Call the printf function

	add rsp, 8     ; Deallocate the stack space

				; Exit the program
	mov eax, 60      ; System call number for exit
	xor edi, edi     ; Exit status 0
	syscall          ; Make the system call
