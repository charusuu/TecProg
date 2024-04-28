#include <stdio.h>

/*
2 - Escreva um programa em C que declare duas vari�veis inteiras. Compare os
endere�os de mem�ria dessas vari�veis e exiba o endere�o de mem�ria da
vari�vel com o maior endere�o.
*/

int main() {
    int var1, var2;

    
    
    int *enderecoVar1 = &var1;
    int *enderecoVar2 = &var2;

    
    
    printf("Endere�o de memoria da variavel var1: %p\n", (void *)enderecoVar1);
    printf("Endere�o de memoria da variavel var2: %p\n", (void *)enderecoVar2);

    
    
    if (enderecoVar1 > enderecoVar2) {
        printf("A variavel var1 possui o maior endereco de memoria.\n");
        
        printf("Endereco de memoria: %p\n", (void *)enderecoVar1);
        
    } else if (enderecoVar2 > enderecoVar1) {
        printf("A variavel var2 possui o maior endere�o de memoria.\n");
        
        printf("Endereco de memoria: %p\n", (void *)enderecoVar2);
        
    } else {
        printf("Os endere�os de memoria das vari�veis sao iguais.\n");
    }

    return 0;
}

