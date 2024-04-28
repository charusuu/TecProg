#include <stdio.h>


/*
1 - Escreva um programa em C que declare uma variável inteira, uma variável
real e uma variável char, além de declarar ponteiros para cada tipo de dado.
Associe as variáveis aos ponteiros utilizando o operador de endereço '&'. Em
seguida, modifique os valores de cada variável utilizando os ponteiros. Por fim,
imprima os valores das variáveis antes e após a modificação. 
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

    // Imprimir os valores após a modificacao
    
    printf("\nValores modificados:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
