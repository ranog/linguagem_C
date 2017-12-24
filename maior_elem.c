/*  NOME
        maior_elem.c

    SINOPSES
        ./maior_elem
        Informe os elementos do vetor: 
        [valor1] ... [valor10]
        O maior elemento ([valor]) está na posição [valor]        

    DESCRIÇÃO
        Ler um vetor de interios com 10 elementos e exibir o valor e a
        posição do maior elemento.
    
----------------------------------------------------------------------

    HISTÓRICO
        - 201624092003: João Paulo, setembro de 2016
            - Parte6.pdf: Aula sobre vetores e matrizes

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, indice, x[10], maior=-999999;

    printf("Informe os elementos do vetor: \n");
        for(i = 0; i < 10; i++)
            scanf("%d", &x[i]);

    for(i = 0; i < 10; i++){
        if(x[i] > maior){
            maior = x[i];
            indice = i;
        }
    }

   printf("O maior elemento (%d) está na posição %d\n", maior, indice);   

    return(0);

}
