	global main
	extern printf

	section .text
main:
	lea rdi, [rel message]
	xor rax, rax
	call printf wrt ..plt

	ret

	section .data
message:	db "Hello, Holberton", 0xa
