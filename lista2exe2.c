/*  NOME
            lista21exe2.c

    SINOPSES
            ./lista2exe2
            Digitar a temperatura em graus Celsius (C): [VALOR]
            KELVIN: [VALOR] K
            FAHRENHEIT: [VALOR] F
            


    DISCRIÇÃO
            Lê um valor de temperatura em graus Celsius (C) e 
            apresenta o correspondente valor em Kelvin (K) e 
            Fahrenheit (F).            

---------------------------------------------------------------------

    HISTÓRICO
            201629081936: João Paulo, Agosto de 2016
                - Lista 2 / Introdução a linguagem C

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    float C, K, F;

    printf("Digitar a temperatura em graus Celsius (C): ");
        scanf("%f", &C);

    K = C + 273.;
    F = ((9./5.)*C) + 32.;

    printf("KELVIN: %.2f\nFAHRENHEIT: %.2f\n", K, F);

    return(0);

}

