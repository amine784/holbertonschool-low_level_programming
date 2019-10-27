global main
	section.text
main:	mov ebx, 1
	mov rdi, 1
	mov rsi, string
	mov rdx, 17
	syscall
	mov rax, 60
	xor rdi, rdi
	int 0x80

section .data
        string:	db "hello, Holberton",10
