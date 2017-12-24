/*  NOME
        fordemo.c    

    SINOPSES
        ./fordemo
        ********************

    DESCRIÇÃO
        Laços são comandos usados sempre que uma ou mais instruções tiverem de ser
        repetidas enquanto uma certa condição estiver sendo satisfeita. Em C exitem
        três comandos de laços:
            for
            while
            do-while

        O laço for é geralmente usado quando queremos repetir algo por um número 
        fixo de vezes.

        Mostra um uso simples do laço for.

-----------------------------------------------------------------------------------

    HISTÓRICO
        201619081129: João Paulo, agosto de 2016
            Capítulo 3 - Laços - Treinamento em linguagem C - Página 61

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i;

    for(i = 0; i < 20; i++) // Imprime 20 *
        printf("%c", '*');

    printf("\n");

    return(0);
}
