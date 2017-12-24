/*  NOME
        lista5exe6.c

    SINOPSES
        ./lista5exe6
        Digite um número inteiro e positivo: [valor]
        O número [valor] é primo!
        O número [valor] não é primo!

    DESCRIÇÃO
        6. Construa um programa que determine se um número informado
        pelo usuário é primo.

----------------------------------------------------------------------

    HISTÓRICO
        - 201619092301: João Paulo, setembro de 2016
            - Lista 5 / estruturas de repetição

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, x, div;

    printf("Digite um número inteiro e positivo: ");
        scanf("%d", &x);

    for(i = 1, div = 0; i <= x; i++)
        if(x % i == 0) div++;

    if(div == 2) printf("O número %d é primo!\n", x);
    else printf("O número %d não é primo!\n", x);
    
    return(0);

}
