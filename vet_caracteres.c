/*  NOME
       vet_caracteres.c

    SINOPSES
        ./vet_caracteres.c
        Prezado(a) [NOME]:
        Informe seu CPF (digitos e simbolos): [CPF]
        Conferindo...
        [CPF]

    DESCRIÇÃO
        Vetores de caracteres:
            Utilizados para armazenar símbolos da tabela ASCII.

----------------------------------------------------------------------

    HISTÓRICO
        201625091134: João Paulo, setembro de 2016.
            - Parte6.pdf / Aula sobre vetores, strings e matrizes 

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    char nome[30] = {'S', '.', 'A', '.', ' ', '-', ' ', 'a', 'u', 't', 'o', 'n', 'o', 'm', 'o', 'u', 's', ' ', 's', 'y', 's', 't', 'e', 'm', 's'};

    char cnpj[14];
    int i;

    printf("Prezado Grupo ");
        for(i = 0; i < 25; i++)
            printf("%c", nome[i]);
        
        printf(":\n");

    printf("Informe seu CNPJ (digitos e simbolos:): ");
        for(i = 0; i < 14; i++)
            scanf("%c", &cnpj[i]);

    puts("Conferendo...");

    for(i = 0; i < 14; i++)
        printf("%c", cnpj[i]);

    puts("");

    return(0);

}
