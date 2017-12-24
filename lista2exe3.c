/*  NOME
        lista2exe3.c

    SINOPSES
        ./lista2exe3

    DESCRIÇÃO
        Programa lê os valores dos coeficientes da equação de segundo
        grau Ax^2 + Bx + C = 0 e apresenta as ráizes reais, caso 
        existam.

---------------------------------------------------------------------

    HISTÓRICO
        201630080815: João Paulo, agosto de 2016
            - Lista 2 / Introdução à linguagem C

*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){

    float a, b, c, delta, x1, x2;

    printf("Digite os coeficientes: ");
        scanf("%f %f %f", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;

    if(delta < 0){ 
        printf("Não existe raizes reais\n"); 
    }
    else{
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("x1 = %.2f\nx2 = %.2f\n", x1, x2); 
    }
    return(0);

}
