/*
 lista6exe11.c - produto entre vetor e matriz.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa calcula o produto de uma matriz por um vetor-linha.

----------------------------------------------------------------------

 Histórico:

 v1.0 201623102357, João Paulo:
    - Lista 6 / Vetores e Matrizes - Exercicio 11.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

#define Linha  3
#define Coluna 2

int main(){

    int i, j, resp[Linha], vetor[Coluna], matriz[Linha][Coluna];

    srand(time(0));

    for(i = 0; i < Linha; i++){
 
        for(j = 0; j < Coluna; j++){

            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
        
        }
            
        puts("");

    }

    printf("\n");

    for(i = 0; i < Linha; i++){

        vetor[i] = rand() % 10;
        printf("%d ", vetor[i]);

    }

    printf("\n\n");     

    for(j = 0; j < Coluna; j++){
        
        resp[j] = 0;

        for(i = 0; i < Linha; i++){

            resp[j] = resp[j] + matriz[i][j] * vetor[i];

        }
        
        printf("%d ", resp[j]);         
       
    }

    puts("");
    
    return(0);

}
