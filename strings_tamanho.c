/*  NOME
        strings_tamanho.c

    SINOPSES
        ./strings_tamanho
        Digite seu nome:
        No nome [nome] existem [valor] caracteres

    DESCRIÇÃO
        O tamanho efetivo de uma string pode ser obtido contando-se o
        número de caracteres existentes antes do caractere '\0'

----------------------------------------------------------------------

    HISTÓRICO
        201625091228: João Paulo, setembro de 2016
            - Parte6.pdf / Operações com strings: tamanho

*/

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){



    char nome[80];
    int i, tamanho = 0;

    printf("Digite seu nome: ");
    gets(nome);

    for(i = 0; nome[i] != '\0'; i++)
        tamanho++;

    printf("Nome %s existem %d caracteres\n", nome, tamanho);

    printf("\n-Usando a biblioteca string.h e a função strlen()-\n\n");

    tamanho = strlen(nome);

    printf("Nome %s existem %d caracteres\n", nome, tamanho);


    
    return(0);

}
