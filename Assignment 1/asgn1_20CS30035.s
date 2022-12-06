	.file	"asgn1.c"									# source file name
	.text												# start of executable code (text section)
	.section	.rodata									# read only data section
	.align 8											# align with 8 byte boundary
.LC0:													# Label of f-string 1st printf
	.string	"Enter the string (all lowrer case): "
.LC1:													# Label of f-string scanf
	.string	"%s"
.LC2:													# Label of f-string 2nd printf
	.string	"Length of the string: %d\n"
	.align 8											# align with 8 byte boundary
.LC3:													# Label of f-string 3rd printf
	.string	"The string in descending order: %s\n"
	.text												# code starts
	.globl	main										# main is global name
	.type	main, @function								# main is of type function
main:													# start of main
.LFB0:
	.cfi_startproc										# Call frame information
	pushq	%rbp										# Save old base pointer
	.cfi_def_cfa_offset 16								# set cfa at an offset of 16 bytes from stack pointer
	.cfi_offset 6, -16									# set register 6 value at an offset of 16 bytes from cfa 
	movq	%rsp, %rbp									# rbp <--- rsp set new stack base pointer
	.cfi_def_cfa_register 6								# For computing CFA use register 6
	subq	$80, %rsp									# rsp<--rsp-80 creating space for local array and variables
	movq	%fs:40, %rax								# segment addressing 
	movq	%rax, -8(%rbp)								# rax->M[rbp-8]
	xorl	%eax, %eax									# clear eax register 

	# printf("Enter the string (all lowrer case): ");
	leaq	.LC0(%rip), %rdi							# load address of .L0(%rip) into rdi, storing first parameter of printf
	movl	$0, %eax									# 0->eax, clear eax 
	call	printf@PLT									# calls printf with rdi as argument

	# scanf("%s", str);
	leaq	-64(%rbp), %rax								# rbp-64->rax, str->rax
	movq	%rax, %rsi									# rax->rsi, store str which is second parameter of scanf
	leaq	.LC1(%rip), %rdi							# load address of .L1(%rip) into rdi, storing format string "%s", first parameter of scanf
	movl	$0, %eax									# 0->eax, clear eax 	
	call	__isoc99_scanf@PLT							# call scanf with rdi and rsi as argument

	# len = length(str);
	leaq	-64(%rbp), %rax								# rbp-64->rax, str->rax 
	movq	%rax, %rdi									# rax->rdi, store str, first parameter of length
	call	length										# call length with rdi as an argument  and returned value is stored in eax 
	movl	%eax, -68(%rbp)								# eax-> M[rbp-68], assign return value of length to len 


	# printf("Length of the string: %d\n", len);	
	movl	-68(%rbp), %eax								# M[rbp-68]->eax, len->eax 
	movl	%eax, %esi									# eax->esi, store len, second parameter of printf
	leaq	.LC2(%rip), %rdi							# .LC2+rip->rdi, storing first parameter of printf
	movl	$0, %eax									# 0->eax, clear eax 
	call	printf@PLT									# call printf with rdi and esi as arguments


	#sort(str, len, dest);
	leaq	-32(%rbp), %rdx								# rbp-32->rdx, dest->rdx 
	movl	-68(%rbp), %ecx								# M[rbp-68]->ecx, len->ecx 
	leaq	-64(%rbp), %rax								# rbp-64->rax, str->rax 
	movl	%ecx, %esi									# ecx->esi, store len, second parameter of sort 
	movq	%rax, %rdi									# rax->rdi, store str, first parameter of sort
	call	sort										# call sort with rdi, esi and rdx as arguments


	#printf("The string in descending order: %s\n", dest);
	leaq	-32(%rbp), %rax								# rbp-32->rax, dest->rax
	movq	%rax, %rsi									# rax->rsi, store dest, second parameter of printf
	leaq	.LC3(%rip), %rdi							# load address of .L3(%rip) into rdi, storing first parameter of printf 
	movl	$0, %eax									# 0->eax, clear eax 
	call	printf@PLT									# call printf with rdi and rsi as arguments 


	# return 0;
	movl	$0, %eax									# 0->eax, return value from main, 0

	# }
	movq	-8(%rbp), %rcx								# M[rbp-8]->rcx
	xorq	%fs:40, %rcx								# take xor and check if it is 0, if it is 0 then there is no stack overflow
	je	.L3												# jump to .L3 if we get 0 in previous step (no overflow)
	call	__stack_chk_fail@PLT						# reaching this step indicates stack overflow and the program is terminated


