/*  NOME
        notasf.c

    SINOPSES
        ./notasf
        Digite a nota do aluno 1 : [valor]        
        Digite a nota do aluno 2 : [valor]        
        Digite a nota do aluno 3 : [valor]        
        Digite a nota do aluno 4 : [valor]        
        Digite a nota do aluno 5 : [valor]        

    DESCRIÇÃO
        Calcula a média de cinco notas usando matriz float.

----------------------------------------------------------------------

    HISTÓRICO
        201626092202: João Paulo, setembro de 2016
            - Capítulo 7 Matrizes 184
    
*/

#include "stdio.h"
#include "stdlib.h"

#define TAMANHO 5   // não podemos usar const

int main(){

    float media = 0.0, notas[TAMANHO];
    int i;

    for(i = 0; i < TAMANHO; i++){
        printf("Digite a nota do aluno %d : ", i+1);
            scanf("%f", &notas[i]);
    
        media += notas[i];
    }

    media /= TAMANHO;

    printf("Média das notas: %.2f\n", media);

    return(0);

}
