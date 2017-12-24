/*  NOME
            whiledemo.c - mostra um uso simples do laço while no lugar de um laço for    

    SINOPSES
            ./whiledemo
            ********************

    DESCRIÇÃO
            Laços são comandos usados sempre que uma ou mais instruções tiverem de ser repetidas
            enquanto uma certa condição estiver sendo satisfeita. Em C exitem três comandos de 
            laços:

                for
                while
                do-while

            O comando while consiste na palavra-chave while seguida de uma expressão de teste entre
            parênteses. Se a expressão de teste for verdadeira, o corpo do laço é executado uma vez
            e a expressão de teste é avaliada novamente. Esse ciclo de teste e execução é repetido
            até que a expressão de teste se torne falsa (igual a zero), então o laço termina e o
            controle do programa passa para a linha seguinte ao laço.

            Em situações em que o número de interações é conhecido, como no programa fordemo.c, o
            laço for é a escolha mais natural.

---------------------------------------------------------------------------------------------------

    HISTÓRICO
        201619081129: João Paulo, agosto de 2016
            Capítulo 3 - Laços - Treinamento em linguagem C - Página 61

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i = 0;  // inicialização

    while(i < 20){  // teste

        printf("%c", '*');
        i++;

    }
    
    printf("\n");

    return(0);
}
