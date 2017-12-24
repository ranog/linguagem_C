/*
 lista6exe9.c - soma 2 matriz.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa calcula a soma de 2 matrizes.

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

    int i, j, m1[Linha][Coluna], m2[Linha][Coluna], m3[Linha][Coluna];

    srand(time(0));

    for(i = 0; i < Linha; i++){

        for(j = 0; j < Coluna; j++){

            m1[i][j] = rand() % 10;
            m2[i][j] = rand() % 10;

        }
        
    }
    
    for(i = 0; i < Linha; i++){
        for(j = 0; j < Coluna; j++)
            printf("%2d ", m1[i][j]);
                
        puts("");
    }
    
    printf("\n + \n\n");

    for(i = 0; i < Linha; i++){
        for(j = 0; j < Coluna; j++)
            printf("%2d ", m2[i][j]);
        
        puts("");
    }

    printf("\n = \n\n");
    
    for(i = 0; i < Linha; i++){
        
        for(j = 0; j < Coluna; j++){
     
            m3[i][j] = m1[i][j] + m2[i][j];

            printf("%2d ", m3[i][j]);
        }
        
        puts("");
    }

    return(0);

}