.L3:
	leave												# set rsp to rbp and pop top of stack into rbp
	.cfi_def_cfa 7, 8									# Take address from register 7 and add offset of 8 for computing CFA 
	ret													# pop return address and transfer control back to return address 
	.cfi_endproc										# close entry previously opened by .cfi_startproc 
.LFE0:
	.size	main, .-main								# size of main
	.globl	length										# length is a global name 
	.type	length, @function							# length is of type function 
length:													# start of length 
.LFB1:
	.cfi_startproc										# call frame information
	pushq	%rbp										# save old base pointer 
	.cfi_def_cfa_offset 16								# set cfa at an offset of 16 bytes from stack pointer
	.cfi_offset 6, -16									# set register 6 value at an offset of 16 bytes from cfa
	movq	%rsp, %rbp									# rsp --> rbp set new base pointer
	.cfi_def_cfa_register 6								# For computing CFA use register 6
	movq	%rdi, -24(%rbp)								# rdi-->M[rbp-24] store the first argument str


	# for (i = 0; str[i] != '\0'; i++)
	movl	$0, -4(%rbp)								# 0-->M[rbp-4] where M[rbp-4] stores i, equivalent to i=0
	jmp	.L5												# unconditional jump to .L5
.L6:
	addl	$1, -4(%rbp)								# M[rbp-4]+1 --> M[rbp-4], equivalent to i++
.L5:
	movl	-4(%rbp), %eax								# M[rbp-4] --> eax, eax stores i
	movslq	%eax, %rdx									# eax --> rdx (signed extension from 32-bit to 64-bit)
	movq	-24(%rbp), %rax								# M[rbp-24] --> rax , rax stores str 
	addq	%rdx, %rax									# rdx + rax --> rax, i + str=str[i]-->rax 
	movzbl	(%rax), %eax								# M[rax]-->eax (extended byte to long)
	testb	%al, %al									# Set zf to 1 if M[al]==0
	jne	.L6												# if zf==0 jump to .L6 


	# return i;
	movl	-4(%rbp), %eax								# M[rbp-4]--> eax, i->eax, eax has value to be returned from length 


	# }
	popq	%rbp										# pop top of stack into rbp 
	.cfi_def_cfa 7, 8									# Take address from register 7 and add offset of 8 for computing CFA
	ret													# pop return address and transfer control back to return address 
	.cfi_endproc										# close entry previously opened by .cfi_startproc 
.LFE1:
	.size	length, .-length							# size of length
	.globl	sort										# sort is global name 
	.type	sort, @function								# sort is of type function 
sort:													# start of sort 
.LFB2:
	.cfi_startproc										# Call frame information
	pushq	%rbp										# Save old base pointer 
	.cfi_def_cfa_offset 16								# set cfa at an offset of 16 bytes from stack pointer
	.cfi_offset 6, -16									# set register 6 value at an offset of 16 bytes from cfa
	movq	%rsp, %rbp									# rsp --> rbp set new base pointer 
	.cfi_def_cfa_register 6								# For computing CFA use register 6
	subq	$48, %rsp									# rsp -->rsp-48 creating space for str,len and dest 
	movq	%rdi, -24(%rbp)								# rdi -->M[rbp-24],store the first argument str 
	movl	%esi, -28(%rbp)								# esi -->M[rbp-28],store the second argument len 
	movq	%rdx, -40(%rbp)								# rdx -->M[rbp-40],store the third argument dest


	# for (i = 0; i < len; i++)
	movl	$0, -8(%rbp)								# 0 -->M[rbp-8], i-->M[rbp-8], i=0
	jmp	.L9												# unconditional jump to .L9
.L13:
	# for (j = 0; j < len; j++)
	movl	$0, -4(%rbp)								# 0--> M[rbp-4] , j=0
	jmp	.L10											# unconditional jump to .L10
