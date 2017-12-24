/*  
 notasfmatriz.c - matriz como argumento

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br>

----------------------------------------------------------------------

 Programa mostra passagem de matrizes para funções como argumento.

 A primeira parte deste programa lê a lista das notas enquanto não for
 digitada uma nota negativa. Elemento novo:

    m = media(notas, i);

 É uma chamada à função media(), que retorna a média das notas 
 armazenadas na matriz.

 O nome de uma matriz, desacompanhado de colchetes, representa o 
 endereço de memória em que a matriz foi armazenada.

----------------------------------------------------------------------

 Histórico:

 v1.0 2016-10-05, João Paulo:
    - Capítulo 7 / Matrizes - Matriz como argumentos de funções

 Licença: GNU
    
*/

#include "stdio.h"
#include "stdlib.h"

#define TAMANHO 50

float media(float[], int);  // protótipo

int main(){



    float notas[TAMANHO], m;
    int i = 0;

    do{
        
        printf("Digite a nota do aluno %d ", i+1);
            scanf("%f", &notas[i]);

    }while(notas[i++] >= 0.0);

    i--;    // remove o item de término

    m = media(notas, i);

    printf("Média das notas: %.2f\n", m);

    return(0);

}

// calcula a média dos valores da matriz
float media(float lista[], int tamanho){

    int i;
    float m = 0.0;

    for(i = 0; i < tamanho; i++)
        m += lista[i];

    return m/tamanho;

}
