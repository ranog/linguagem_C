/*  NOME
        cap3exe14.c

    SINOPSES
        ./cap3exe14
        I
        I
        E

    DESCRIÇÃO
        Programa imprime uma letra I, como os laços while e for.
        Imprime uma letra E.

---------------------------------------------------------------------

    HISTÓRICO
        201607091647: João Paulo, agosto de 2016
            - Exercicio 14 / Capítulo 3 - Laços / Pagina 79


*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i = 0, e = 0;

/* Imprimi a letra I com o uso do laço while() */
    printf("Laço while: ");

    printf("\n\tIIIIIII\n");

    while( i < 17 ){
        printf("\t  III\n");
        i++;
    }

    printf("\tIIIIIII\n");
    puts("\n");

/* Imprimi a letra I com o uso do laço for() */
    printf("Laço for: ");

    printf("\n\tIIIIIII\n");

    for(i = 0; i < 17; i++)
        printf("\t  III\n");
    
    printf("\tIIIIIII\n"); 

/* Imprime a letra E com o uso do laço while() */

    printf("\n\tEEEEEEEE\n");

    while( e < 8 ){
        printf("\tEEE\n");
        e++;
    }   

    printf("\tEEEEEEEE\n");

    e = 0; 
    while(e < 8){
        printf("\tEEE\n");
        e++;
    }

    printf("\tEEEEEEEE\n\n");

/* Imprime a letra E com o uso do laço for() */

    printf("\tEEEEEEEE\n");

    for(e = 0; e < 8; e++)
        printf("\tEEE\n");
    
    printf("\tEEEEEEEE\n");

    for(e = 0; e < 8 ; e++)
        printf("\tEEE\n");

    printf("\tEEEEEEEE\n\n");
           
/* o laço for() é a melhor opção, podemos iniciar a variavel no 
proprio laço, fica mais limpo o codigo, mais facil de ler. E por 
saber e ante mão quantas vezes o laço vai funcionar. */

    return(0);

}
