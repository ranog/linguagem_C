/*  NOME
        lista5exe1.c

    SINOPSES
        ./lista5exe1
        Digite o número de fatores: [valor]
        O valor de H = [valor] com [valor] elementos.

    DESCRIÇÃO
        Sendo a série H = 1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/N, 
        escreva um programa para calcular H, supondo que N será 
        fornecido pelo usuário.

----------------------------------------------------------------------

    HISTORICO
        - 201618091357: João Paulo, setembro de 2016
            - Lista 5 / estruturas de repetição

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, N;   // N - número fornecido pelo usuário
                // i - controle do laço  
    float H;    // H - série harmônica

    printf("Digite o número de fatores: ");
        scanf("%d", &N);

    for(i = 1; i <= N; i++){

        H += 1./(float)(i);

    }

    printf("O valor de H = %.2f com %d elementos.\n", H, N);

    return(0);

}
