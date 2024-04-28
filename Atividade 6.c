#include <stdio.h>

/*
Escreva uma fun��o em C que aceita como par�metro um array de inteiros
com N valores e determina o maior elemento do array, bem como o n�mero de
vezes que esse elemento ocorreu no array. Por exemplo, para um array com os
seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a fun��o deve retornar para o
programa que a chamou o valor 15 e o n�mero 3 (indicando que o n�mero 15
ocorreu 3 vezes). A fun��o deve ser do tipo void.
*/


void encontrarMaiorEContagem(int arr[], int N, int *maior, int *contagem) {
    if (N <= 0) {
        printf("Array vazio ou inv�lido.\n");
        return; 
    }

    
    *maior = arr[0]; 
    *contagem = 0;   

    
    int i;
    for (i = 0; i < N; i++) {
        if (arr[i] > *maior) {
            *maior = arr[i]; 
            *contagem = 1;   
        } else if (arr[i] == *maior) {
            *contagem += 1;  
        }
    }
}

int main() {
    int N;

    
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);

    
    if (N <= 0) {
        printf("Tamanho do array inv�lido.\n");
        return 1; 
    }

    int array[N];

    
    int i;
    printf("Digite os elementos do array de inteiros:\n");
    for ( i = 0; i < N; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int maiorElemento, ocorrencias;

    
    encontrarMaiorEContagem(array, N, &maiorElemento, &ocorrencias);

    
    printf("Maior elemento: %d\n", maiorElemento);
    printf("Numero de ocorrencias: %d\n", ocorrencias);

    return 0;
}

