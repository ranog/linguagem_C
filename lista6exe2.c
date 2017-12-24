/*
 lista6exe1.c - fibonacci.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa armazena em um vetor v os N primeiros valores da sequência de
 Fibonacci, de acordo com a seguinte regra:

    v[0] = 0
    v[1] = 1
    v[i] = v[i - 1] + v[i - 2], para 2 <= i < N. Sendo nesse exemplo
    N = 20
 
 Exemplo:
    $ ./lista6exe2
    [valor], [valor], [valor], [valor], ..., [N-1] 

----------------------------------------------------------------------

 Histórico:

 v1.0 201616102123, João Paulo:
    - Lista 6 / Vetores e Matrizes - Exercicio 2.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

#define Fibonacci 20

int main(){   

    int i, v[Fibonacci];

    v[0] = 0;
    v[1] = 1;

    for(i = 2; i < Fibonacci; i++)
        v[i] = v[i - 1] + v[i - 2];

    for(i = 0; i < Fibonacci; i++)
        printf("%d ", v[i]);

    puts("");
    
    return(0);

}
