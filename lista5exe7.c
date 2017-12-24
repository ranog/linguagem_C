
/*  NOME
        lista5exe7.c

    SINOPSES
        ./lista5exe7
        Digite um número inteiro e positivo: [valor]
        [valor] ... [valor]
        
    DESCRIÇÃO
        7. Crie um programa que imprima todos os números primos até um
        número informado pelo usuário.

----------------------------------------------------------------------

    HISTÓRICO
        - 201619092301: João Paulo, setembro de 2016
            - Lista 5 / estruturas de repetição

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, j, x, cont = 0;

    printf("Digite um número inteiro e positivo: ");
        scanf("%d", &x);

        for(i = 2; i <= x; i++){
            
            for(j = 1; j != i; j++){
                
                if( i % j == 0){ cont++; }
                
                if(cont == 2){  
                    printf("%d ", i); 
                }
            }
        }

    return(0);

}
