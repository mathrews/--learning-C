bits 64

section .text

global assembly
assembly:
  mov eax, 500 ; Registrando o numero 888 no registrador eax
  mov ebx, 500 ; Registrando o numero 777 no registrador ebx
  add eax, ebx ; Adicionando o valor do registrador ebx ao registrador eax
  mov [0x100], eax ; Registrando o valor do registrador eax na memória
  ret