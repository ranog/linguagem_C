/*  NOME
        lista3exe1.c

    SINOPSES
        ./lista3exe1
        Digite o DDD: [DDD]
        [CIDADE]

    DESCRIÇÃO
        Programa lê um número de DDD e informa a qual cidade pertence.

---------------------------------------------------------------------

    HISTÓRICO
        201601090817: João Paulo, agosto de 2016
            - Lista 3 / estruturas de seleção

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int DDD;

    printf("Digite o DDD: ");
        scanf("%d", &DDD);

    switch(DDD){
        case 11 : printf("São Paulo\n");            break;
        case 21 : printf("Rio de Janeiro\n");       break;
        case 31 : printf("Belo Horizonte\n");       break;
        case 41 : printf("Curitiva\n");             break;
        
        default : printf("Uma cidade no Brasil\n");
    }

    return(0);

}
