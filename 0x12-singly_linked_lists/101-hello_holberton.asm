extern printf

section .text
	global main

main:
	push rbp
	
	mov rdi,fmt
	mov rsi,msg
	mov rax, 0
	call printf


	pop rbp


	mov rax,0
	ret

section .data
	msg db "Hello, Horberton", 0 ; new line or 10.
	fmt: db "%s", 0xa, 0


