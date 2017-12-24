/*  NOME
        biblioteca-padrao.c

    SINOPSES
        ./biblioteca-padrao

        Pressione uma tecla [CARSCTERE]
        A tecla sucessora ASCII é [CARACTERE]

    DESCRIÇÃO

        Mostra a função getchar() e utchar()        

        A função getchar() aguarda o próximo caractere da entrada 
        padrão (teclado) e retorna o caractere lido. Essa função só 
        termina a leitura quando a tecla [ENTER] é pressionada.

        A função putchar() imprime um caractere na saída padrão (vídeo)

        Ambas tem protótipo definido no arquivo stdio.h

----------------------------------------------------------------------

    HISTORICO
        201613080045: João Paulo, agosto de 2016
            - Capítulo 2 / Operadores:
                - As funções de biblioteca-padrão getchar() e putchar()

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    char ch;

    printf("\nPressione uma tecla ");

    ch = getchar(); // aguarda uma tecla no teclado

    printf("\nA tecla sucessora ASCII é ");
    
    putchar(ch + 1);
    
    putchar('\n');

    //system("pause");
    return(0);
}
