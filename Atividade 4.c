#include <stdio.h>

/*
4 - Implemente uma fun��o em C que receba como par�metro um array de
n�meros reais de tamanho N e retorne a quantidade de n�meros negativos
presentes nesse array. O prot�tipo da fun��o deve ser o seguinte:
int negativos(float *vet, int N);
*/

int negativos(float *vet, int N) {
    int count = 0;
    int i;
    
    
    for (i = 0; i < N; i++) {
        if (vet[i] < 0) {
            count++; 
        }
    }

    return count; 
}



int main() {
    float numeros[] = {1.5, -2.7, 0.0, -3.14, 5.2, -1.0,-9.0,-20};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); 

    int qtdeNegativos = negativos(numeros, tamanho); 

    printf("Quantidade de n�meros negativos: %d\n", qtdeNegativos);

    return 0;
}

