#include <stdio.h>
#include <stdbool.h> 

/*
7 - Elabore uma função em C que receba duas strings como parâmetros e
verifique se a segunda string ocorre dentro da primeira. Utilize aritmética de
ponteiros para acessar os caracteres das strings.
*/


bool ocorrenciaString(const char *str1, const char *str2) {
    
    const char *p1 = str1;

    
    const char *p2 = str2;

    
    while (*p1 != '\0') {
        
        const char *temp = p1;

        
        while (*p2 != '\0' && *temp == *p2) {
            temp++; 
            p2++;   
        }

        
        if (*p2 == '\0') {
            return true; 
        }

        
        p2 = str2;

        
        p1++;
    }

    return false; 
}

int main() {
    char str1[100], str2[50];

    
    printf("Digite a primeira string: ");
    scanf("%99s", str1); 

    
    printf("Digite a segunda string: ");
    scanf("%49s", str2); 

    
    if (ocorrenciaString(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string NAO ocorre dentro da primeira.\n");
    }

    return 0;
}

