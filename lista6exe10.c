/*
 lista6exe10.c - produto entre vetor e matriz.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa calcula o produto de uma matriz por um vetor-coluna.

----------------------------------------------------------------------

 Histórico:

 v1.0 201623102124, João Paulo:
    - Lista 6 / Vetores e Matrizes - Exercicio 9.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

#define Linha  2
#define Coluna 2

int main(){

    int i, j, resp[Coluna], vetor[Coluna], matriz[Linha][Coluna];

    srand(time(0));

    for(i = 0; i < Linha; i++){
        for(j = 0; j < Coluna; j++){

            vetor[j] = rand() % 10;
            matriz[i][j] = rand() % 10;
    
        }
    }
    for(i = 0; i < Linha; i++){

        for(j = 0; j < Coluna; j++)
            printf("%2d ", matriz[i][j]);
        
        puts("");
    }

    puts("");

    for(j = 0; j < Coluna; j++)
        printf("%2d\n", vetor[j]);

    puts("");

    for(i = 0; i < Linha; i++){

        resp[i] = 0;

        for(j = 0; j < Coluna; j++)
            resp[i] = resp[i] + matriz[i][j] * vetor[j];

        printf("%2d\n", resp[i]);

    }

    return(0);

}