.L12:
	# if (str[i] < str[j])
	movl	-8(%rbp), %eax								# M[rbp-8]-->eax, eax stores i
	movslq	%eax, %rdx									# eax-->rdx (signed extension of 32-bit to 64 bit)
	movq	-24(%rbp), %rax								# M[rbp-24] --> rax , rax stores str 
	addq	%rdx, %rax									# rdx + rax --> rax, i + str=str[i]-->rax
	movzbl	(%rax), %edx								# M[rax]-->eax (extended byte to long)
	movl	-4(%rbp), %eax								# M[rbp-4]-->eax, eax stores j
	movslq	%eax, %rcx									# eax-->rcx (signed extension of 32-bit to 64 bit)
	movq	-24(%rbp), %rax								# M[rbp-24] --> rax , rax stores str
	addq	%rcx, %rax									# rdx + rax --> rax, j + str=str[j]-->rax
	movzbl	(%rax), %eax								# M[rax]-->eax (extended byte to long)
	cmpb	%al, %dl									# Comparing M[dl] and M[al]
	jge	.L11											# If M[dl]>=M[dl] jump to .L11


	#  temp = str[i];
	movl	-8(%rbp), %eax								# M[rbp-8]-->eax, eax stores i
	movslq	%eax, %rdx									# eax-->rdx (signed extension of 32-bit to 64 bit)
	movq	-24(%rbp), %rax								# M[rbp-24] --> rax , rax stores str
	addq	%rdx, %rax									# rdx + rax --> rax, i + str=str[i]-->rax
	movzbl	(%rax), %eax								# M[rax]-->eax (extended byte to long)
	movb	%al, -9(%rbp)								# al-->M[rbp-9]


	# str[i] = str[j];
	movl	-4(%rbp), %eax								# M[rbp-4]-->eax, eax stores j
	movslq	%eax, %rdx									# eax-->rdx (signed extension of 32-bit to 64 bit)
	movq	-24(%rbp), %rax								# M[rbp-24] --> rax , rax stores str
	addq	%rdx, %rax									# rdx + rax --> rax, j + str=str[j]-->rax
	movl	-8(%rbp), %edx								# M[rbp-8]-->edx, edx stores i
	movslq	%edx, %rcx									# edx-->rcx (signed extension of 32-bit to 64 bit
	movq	-24(%rbp), %rdx								# M[rbp-24] --> rdx , rdx stores str		
	addq	%rcx, %rdx									# rcx + rdx --> rdx, i + str=str[i]-->rdx		
	movzbl	(%rax), %eax								# M[rax]-->eax (extended byte to long)
	movb	%al, (%rdx)									# al-->M[rdx]


	# str[j] = temp;
	movl	-4(%rbp), %eax								# M[rbp-4]-->eax, eax stores j
	movslq	%eax, %rdx									# eax-->rdx (signed extension of 32-bit to 64 bit)
	movq	-24(%rbp), %rax								# M[rbp-24] --> rax , rax stores str
	addq	%rax, %rdx									# rax + rdx --> rdx, j + str=str[j]-->rdx
	movzbl	-9(%rbp), %eax								# M[rbp-9]-->eax
	movb	%al, (%rdx)									# al-->M[rdx]
.L11:
	# for (j = 0; j < len; j++)
	addl	$1, -4(%rbp)								# M[rbp-4]+1-->M[rbp-4] (j++)
.L10:
	# for (j = 0; j < len; j++)
	movl	-4(%rbp), %eax								#  M[rbp-4]-->eax, eax stores j
	cmpl	-28(%rbp), %eax								# compare eax and M[rbp -28](len)
	jl	.L12											# jump to .L12 if eax < M[rbp-28] (j<len)
	addl	$1, -8(%rbp)								# M[rbp-8]+1-->M[rbp-8] (i++)
