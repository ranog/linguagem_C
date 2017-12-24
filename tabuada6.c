/*  NOME
        tabuada6.c

    SINOPSES
        ./tabuada6

           1 x 6 =   6   
                .
                .
                .    
          10 x 6 =  10 

          10 x 6 =  10
                .
                .       
                .
           1 x 6 =   6
               

    DESCRIÇÃO
        Imprime a tabuada do 6 e imprime invertida.
        
-----------------------------------------------------------------------------------

    HISTÓRICO
        201619081532: João Paulo, agosto de 2016
            Sintaxe do laço for

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i;

    for(i = 1; i <= 10; ++i)
        printf("\n%4d x 6 = %4d", i, i*6);

    printf("\n\n");

    // invertida
    for(i = 10; i > 0; --i)
        printf("\n%4d x 6 = %4d", i, i*6);

    printf("\n\n");
    return(0);
}
