section.text:
	default rel
	extern printf
	global main		;Must be declared for a linker (ld)

main:
	push rbp

	mov rdi,fmt
	mov rsi,message		;message to write
	mov rax,0

	call printf wrt ..plt	;Call printf

	pop rbp		;Pop stack

	mov rax, 0	;Exit code 0
	ret			;Return

section.data:
	message: db	"Hello, Holberton", 0
	fmt: db "%s", 0xa, 0
