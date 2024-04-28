/*
10 – Defina uma estrutura de dados em C (usando struct) que represente um
aluno com as seguintes informações: nome, email, telefone e data de
nascimento. Quais serão os tipos de dados mais adequados para essa
estrutura? Como vocês alocariam memória para ela?
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Aluno {
    char nome[100];           // Nome do aluno (string de até 100 caracteres)
    char email[100];          // Email do aluno (string de até 100 caracteres)
    char telefone[20];        // Telefone do aluno (string de até 20 caracteres)
    char dataNascimento[11];  // Data de nascimento do aluno (formato dd/mm/aaaa)
};

int main() {
    
    struct Aluno *aluno1 = (struct Aluno *)malloc(sizeof(struct Aluno));

    if (aluno1 == NULL) {
        printf("Erro ao alocar memória para o aluno.\n");
        return 1; 
    }

   
    printf("Digite o nome do aluno: ");
    scanf("%99s", aluno1->nome); 

    printf("Digite o email do aluno: ");
    scanf("%99s", aluno1->email);

    printf("Digite o telefone do aluno: ");
    scanf("%19s", aluno1->telefone); 

    printf("Digite a data de nascimento do aluno (formato dd/mm/aaaa): ");
    scanf("%10s", aluno1->dataNascimento); 

    
    printf("\nDados do Aluno:\n");
    printf("Nome: %s\n", aluno1->nome);
    printf("Email: %s\n", aluno1->email);
    printf("Telefone: %s\n", aluno1->telefone);
    printf("Data de Nascimento: %s\n", aluno1->dataNascimento);

    
    free(aluno1);

    return 0;
}


