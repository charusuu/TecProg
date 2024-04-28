#include <stdio.h>


/*
Escreva uma função em C que, dada um número real como parâmetro,
retorne a parte inteira e a parte fracionária desse número. Escreva também um
programa que chame essa função.
Protótipo da função:
void frac(float num, int* inteiro, float* frac);
*/



void frac(float num, int *inteiro, float *frac) {
    
    *inteiro = (int)num;

    
    *frac = num - *inteiro;
}

int main() {
    float numero;
    int parteInteira;
    float parteFracionaria;

    
    printf("Digite um numero real: ");
    scanf("%f", &numero);

    
    frac(numero, &parteInteira, &parteFracionaria);

    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %.2f\n", parteFracionaria);

    return 0;
}


