#include <stdio.h>


/*
1 - Escreva um programa em C que declare uma vari�vel inteira, uma vari�vel
real e uma vari�vel char, al�m de declarar ponteiros para cada tipo de dado.
Associe as vari�veis aos ponteiros utilizando o operador de endere�o '&'. Em
seguida, modifique os valores de cada vari�vel utilizando os ponteiros. Por fim,
imprima os valores das vari�veis antes e ap�s a modifica��o. 
*/



int main() {
    int inteiro = 10;
    float real = 5.17;
    char caractere = 'D';

    int *ptrInt = &inteiro;
    float *ptrReal = &real;
    char *ptrChar = &caractere;

    // Imprimindo os valores originais
    
    printf("Valores originais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    // Modificar os valores utilizando os ponteiros
    
    *ptrInt = 20;
    *ptrReal = 40.718;
    *ptrChar = 'F';

    // Imprimir os valores ap�s a modificacao
    
    printf("\nValores modificados:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
