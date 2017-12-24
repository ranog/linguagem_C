/*
 lista6exe13.c - produto entre duas matrizes.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa calcula o produto entre duas matrizes.

----------------------------------------------------------------------

 Histórico:

 v1.0 201630102031, João Paulo:
    - Lista 6 / Vetores e Matrizes - Exercicio 13.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, j, k; 
    int A[3][2], B[2][3], C[3][3]; 

    srand(time(0));

/*----------------------------[Matriz A]----------------------------*/

    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            A[i][j] = rand() % 10;

    for(i = 0; i < 3; i++){

        for(j = 0; j < 2; j++)
            printf("%d ", A[i][j]);
     
        puts("");   

    }

    puts("");

/*----------------------------[Matriz B]----------------------------*/

    for(i = 0; i < 2; i++)
        for(j = 0; j < 3; j++)
            B[i][j] = rand() % 10;

    for(i = 0; i < 2; i++){

        for(j = 0; j < 3; j++)
            printf("%d ", B[i][j]);

        puts("");
    }

    puts("");

/*------------------------[Produto A x B]---------------------------*/

    for(i = 0; i < 3; i++){        

        for(j = 0; j < 3; j++){
            
            C[i][j] = 0;           

            for(k = 0; k < 2; k++)       
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            
        }
            
    }

/*----------------------------[Matriz C]----------------------------*/

    for(i = 0; i < 3; i++){

        for(j = 0; j < 3; j++)
            printf("%d ", C[i][j]);

        puts("");
    }

    return(0);

}
