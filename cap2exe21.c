/*  NOME
        cap2exe21.c

    SINOPSES
        ./cap2exe21
        Digite a pontuação do 1° colocado: [PONTOS]
        Digite a pontuação do 2° colocado: [PONTOS]
        Digite a pontuação do 3° colocado: [PONTOS]
        1° Colocado: R$ [VALOR]
        2° Colocado: R$ [VALOR]
        3° Colocado: R$ [VALOR]        
 
        
    DESCRIÇÃO
        Programa solicita o número de pontos dos três primeiros colocados de um 
        concurso e imprime a importância que caberá a cada um.

-----------------------------------------------------------------------------------

    HISTÓRICO
        201615081718: João Paulo, agosto de 2016
            Exercício 21 - Capítulo 2 Operadores

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int pontos1, pontos2, pontos3, pontos;
    float colocado1, colocado2, colocado3;

    printf("Digite a pontuação do 1° colocado: ");
        scanf("%d", &pontos1);
    printf("Digite a pontuação do 2° colocado: ");
        scanf("%d", &pontos2);
    printf("Digite a pontuação do 3° colocado: ");
        scanf("%d", &pontos3);
        
    pontos = pontos1 + pontos2 + pontos3;

    colocado1 = (780000./(float)(pontos)) * (float)(pontos1);
    colocado2 = (780000./(float)(pontos)) * (float)(pontos2);
    colocado3 = (780000./(float)(pontos)) * (float)(pontos3);

    printf("1° Colocado: R$ %.2f\n", colocado1);
    printf("2° Colocado: R$ %.2f\n", colocado2);
    printf("3° Colocado: R$ %.2f\n", colocado3);        

    //system("pause");
    return(0);
}
