/*  NOME
        cap2exe19.c    

    SINOPSES
        ./cap2exe19
        Entre com o total de cabeças: [VALOR]
        Entre com o total de pés: [VALOR]
        Total de coelhos: [VALOR]
        Total de patos: [VALOR]

    DESCRIÇÃO
        Programa solicita ao usuário o total de cabeça e o total de pés de um 
        cercado com vários patos e coelhos, retornado a quantidade de cada animal.

-----------------------------------------------------------------------------------

    HISTORICO
        201614082346: João Paulo, agosto de 2016
            Exercício 19 - Capítulo 2 Operadores

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int cabecas, pes, coelhos, patos;

    printf("Entre com o total de cabeças: ");
    scanf("%d", &cabecas);

    printf("Entre com o total de pés: ");
    scanf("%d", &pes);

    patos = (4 * cabecas - pes) / 2;
    coelhos = cabecas - patos;

    printf("Total de coelhos: %d\nTotal de patos: %d\n", coelhos, patos);

    //system("pause");
    return(0);
}
