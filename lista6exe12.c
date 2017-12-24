/*
 lista6exe12.c - produto entre vetor-linha e vetor-coluna.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa calcula o produto de um vetor-coluna por um vetor-linha.

----------------------------------------------------------------------

 Histórico:

 v1.0 201629102040, João Paulo:
    - Lista 6 / Vetores e Matrizes - Exercicio 12.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

#define LinhaColuna 3

int main(){

    int i, R, vetorC[LinhaColuna], vetorL[LinhaColuna];

    srand(time(0));

    for(i = 0; i < LinhaColuna; i++){

        vetorC[i] = rand() % 10;
        vetorL[i] = rand() % 10;

    }

    for(i = 0; i < LinhaColuna; i++)
        printf("%d ", vetorL[i]);

    printf("\n\n");

    for(i = 0; i < LinhaColuna; i++)
        printf("%d\n", vetorC[i]);

    printf("\n\n");

    for(i = 0, R = 0; i < LinhaColuna; i++){
        
        R = R + vetorL[i] * vetorC[i];
    
        printf("%d\n", R);

    }

    return(0);

}
