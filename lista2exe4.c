/*  NOME
        lista2exe4.c

    SINOPSES
        ./lista2exe4
        Digite os lados: [VALOR] [VALOR] [VALOR]
        [TIPO DO TRIÂNGULO]
            ou
        [NÃO É TRIÂNGULO]

    DESCRIÇÃO
        Lê 3 números reais positivos e verifica se eles podem ser
        considerados como os lados de um triângulo. Em caso negativo,
        informa que "Não é triângulo"

---------------------------------------------------------------------

    HISTÓRICO
        201630080914: João Paulo, agosto de 2016
            - Lista 2 / Introdução a linguagem C

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    float A, B, C;  // lados do triângulo

    printf("Digite os lados: ");
        scanf("%f %f %f",&A, &B, &C);

    if((A != 0 && B != 0 && C != 0) && (A + B > C || A + C > B || B + C > A)){
        if(A == B && A == C)
            printf("Equilatero\n");
        else{
            if(A != B && A != C && B != C)
                printf("Escaleno\n");
            else
                printf("Isósceles\n");
        }
    }
    else
        printf("NÃO É TRIÂNGULO\n");

    return(0);

}
