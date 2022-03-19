	section	.data

	.string	"Hello, World\n"
	.text
	.globl	main
main:

	pushq	%rbp
	movq	%rsp, %rbp
	movl	$13, %edx
	leaq	.LC0(%rip), %rsi
	movl	$1, %edi
	call	write@PLT
	nop
	popq	%rbp

	ret

