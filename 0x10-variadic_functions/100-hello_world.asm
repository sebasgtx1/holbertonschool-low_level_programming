section .data
	msg db "Hello, World",10 ;our dear string

	section .text
	global main

; linker puts the entry point here:
main:
; Write the string to stdout:
	mov rax, 1 ;system call number (sys_write) 
	mov rdi, 1 ;file descriptor (stdout)
	mov rsi, msg ;message to write
	mov rdx, 13 ;message length
	syscall  ;call kernel

; Exit via the kernel:
	mov rax, 0 ;process' exit code
	mov rdi, 0 ;system call number (sys_exit)
	syscall  ;call kernel - this interrupt won't return
