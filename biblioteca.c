/*  NOME
        biblioteca.c

    SINOPSES
        ./biblioteca
        Pressione uma tecla [CARÁCTERE]
        A tecla sucessora ASCII é [CARÁCTERE]

    DESCRIÇÃO
        Mostra a função getche()
        
        A função getche() retorna o caractere lido do teclado. O valor
        retornado de uma função pode ser chamado de valor da função ou
        resultado da função

        A função getch() é similar a getche(), exceto pelo fato de o 
        caractere digitado não ser impresso no vídeo. Dizemos que a 
        função getch() não ecoa no vídeo.

----------------------------------------------------------------------

    HISTORICO
        201612082330: João Paulo, agosto de 2016
            - Capítulo 2 / Operadores:
                - As funções de biblioteca getche() e getch()

*/

#include "stdio.h"
#include "stdlib.h"
#include "gconio.h"  // para getche() e getch()

int main(){

    char ch;

    printf("\nPressione uma tecla ");
    
    ch = getche();      // aguarda uma tecla no teclado
    // ch = getch();    // comentar a linha acima e descomentar essa

    printf("\nA tecla sucessora ASCII é %c.\n", ch+1);

    //system("pause");
    return(0);
}
