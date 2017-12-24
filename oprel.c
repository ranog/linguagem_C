/*  NOME

    SINOPSES
        ~:./oprel
        Verdadeiro    1
        Falso         0

        O valor da expressão 4 + 1 < 3 é 0
        
       O valor da expressão 2 < 1 + 3 é 1        

    DESCRIÇÃO
        Mostra operadores relacionais. Os operadores relacionais fazem comparações.
        Mostra a precedência dos operadores relacionais. Eles têm precedência menor
        que a dos operadores aritméticos.

-----------------------------------------------------------------------------------

    HISTORICO
        201613081609: João Paulo, agosto de 2016
            - Capítulo 2 / Operadores / Pg 50-51:
                - Operadores realcionais > >= < <= == != :
                        - Precedência

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int verdadeiro, falso;

    verdadeiro = (15 < 20);
    falso = (15 == 20);

    printf("Verdadeiro\t%d\n", verdadeiro);
    printf("Falso\t\t%d\n", falso);

    // precedência dos operadores
    printf("\nO valor da expressão 4 + 1 < 3 é %d\n", 4+1<3);
    printf("\nO valor da expressão 2 < 1 + 3 é %d\n", 2<1+3);

    //system("pause");
    return(0);
}
