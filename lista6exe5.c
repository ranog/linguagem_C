/*
 lista6exe5.c - distância de Hamming.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa calcula a distância de Hamming entre 2 vetores binários u e
 v de dimensão n x 1 (n definido pelo usuário). A distância de Hamming
 é definida como o número total de elementos tais que u[i] != v[i]
 
 Exemplo:
    $ ./lista6exe5
    [valor] [valor] [valor] [valor] ... [N-1] 

----------------------------------------------------------------------

 Histórico:

 v1.0 201620102158, João Paulo:
    - Lista 6 / Vetores e Matrizes - Exercicio 5.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, N, cont = 0;

    printf("n = ");
        scanf("%d", &N);

    int u[N], v[N];

    srand(time(0));

    for(i = 0; i < N; i++){

        u[i] = rand()%2;
        v[i] = rand()%2;

        if(u[i] != v[i])
            cont++;

    }

    for(i = 0; i < N; i++)
        printf("%d ", u[i]);

    puts("");

    for(i = 0; i < N; i++)
        printf("%d ", v[i]);

    puts("");

    printf("distância = %d\n", cont);

    return(0);

}
