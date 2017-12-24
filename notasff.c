
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
        Calcula a média das notas de qualquer número de alunos.

----------------------------------------------------------------------

    HISTÓRICO
        201626092202: João Paulo, setembro de 2016
            - Capítulo 7 Matrizes 185
    
*/

#include "stdio.h"
#include "stdlib.h"

#define TAMANHO 50   // não podemos usar const

int main(){

    float media = 0.0, notas[TAMANHO];
    int i = 0, j;

    do{

        if(i >= TAMANHO){
            printf("BUFFER LOTADO.\n");
            
            i++;

            break;
        }
        
        printf("Digite a nota do aluno %d : ", i + 1);
            scanf("%f", &notas[i]);

    }while(notas[i++] >= 0.0);

    i--;

    for(j = 0; j < i; j++)
        media += notas[j]; 
    
    media /= i;

    printf("Média das notas: %.2f\n", media);

    return(0);

}
