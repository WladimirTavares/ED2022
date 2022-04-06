	.file	"layout.cpp"
	.text
	.globl	c
	.data
	.align 32
	.type	c, @object
	.size	c, 54
c:
	.string	"Stored in Initialized Data Segment in read-write area"
	.section	.rodata
	.align 32
	.type	_ZL1s, @object
	.size	_ZL1s, 53
_ZL1s:
	.string	"Stored in Initialized Data Segment in read-only area"
	.data
	.align 4
	.type	_ZZ4mainE1i, @object
	.size	_ZZ4mainE1i, 4
_ZZ4mainE1i:
	.long	11
	.local	_ZZ4mainE1b
	.comm	_ZZ4mainE1b,4,4
	.section	.rodata
.LC0:
	.string	"endere\303\247o c %p\n"
.LC1:
	.string	"endere\303\247o s %p\n"
.LC2:
	.string	"endere\303\247o i %p\n"
.LC3:
	.string	"endere\303\247o b %p\n"
.LC4:
	.string	"endere\303\247o v %p\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$4, %edi
	call	malloc@PLT
	movq	%rax, -16(%rbp)
	leaq	c(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	_ZL1s(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	_ZZ4mainE1i(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	_ZZ4mainE1b(%rip), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.2.0-7ubuntu2) 11.2.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
