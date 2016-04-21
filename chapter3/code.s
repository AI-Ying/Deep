	.file	"code.c"
	.intel_syntax noprefix
	.text
	.globl	sum
	.type	sum, @function
sum:
.LFB0:
	.cfi_startproc
	lea	eax, [rdi+rsi]
	add	DWORD PTR accum[rip], eax
	ret
	.cfi_endproc
.LFE0:
	.size	sum, .-sum
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	add	DWORD PTR accum[rip], 4
	mov	eax, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.globl	accum
	.bss
	.align 4
	.type	accum, @object
	.size	accum, 4
accum:
	.zero	4
	.ident	"GCC: (Ubuntu 5.2.1-22ubuntu2) 5.2.1 20151010"
	.section	.note.GNU-stack,"",@progbits
