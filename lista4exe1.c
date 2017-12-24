/*  NOME
        lista4exe1.c

    SINOPSES
        ./lista4exe1
        Entre com dois números inteiros: [valor] [valor]
        MDC = [valor]
    
    DESCRIÇÃO
        Programa calcula o máximo divisor comum de dois números 
        inteiros usando o algoritmo de Euclides.

---------------------------------------------------------------------

    HISTÓRICO
        201609092043: João Paulo, agosto de 2016
            - Lista 4 / Esctruturas de repetição

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int MDC = 1, dividendo, divisor;

    printf("Entre com dois números inteiros: ");
        scanf("%d %d", &dividendo, &divisor);    

    while(MDC != 0){
        MDC = dividendo % divisor;
        dividendo = divisor;
        divisor = MDC;
    }

    printf("MDC = %d\n", dividendo);

    return(0);

}
