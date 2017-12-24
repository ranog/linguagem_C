/*  NOME
        multiplo3.c

    SINOPSES
        ./multiplo3
        3   6   9   ... 99

    DESCRIÇÃO
        Imprime os múltiplos de 3 entre 3 e 100

-----------------------------------------------------------------------------------

    HISTÓRICO
        201619081649: João Paulo, agosto de 2016
            Sintaxe do laço for 
                Capítulo 3 Laços - Treinamento em lingugem C - Página 64 - Exemplo

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i;

    for(i = 3; i <= 100; i += 3) // i += 3 <=> i = i + 3
        printf("%d\t", i);

    printf("\n");

    return(0);

}
