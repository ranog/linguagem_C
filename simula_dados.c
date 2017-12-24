/*  NOME
        simula_dados.c

    SINOPSES
        ./simula_dados.c
        Numero de lançamentos: [valor]
        face [valor]: [*] ... [*] 


    DESCRIÇÃO
        Simular o lançamento de um dado n vezes e imprimir um 
        histograma que informa o número de vezes que cada face ocorre.

----------------------------------------------------------------------

    HISTÓRICO
        201625091103: João Paulo, setembro de 2016
            - Parte6.pdf / Aula sobre vetores, strings e matrizes

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, n, face, frequencia[6] = {0}; // {0} inicia o vetor com 0.

    printf("Numero de lançamentos: ");
        scanf("%d", &n);

    srand(time(0)); // inicia o gerador de números aleatórios
    
    for(i = 0; i < n; i++){
        face = rand()%6; // retorna um inteiro entre 0 e RAND_MAX

        frequencia[face]++; 
    }

    for(face = 0; face < 6; face++){
        printf("face %d: ", face + 1);

        for(i = 0; i < frequencia[face]; i++)
            printf("*");
        
        printf("\n");
    }

    return(0);

}
