:Boot
BITS 16

start:
	mov ax, 07C0h
	add ax, 20h
	mov ss, ax
	mov sp, 4096

	mov ax, 07C0h
	mov ds, ax

	mov si, texto
	call imprimir
	cli
	hlt

data:
	texto db 'Hola mundo Especializacion en Linux!', 0

imprimir:
	mov ah, 0Eh

.imprime_caracter_
	lodsb
	cmp al, 0
	je .reaizado
	int 10h
	jmp .imprime_caracter
.realizado:
	ret

times 510-($-$$) db 0
dw 0xAA55


