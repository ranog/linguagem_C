/*  NOME
        tabuada.c

    SINOPSES
        ./tabuada
        TABUADA DO 2     ...    TABUADA DO 5
           2 x 1 = 2     ...       5 x 1 = 5
                .                       .
                .        ...            .
                .                       .

    DESCRIÇÃO
        Imprime as tabuadas do 2 ao 9.

        Quando um laço for faz parte do corpo de outro laço for, dizemos que o laço
        interno está aninhado.

        O laço for mais externo (da variável k) é executado duas vezes: uma para 
        imprimir o primeiro bloco de tabuadas (de 2 a 5); e outra, para imprimir o
        segundo bloco (de 6 a 9).

        O segundo laço for imprime os títulos. Os dois laços mais internos imprimem
        as tabuadas propriamente ditas.

-----------------------------------------------------------------------------------

    HISTÓRICO
        201621081134: João Paulo, agosto de 2016
            Laços for aninhados - Capítulo 3 laços - Página 69-70
                Treinamento em linguagem C

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, j, k;

    system("cls");  // limpa a tela

    for(k = 0; k <= 1; k++){
        printf("\n");

        for(i = 1; i <= 4; i++)
            printf("TABUADA DO %3d    ", i + 4 * k + 1);

        printf("\n");
    
    for(i = 1; i <= 9; i++){ 
        for(j = 2 + 4 * k; j <= 5 + 4 * k; j++)
            printf("%3d x%3d = %3d    ", j, i, j * i );

        printf("\n");
    }
    
    }

    return(0);

}
