/*  NOME
        lista5exe2.c

    SINOPSES
        ./lista5exe2
        Digite o [ordem] número inteiro para soma: [valor]
        Quantidade = [valor] Soma = [valor]

    DESCRIÇÃO
        2. Escreva um programa que calcule e imprima a soma de N
        números fornecidos pelo usuário.

----------------------------------------------------------------------

    HISTÓRICO
        - 201618091442: João Paulo, setembro de 2016
            - Lista 5 / estrutura de repetição

*/

#include "stdio.h"
#include "stdlib.h"
#include "gconio.h"

int main(){

    int sum = 0, num, i = 0;

    printf("\nPara finalizar a soma aperte 0 + [ENTER]\n\n");

    do{

        printf("\tDigite o %d número inteiro para soma: ", ++i);
            scanf("%d", &num);
        
        sum += num;

    }while(num != 0);

    printf("\nQuantidade de n° = %d \nSoma = %d\n", i = i - 1, sum);
 
    return(0);

}
