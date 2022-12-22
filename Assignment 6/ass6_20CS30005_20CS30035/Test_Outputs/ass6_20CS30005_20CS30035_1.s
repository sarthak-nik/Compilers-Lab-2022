	.comm	c,1,1
	.comm	i,4,4
	.comm	j,4,4
	.comm	k,4,4
	.comm	l,4,4
	.comm	m,4,4
	.comm	n,4,4
	.comm	o,4,4
	.globl	a
	.data
	.align	4
	.type	a, @object
	.size	a, 4
a:
	.long	4
	.comm	b,4,4
.section	.rodata
.LC0:
	.string "Iteration number: "
.LC1:
	.string "\n"
.LC2:
	.string "\nScope A: "
.LC3:
	.string "\nScope B: "
.LC4:
	.string "\nEntered in the inner most block among the nested blocks."
.LC5:
	.string "\nScope C: "
.LC6:
	.string "\n"
# printStr: 
# printInt: 
# readInt: 
# t0 = 4
# a = t0
# main: 

	.text
	.globl	main
	.type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$144, %rsp
# t1 = 1
	movl	$1, -4(%rbp)
# do_iterator = t1
	movl	-4(%rbp), %eax
	movl	%eax, -8(%rbp)
# param .LC0
.L0:
# t2 = call printStr, 1
	movq	$.LC0, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -20(%rbp)
	addq	$4, %rsp
# t3 = do_iterator
	movl	-8(%rbp), %eax
	movl	%eax, -28(%rbp)
# do_iterator = do_iterator + 1
	movl	-8(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)
# param t3
# t4 = call printInt, 1
	movq	-28(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -32(%rbp)
	addq	$4, %rsp
# param .LC1
# t5 = call printStr, 1
	movq	$.LC1, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -40(%rbp)
	addq	$4, %rsp
# t6 = 10
	movl	$10, -44(%rbp)
# t7 = 1
	movl	$1, -48(%rbp)
# if do_iterator < t6 goto .L0
	movl	-8(%rbp), %eax
	cmpl	-44(%rbp), %eax
	jge	.L4
	jmp	.L0
.L4:
# t7 = 0
	movl	$0, -48(%rbp)
# goto .L1
	jmp	.L1
# goto .L1
	jmp	.L1
# t8 = 10
.L1:
	movl	$10, -52(%rbp)
# w = t8
	movl	-52(%rbp), %eax
	movl	%eax, -56(%rbp)
# param .LC2
# t9 = call printStr, 1
	movq	$.LC2, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -64(%rbp)
	addq	$4, %rsp
# param w
# t10 = call printInt, 1
	movq	-56(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -68(%rbp)
	addq	$4, %rsp
# t11 = 2
	movl	$2, -72(%rbp)
# w = t11
	movl	-72(%rbp), %eax
	movl	%eax, -56(%rbp)
# param .LC3
# t12 = call printStr, 1
	movq	$.LC3, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -80(%rbp)
	addq	$4, %rsp
# param w
# t13 = call printInt, 1
	movq	-56(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -84(%rbp)
	addq	$4, %rsp
# t14 = 3
	movl	$3, -88(%rbp)
# w = t14
	movl	-88(%rbp), %eax
	movl	%eax, -56(%rbp)
# t15 = 3
	movl	$3, -92(%rbp)
# t16 = 1
	movl	$1, -96(%rbp)
# if w == t15 goto .L2
	movl	-56(%rbp), %eax
	cmpl	-92(%rbp), %eax
	jne	.L5
	jmp	.L2
.L5:
# t16 = 0
	movl	$0, -96(%rbp)
# goto .L3
	jmp	.L3
# goto .L3
	jmp	.L3
# param .LC4
.L2:
# t17 = call printStr, 1
	movq	$.LC4, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -104(%rbp)
	addq	$4, %rsp
# goto .L3
	jmp	.L3
# param .LC5
.L3:
# t18 = call printStr, 1
	movq	$.LC5, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -112(%rbp)
	addq	$4, %rsp
# param w
# t19 = call printInt, 1
	movq	-56(%rbp), %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printInt
	movq	%rax, -116(%rbp)
	addq	$4, %rsp
# param .LC6
# t20 = call printStr, 1
	movq	$.LC6, %rax
	pushq	%rax
	movq	%rax, %rdi
	call	printStr
	movq	%rax, -124(%rbp)
	addq	$4, %rsp
# t21 = 0
	movl	$0, -128(%rbp)
# return t21
	movq	-128(%rbp), %rax
	leave
	ret
# function main ends
	leave
	ret
	.size	main, .-main
