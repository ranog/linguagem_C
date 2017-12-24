/*  NOME
        lista5exe3.c

    SINOPSES
        ./lista5exe3
        Digite um número inteiro: [número]
        Quadrado = [valor]
        Soma = [valor]

    DESCRIÇÃO
        3. Escreva um programa que implemente o seguinte algoritmo: o
           quadrado de um número positivo N é igual à soma dos N 
           primeiros números ímpares positivos.                        

----------------------------------------------------------------------

    HISTÓRICO
        - 201618092143: João Paulo, setembro de 2016
            - Lista 5 / estrutura de repetição

*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){

    int N, quadrado, soma = -1, total = 0;

    printf("\nDigite um número inteiro: ");
        scanf("%d", &N);

    quadrado = pow(N, 2);

    while(quadrado > total){
        
        soma += 2;
        total += soma;
           
    }

    printf("\n\tQuadrado = %d \n\tSoma = %d\n\n", quadrado, total);

    return(0);

}
