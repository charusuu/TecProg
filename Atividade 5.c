#include <stdio.h>
#include <limits.h> 

/*
5 - Escreva uma função em C que receba um array de inteiros V, bem como os
endereços de duas variáveis inteiras, min e max, e armazene nessas variáveis
o valor mínimo e máximo encontrados no array. Além disso, escreva uma função
main que utilize essa função.
*/

void encontrarMinMax(int V[], int tamanho, int *min, int *max);


int main() {
    int tamanho;

   
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    
    if (tamanho <= 0) {
        printf("Tamanho do array inválido.\n");
        return 1; 
    }

    int array[tamanho];
	int i;
    
    printf("Digite os elementos do array de inteiros:\n");
    for (i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int min, max;

    
    encontrarMinMax(array, tamanho, &min, &max);

   
    printf("Valor minimo no array: %d\n", min);
    printf("Valor maximo no array: %d\n", max);

    return 0;
}

void encontrarMinMax(int V[], int tamanho, int *min, int *max) {
  
    if (V == NULL || tamanho <= 0) {
        printf("Array invalido.\n");
        return;
    }

    *min = INT_MAX; 
    *max = INT_MIN; 
	int i;
    
    for (i = 0; i < tamanho; i++) {
        if (V[i] < *min) {
            *min = V[i]; 
        }
        if (V[i] > *max) {
            *max = V[i]; 
        }
    }
}

