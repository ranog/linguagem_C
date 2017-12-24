/*  NOME
        bissexto.c

    SINOPSES
        ~:./bissexto
        Digite um ano qualquer: [ANO]
        Ano Bissexto | Ano não Bissexto
        

    DESCRIÇÃO
        Programa solicita ao usuário um ano qualquer e imprime "Ano Bissexto" ou 
        "Ano não Bissexto" conforme o valor do operador condicional ternário:

            exp1 ? exp2 : exp3

-----------------------------------------------------------------------------------

    HISTORICO
        201613082051: João Paulo, agosto de 2016
            Exercício 17 do capítulo 2 sobre operadores

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int ano;

    printf("Digite um ano qualquer: ");
    scanf("%d", &ano);

    printf("%s\n", (ano % 4 == 0 || ano % 100 != 0 && ano % 400 == 0) ? "Ano Bissexto" : "Ano não Bissexto");    

    //system("pause");
    return(0);
}
