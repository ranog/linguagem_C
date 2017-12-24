
/*
 loteria.c - imprime 50 combinaçõa de 6 números.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa imprime 50 combinações de jogos para a Sena.
 
 Exemplo:
    $ ./loteria
    Combinações  1:    [n°]    [n°]    [n°]    [n°]    [n°]    [n°] 
    ...
    Combinações 50:    [n°]    [n°]    [n°]    [n°]    [n°]    [n°]

 Os elementos de uma matriz podem ser de qualquer tipo, incluindo 
 matriz.Todas as matrizes são armazenadas na memória de forma linear.
 Com dois pares de colchetes, obtemos uma matriz de duas dimensões, e
 com cada par de colchetes adicionais obtemos matrizes com uma 
 dimensão a mais.

----------------------------------------------------------------------

 Histórico:

 v1.0 2016-10-01, João Paulo:
    - Capítulo 7 / Matrizes - Matrizes de mais de uma dimensão.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

#define JOGOS 50
#define N 6

int main(){

    int matriz[JOGOS][N], k, j;

    for(k = 0; k < JOGOS; k++)
        for(j = 0; j < N; j++)
            matriz[k][j] = rand()%60+1; // Número aleatório 1 a 60

    for(k = 0; k < JOGOS; k++){

        printf("Combinações %2d:   ", k+1);
        for(j = 0; j < N; j++)  // Imprime as dezenas na tela
            printf("%2d    ", matriz[k][j]);

        printf("\n");
    }
    
    return(0);

}
