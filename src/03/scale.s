	.file	"scale.c"
	.text
	.globl	scale
	.type	scale, @function
scale:
.LFB23:
	.cfi_startproc
	leaq	(%rdi,%rsi,4), %rcx
	leaq	(%rdx,%rdx,2), %rdx
	leaq	0(,%rdx,4), %rax
	addq	%rcx, %rax
	ret
	.cfi_endproc
.LFE23:
	.size	scale, .-scale
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
