/*  NOME
            lista2exe1.c  

    SINOPSES
            ./lista2exe1
            Digite as notas: [NOTA1] [NOTA2] [NOTA3]
            Digite os pesos: [PESO1] [PESO2] [PESO3]

            MÉDIA PONDERADA: [MEDIA]

    DESCRIÇÃO
            Programa lê 3 notas e os respectivos pesos e mostra a 
            média ponderada.

---------------------------------------------------------------------

    HISTÓRICO
            201629081907: João Paulo, Agosto de 2016
                - Lista 2 / Introdução à linguagem C

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    float nota1, nota2, nota3, peso1, peso2, peso3, media, pesos;

    printf("Digite as notas: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite os pesos: ");
        scanf("%f %f %f", &peso1, &peso2, &peso3);
        
    pesos = peso1 + peso2 + peso3;
    media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/pesos;

    printf("\nMÉDIA PONDERADA: %.2f\n", media);

    return(0);

}
