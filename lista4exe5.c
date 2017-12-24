/*  NOME
        lista4exe5.c

    SINOPSES
        ./lista4exe5
        [valor] [valor] ... [valor]

    DESCRIÇÃO
        5. Qual é a saida do seguinte programa em C?
        
----------------------------------------------------------------------

    HISTÓRICO
        -   201619092210: João Paulo, setembro de 2016
            -   Lista 4 / Estruturas de repetição

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int number = 1;

    while(1){

        ++number;

        if((number % 3) == 0) continue;
        if(number == 16) break;
        if((number % 2) == 0) number += 3;
        else number -= 3;

        printf("%d ", number);

    }
        printf("\n5 4 2 7 11 10 8 13 17 16 14\n");


    return(0);
    
}
