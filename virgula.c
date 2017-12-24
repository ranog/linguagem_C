/*  NOME
        virgula.c

    SINOPSES
        ./virgula
        0 2 4 ... 96 98

    DESCRIÇÃO
        Mostra o uso do operador vírgula no laço for
        Imprime os números de 0 a 98 de 2 em 2

        Qualquer uma das expressões de um laço for pode conter várias instruções
        separadas por vírgulas. A vírgula, nesse caso, é um operador C que significa
        "faça isso e depois isso". Um par de expressões separadas por vírgula é 
        avaliado da esquerda para a direita.

-----------------------------------------------------------------------------------

    HISTÓRICO
        201620081405: João Paulo, agosto de 2016
            O operador vírgula - Capítulo 3 Laços - Página 65
                Treinamento de linguagem C

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, j;

    for(i = 0, j = i; (i + j) < 100; ++i, ++j)
        printf("%d ", i + j);

    printf("\n");

    return(0);

}
