/*  NOME
        bloco.c

    SINOPSES
        ./bloco
        150
        5

    DESCRIÇÃO
        Mostra o uso de um bloco dentro de outro bloco

        Um aspecto importante dos blocos de código é o de que uma variável declarada
        dentro de um bloco não é visível fora dele.

        Em todo lugar onde é possível colocar uma instrução C, é também possível 
        inserir um bloco de código.

-----------------------------------------------------------------------------------

    HISTÓRICO
        201621081113: João Paulo, agosto de 2016
            Visibilidade de variáveis de bloco - Capítulo 3 laços - Página 68
                Criando blocos dentro de blocos - Página 69
            Treinamento em linguagem C

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i = 5;

    {   // início do bloco

        int i = 150;    

        printf("%d", i); // imprime 150

    }

    printf("\n%d\n", i);

    return(0);

}
