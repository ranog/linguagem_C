
/*  NOME
        lista4exe2.c

    SINOPSES
        ./lista4exe2
        Digite dois números inteiros: [valor] [valor]
        MMC = [valor]
    
    DESCRIÇÃO
        Programa calcula o mínimo multiplo comum de dois números 
        inteiros.

---------------------------------------------------------------------

    HISTÓRICO
        201617091951: João Paulo, agosto de 2016
            - Lista 4 / Esctruturas de repetição

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int MMC, MDC = 1, dividendo, divisor, A, B;

    printf("Entre com dois números inteiros: ");
        scanf("%d %d", &A, &B);

    dividendo = A;
    divisor = B;    

    while(MDC != 0){
        MDC = dividendo % divisor;
        dividendo = divisor;
        divisor = MDC;
    }

    MDC = dividendo;

    MMC = (A * B) / MDC;

    printf("MMC = %d\n", MMC);

    return(0);

}