.L9:
	#for (i = 0; i < len; i++)
	movl	-8(%rbp), %eax								# M[rbp-8]-->eax, eax stores i
	cmpl	-28(%rbp), %eax								# compare eax with M[rbp-28](comparing i with len)
	jl	.L13											# jump to .L13 if eax < M[rbp-28] (i<len)
	movq	-40(%rbp), %rdx								# M[rbp-40]-->rdx, dest-> rdx 
	movl	-28(%rbp), %ecx								# M[rbp-28]-->ecx, len-> ecx 
	movq	-24(%rbp), %rax								# M[rbp-24]-->rax, str-> rax  
	movl	%ecx, %esi									# ecx --> esi, store len , 2nd parameter of reverse
	movq	%rax, %rdi									# rax --> rdi, store str , 1st parameter of reverse
	call	reverse										# call reverse with rdi,esi and rdx as argument
	nop													# does nothing
	leave												# set rsp to rbp, and pop top of stack into rbp 
	.cfi_def_cfa 7, 8									# for computing CFA, take address from register 7 and add an offset of 8 to it
	ret													# pop return address from stack and transfer control back to the return address
	.cfi_endproc										# close the entry previously opened by .cfi_startproc.
.LFE2:
	.size	sort, .-sort								# size of sort
	.globl	reverse										# reverse is a global name
	.type	reverse, @function							# reverse is of type function
reverse:												# reverse of sort
.LFB3:
	.cfi_startproc										# call frame information 
	pushq	%rbp										# save old base pointer 
	.cfi_def_cfa_offset 16								# set CFA at an offset of 16 bytes from the current stack pointer
	.cfi_offset 6, -16									# set value of register 6 at offset 16 from CFA
	movq	%rsp, %rbp									# rsp <-- rbp, set new stack base pointer
	.cfi_def_cfa_register 6								# for computing CFA, use register 6 
	movq	%rdi, -24(%rbp)								# rdi --> M[rbp-24], store the first argument str
	movl	%esi, -28(%rbp)								# rdi --> M[rbp-28], store the second argument len 
	movq	%rdx, -40(%rbp)								# rdi --> M[rbp-40], store the third argument dest


	# for (i = 0; i < len / 2; i++)
	movl	$0, -8(%rbp)								# 0--> M[rbp-8], (M[rbp-8] stores i),i=0
	jmp	.L15											# unconditional jump to .L15
.L20:
	# for (j = len - i - 1; j >= len / 2; j--) // reversing the string
	movl	-28(%rbp), %eax								# M[rbp-28]-->eax,(len->eax)
	subl	-8(%rbp), %eax								# eax-M[rbp-8]-->eax,(len-i-->eax)
	subl	$1, %eax									# eax -1-->eax,(j=len-i-1)
	movl	%eax, -4(%rbp)								# eax-->M[rbp-4](store j in M[rbp-4])
	nop													# does nothing
	movl	-28(%rbp), %eax								# M[rbp-28]-->eax,(len-->eax)
	movl	%eax, %edx									# eax-->edx
	shrl	$31, %edx									# right shift edx by 31 bits, since edx is a 32-bit register, here we get the sign bit (0 if positive, 1 if negative)
	addl	%edx, %eax									# edx+eax-->eax 
	sarl	%eax										# right shift eax by 1 bit, resulting in division by 2 (len/2)
	cmpl	%eax, -4(%rbp)								# comparing M[rbp-4] and eax (j and len/2)
	jl	.L18											# if M[rbp-4]<eax (j<len/2) then jump to .L18


	# if (i == j)
	movl	-8(%rbp), %eax								# M[rbp-8]-->eax (i-->eax)
	cmpl	-4(%rbp), %eax								# comparing eax and M[rbp-4] (i and j)
	je	.L23											# if eax==M[rbp-4] (i==j) then jump to .L23


	# temp = str[i];
	movl	-8(%rbp), %eax								# M[rbp-8]-->eax (i-->eax)
	movslq	%eax, %rdx									# eax-->rdx (signed extension of 32-bit to 64 bit)
	movq	-24(%rbp), %rax								# M[rbp-24]-->rax (str-->rax)
	addq	%rdx, %rax									# rdx+rax-->rax (i+str=str[i]-->rax)
	movzbl	(%rax), %eax								# M[rax]-->eax (extended byte to long)
	movb	%al, -9(%rbp)								# al-->M[rbp-9]


	# str[i] = str[j];
	movl	-4(%rbp), %eax								# M[rbp-4]-->eax (j-->eax)
	movslq	%eax, %rdx									# eax-->rdx (signed extension of 32-bit to 64 bit)
	movq	-24(%rbp), %rax								# M[rbp-24]-->rax (str-->rax)
	addq	%rdx, %rax									# rdx+rax-->rax (j+str=str[j]-->rax)
	movl	-8(%rbp), %edx								# M[rbp-8]-->edx (i-->edx)
	movslq	%edx, %rcx									# edx-->rcx (signed extension of 32-bit to 64 bit)
	movq	-24(%rbp), %rdx								# M[rbp-24]-->rdx (str-->rdx)
	addq	%rcx, %rdx									# rcx+rdx-->rdx (i+str=str[i]-->rdx)
	movzbl	(%rax), %eax								# M[rax]-->eax (extended byte to long)
	movb	%al, (%rdx)									# al-->M[rdx]


	# str[j] = temp;
	movl	-4(%rbp), %eax								# M[rbp-4]-->eax (j-->eax)
	movslq	%eax, %rdx									# eax-->rdx (signed extension of 32-bit to 64 bit)
	movq	-24(%rbp), %rax								# M[rbp-24]-->rax (str-->rax)
	addq	%rax, %rdx									# rax+rdx-->rdx (str+j=str[j]-->rdx)
	movzbl	-9(%rbp), %eax								# M[rbp-9]-->eax (extended byte to long)
	movb	%al, (%rdx)									# al-->M[rdx]
	jmp	.L18											# unconditional jump to .L18
