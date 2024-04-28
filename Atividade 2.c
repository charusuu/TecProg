#include <stdio.h>

/*
2 - Escreva um programa em C que declare duas variáveis inteiras. Compare os
endereços de memória dessas variáveis e exiba o endereço de memória da
variável com o maior endereço.
*/

int main() {
    int var1, var2;

    
    
    int *enderecoVar1 = &var1;
    int *enderecoVar2 = &var2;

    
    
    printf("Endereço de memoria da variavel var1: %p\n", (void *)enderecoVar1);
    printf("Endereço de memoria da variavel var2: %p\n", (void *)enderecoVar2);

    
    
    if (enderecoVar1 > enderecoVar2) {
        printf("A variavel var1 possui o maior endereco de memoria.\n");
        
        printf("Endereco de memoria: %p\n", (void *)enderecoVar1);
        
    } else if (enderecoVar2 > enderecoVar1) {
        printf("A variavel var2 possui o maior endereço de memoria.\n");
        
        printf("Endereco de memoria: %p\n", (void *)enderecoVar2);
        
    } else {
        printf("Os endereços de memoria das variáveis sao iguais.\n");
    }

    return 0;
}

