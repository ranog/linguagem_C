/*  NOME
        cap3exe13.c

    SINOPSES
        ./cap3exe13
        [VALOR]     [VALOR]     [VALOR]...

    DESCRIÇÃO
        Exercicio 13. Qual é a saída do programa seguinte?
            - conferindo a resposta

---------------------------------------------------------------------

    HISTÓRICO
        201605092331: João Paulo, agosto de 2016
            - Capítulo 3 / Laços - Treinamento de linguagem C

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int a;

    for(a = 36; a > 0; a /= 2)
        printf("%d\t", a);

    puts(" ");

    return(0);

}
