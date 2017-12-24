/*
 histograma.c - matriz de duas dimensões como argumentos de função.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa avalia a eficiência dos funcionários de uma loja quanto ao
 número de peças vendidas por cada um deles em três meses.
 
 Exemplo:
    $ ./histograma
    Funcionário 1 mês 1: [valor]
    Funcionário 1 mês 2: [valor]
    Funcionário 1 mês 3: [valor]
    Funcionário 2 mês 1: [valor]
    Funcionário 2 mês 2: [valor]
    Funcionário 2 mês 3: [valor]
    Funcionário 3 mês 1: [valor]
    Funcionário 3 mês 2: [valor]
    Funcionário 3 mês 3: [valor]
    Funcionário 4 mês 1: [valor]
    Funcionário 4 mês 2: [valor]
    Funcionário 4 mês 3: [valor]
    Funcionário 5 mês 1: [valor]
    Funcionário 5 mês 2: [valor]
    Funcionário 5 mês 3: [valor]
    
    1 - [valor]: [*...*]
    2 - [valor]: [*...*]
    3 - [valor]: [*...*]
    4 - [valor]: [*...*]
    5 - [valor]: [*...*]
    
 O primeiro índice da matriz indica o número de funcionários da loja e
 o segundo, o número de meses a serem considerados.

----------------------------------------------------------------------

 Histórico:
    v1.0 2016-10-08, João Paulo:
        - Capítulo 7 /  Matrizes - Matrizes de duas dimensões como
        argumentos de funções
            - Paginas 198-200

 Licença: GNU 
*/

#include "stdio.h"
#include "stdlib.h"

#define MES 3
#define FUNC 5

void histograma(int [][MES], int); // protótipo

int main(){

    int pecas[FUNC][MES], i, j;

    for(i = 0; i < FUNC; i++)
        for(j = 0; j < MES; j++){
    
            printf("Funcionário: %d\tmês %d: ", i+1, j+1);
                scanf("%d", &pecas[i][j]);

        }

    
    histograma(pecas, FUNC);

    return(0);

}

// imprime um histograma horizontal
void histograma(int pecas[][MES], int nfunc){

    const float MAXBARRA = 50.0;
    int max = 0, temp = 0, i, j, tam;

    for(i = 0; i < nfunc; i++){

        for(j = 0; j < MES; j++)
            temp += pecas[i][j];

        if(max < temp) 
            max = temp;

    }

    temp = 0;

    for(i = 0; i < nfunc; i++){
        for(j = 0; j < MES; j++)
            temp += pecas[i][j];

        printf("%2d - %5d:", i+1, temp);

        tam = (int)((float)temp / (float)max * MAXBARRA);

        for(j = 0; j < tam; j++)
            printf("*");

        printf("\n");
    }   

}






















 

































