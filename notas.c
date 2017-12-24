/*  NOME
        notas.c

    SINOPSES
        ./notas
        Digite a nota do aluno 1 : [valor]        
        Digite a nota do aluno 2 : [valor]        
        Digite a nota do aluno 3 : [valor]        
        Digite a nota do aluno 4 : [valor]        
        Digite a nota do aluno 5 : [valor]        

    DESCRIÇÃO
        Calcula a média de cinco notas (com e sem matriz).

----------------------------------------------------------------------

    HISTÓRICO
        201626092118: João Paulo, setembro de 2016
            - Capítulo 7 Matrizes 182
    
*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    // sem matriz
    int nota0, nota1, nota2, nota3, nota4;
    
    float media;  // usado para ambos os casos

    // com matriz
    int i, notas[5];

    printf("---------------Sem matriz: \n");

    printf("Digite a nota do aluno 1 : ");
        scanf("%d", &nota0);        
    
    printf("Digite a nota do aluno 2 : ");
        scanf("%d", &nota1);

    printf("Digite a nota do aluno 3 : ");
        scanf("%d", &nota2);        
    
    printf("Digite a nota do aluno 4 : ");
        scanf("%d", &nota3);

    printf("Digite a nota do aluno 5 : ");
        scanf("%d", &nota4);

    media = (nota0 + nota1 + nota2 + nota3 + nota4) / 5.;

    printf("Média das notas: %.2f\n", media);

    printf("\n-----------------Com matriz: \n");

    media = 0.0;

    for(i = 0; i < 5; i++){
        printf("Digite a nota do aluno %d : ", i+1);
            scanf("%d", &notas[i]);
    
        media += notas[i];
    }

    media /= 5.0;

    printf("Média das notas: %.2f\n", media);

    return(0);

}
