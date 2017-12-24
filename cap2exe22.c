/*  NOME
        cap2exe22.c
    
    SINOPSES
        ./cap2exe22
        Quantos kilos de latão se quer produzir: [KILOS]
        Cobre: [KILOS] kg
        Zinco: [KILOS] kg

    DESCRIÇÃO
        Programa solicita quantos quilos de latão se quer produzir e imprime quantos
        kilos de cobre e zinco são necessários.

-----------------------------------------------------------------------------------

    HISTÓRICO
        201615081932: João Paulo, agosto de 2016
            Exercício 22 - Capítulo 2 Operadores

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    float latao, cobre, zinco;

    printf("Quantos kilos de latão se quer produzir: ");
        scanf("%f", &latao);

    cobre = latao * (7. / 10.);
    zinco = latao * (3. / 10.);
        
    printf("Cobre: %.2f kg\n", cobre);
    printf("Zinco: %.2f kg\n", zinco);

    //system("pause");
    return(0);
}
