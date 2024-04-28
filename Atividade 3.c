#include <stdio.h>


/*
Escreva uma fun��o em C que, dada um n�mero real como par�metro,
retorne a parte inteira e a parte fracion�ria desse n�mero. Escreva tamb�m um
programa que chame essa fun��o.
Prot�tipo da fun��o:
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