.L23:
	nop													# does nothing 
.L18:
	addl	$1, -8(%rbp)								# M[rbp-8]+1=M[rbp-8] (i++)
.L15:
	# for (i = 0; i < len / 2; i++)
	movl	-28(%rbp), %eax								# M[rbp-28]--> eax, eax stores len
	movl	%eax, %edx									# eax--> edx, edx stores len 
	shrl	$31, %edx									# right shift edx by 31 bits, since edx is a 32-bit register, here we get the sign bit (0 if positive, 1 if negative)
	addl	%edx, %eax									# edx + eax--> eax 
	sarl	%eax										# right shift eax by 1 bit, resulting in division by 2 (len/2)
	cmpl	%eax, -8(%rbp)								# comparing M[rbp-8] and eax (i and len/2)
	jl	.L20											# if i<len/2 then jump to .L20


	# for (i = 0; i < len; i++)
	movl	$0, -8(%rbp)								# 0--> M[rbp-8], i=0
	jmp	.L21											# unconditional jump to .L21
.L22:
	# dest[i] = str[i];
	movl	-8(%rbp), %eax								# M[rbp-8]-->eax, store i in eax
	movslq	%eax, %rdx									# eax-->rdx (signed extension of 32-bit to 64 bit)
	movq	-24(%rbp), %rax								# M[rbp-24]--> rax,(str-->rax)
	addq	%rdx, %rax									# rdx+rax-->rax, i+str=str[i]-->rax
	movl	-8(%rbp), %edx								# M[rbp-8]-->edx, store i in edx
	movslq	%edx, %rcx									# edx-->rcx (signed extension of 32-bit to 64 bit)
	movq	-40(%rbp), %rdx								# M[rbp-40]--> rdx,(dest-->rdx)
	addq	%rcx, %rdx									# rcx+rdx-->rdx, i+dest=dest[i]-->rdx
	movzbl	(%rax), %eax								# M[rax]-->eax (extended byte to long)
	movb	%al, (%rdx)									# Move %al-->M[rdx]
	addl	$1, -8(%rbp)								# M[rbp-8]+1-->M[rbp-8] (i++)
.L21:
	# for (i = 0; i < len; i++)
	movl	-8(%rbp), %eax								# M[rbp-8]--> eax, store i in eax 
	cmpl	-28(%rbp), %eax								# comparing M[rbp-28] and eax (ie len and i)
	jl	.L22											# if eax < M[rbp-28] (if i<len) then jump to .L22
	nop													# does nothing
	popq	%rbp										# pop top of stack into rbp
	.cfi_def_cfa 7, 8									# take address from register 7 and add an offset of 8 to it, for computing CFA
	ret													# transfer control back to the return address
	.cfi_endproc										# close the entry opened by .cfi_startproc.
.LFE3:
	.size	reverse, .-reverse							# size of reverse
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
