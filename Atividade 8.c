#include <stdio.h>

/*
8 - Crie um programa em C que contenha um array de inteiros com 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima
o dobro de cada valor lido.
*/

int main() {
    int array[5]; 
    int *ptr;     

    
    printf("Digite os 5 elementos do array de inteiros:\n");
    
    
    ptr = array;
	int i;
    
    for ( i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", ptr + i); 
    }

    
    printf("\nO dobro de cada elemento:\n");
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i + 1, *(ptr + i) * 2); 
    }

    return 0;
}

