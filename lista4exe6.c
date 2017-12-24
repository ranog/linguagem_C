
/*  NOME
        lista4exe6.c

    SINOPSES
        ./lista4exe5
        [valor] [valor] ... [valor]
        [valor] [valor] ... [valor]

    DESCRIÇÃO
        6. E se no programa anterior a linha if(number == 16) fosse
        substituída por if(number == 19) qual seria a saída do 
        programa?
        
----------------------------------------------------------------------

    HISTÓRICO
        -   201619092224: João Paulo, setembro de 2016
            -   Lista 4 / Estruturas de repetição

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int number = 1;

    while(1){

        ++number;

        if((number % 3) == 0) continue;
        if(number == 19) break;
        if((number % 2) == 0) number += 3;
        else number -= 3;

        printf("%d ", number);

    }
        printf("\n5 4 2 7 11 10 8 13 17\n");


    return(0);
    
}
