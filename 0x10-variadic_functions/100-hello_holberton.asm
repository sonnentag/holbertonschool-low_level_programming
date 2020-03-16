section .data
	msg db "Hello, Holberton",0,10,13
	len equ $-msg

section .text
	global main

main:
	mov eax,4
	mov ebx,1
	mov ecx,msg
	mov edx,len
	int 0x80

	mov eax,1
	mov ebx,0
	int 80h

