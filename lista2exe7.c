/*  NOME
        lista2exe7.c

    SINOPNES
        ./lista2exe7
        Digite um valor para x: [VALOR1]
        x = [VALOR2]

    DESCRIÇÃO
        Usurario informa um valor para x e o programa retorma o 
        resultado conforme a função de f(x) descrita abaixo.        

---------------------------------------------------------------------

    HISTÓRICO
        201626081932: João Paulo, Agosto de 2016
            Escreva um programa que calcule o valor da função:

                      |  0, x <= 0
                f(x)  |  x + 1, 0 < x <= 10
                      |  (x^2)/2, x > 10

        Para um valor de x informado pelo usuário.

*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){


    float x;

    printf("Digite um valor para x: ");
        scanf("%f", &x);

    if(x <= 0){
        printf("x = 0\n");
    }
    else{
        if( x <= 10){
            printf("x = %.2f\n", ++x);
        }
        else 
            printf("x = %.2f\n", pow(x, 2)/2.);
    }

    return(0);

}
