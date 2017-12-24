/*
 lista6exe8.c - gera 2 matriz e às compara.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa gera duas matrizes 10 x 10 binárias (possui apenas 0 ou 1 
 como elementos). Em seguida, calcula e apresenta:

    a) O fator de esparsidade de cada matriz, ou seja, a razão entre o
    número de elementos nulos e o número de elementos da matriz.

 Exemplo:
    $ ./lista6exe6
    [DNA]
    [RNA]
    Similaridade = [valor]%

----------------------------------------------------------------------

 Histórico:

 v1.0 201623101309, João Paulo:
    - Lista 6 / Vetores e Matrizes - Exercicio 8.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

#define Linha  10
#define Coluna 10

int main(){

    int matriz1[Linha][Coluna], matriz2[Linha][Coluna];
    int i, j, cont = 0, cont1 = 0, cont2 = 0;
    float esparsidade1 = 0.0, esparsidade2 = 0.0, similaridade = 0.0;

    srand(time(0));

    for(i = 0; i < Linha; i++){
        
        for(j = 0; j < Coluna; j++){

            matriz1[i][j] = rand() % 2;
            matriz2[i][j] = rand() % 2;
/*
 a) O fator de esparsidade de cada matriz, ou seja, a razão entre o
 número de elementos nulos e o número de elementos da matriz.
*/            
            if(matriz1[i][j] == 0)
                cont1++;

            if(matriz2[i][j] == 0)
                cont2++;
            
        }

    }

/*
 b) O fator de similaridade entre as duas matrizes, ou seja, a razão
 entre o número de elementos idênticos e o número total de elementos
 da matriz.
*/    
    for(i = 0; i < Linha; i++){
        
        for(j = 0; j < Coluna; j++)
            
            if(matriz1[i][j] == matriz2[i][j])
                cont++;
    }

    puts("");

    for(i = 0; i < Linha; i++){
            
        for(j = 0; j < Coluna; j++)
            printf("%d ", matriz1[i][j]);

        puts("");
        
    }
   
    esparsidade1 = (float)(cont1) / (float)(Linha * Coluna);
    esparsidade2 = (float)(cont2) / (float)(Linha * Coluna);

    printf("\nEsparsidade da 1° matriz: %d/%d = %.0f%\n\n", cont1, Linha * Coluna, esparsidade1*100);
 
    for(i = 0; i < Linha; i++){
            
        for(j = 0; j < Coluna; j++)
            printf("%d ", matriz2[i][j]);

        puts("");
            
    }
    
    similaridade = (float)(cont) / (float)(Linha * Coluna);

    printf("\nEsparsidade da 2° matriz: %d/%d = %.0f%\n", cont2, Linha * Coluna, esparsidade2*100);
    printf("Similaridade: %d/%d = %.0f%\n\n", cont, Linha * Coluna, similaridade*100);

    return(0);

}
