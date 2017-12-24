/*  NOME
        
    SINOPSES
        ./lista2exe6.c
        Digite dois valores inteiros: [VALOR] [VALOR]
        

    DESCRIÇÃO
        Teste da expressões sem usar o operador de negação.

---------------------------------------------------------------------

    HISTÓRICO
        201631081224: João Paulo, agosto de 2016
            - Lista 2 / Introdução à linguagem C

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, j, n, m;

    printf("Digite dois valores inteiros: ");
        scanf("%d %d %d %d", &i, &j, &n, &m);

    // a)
    printf("%d\n", !(i == j));
    printf("%d\n", i != j);
    puts(" ");

    // b)
    printf("%d\n", !(i + 1 < j - 2));
    printf("%d\n", i + 1 > j - 2);
    puts(" ");
    
    // c)
    printf("%d\n", !(i < 1 && n < m));
    printf("%d\n", (i >= 1 || n >= m));
    puts(" ");

    // d)
    printf("%d\n", !(i < 1 || j < 2 && n < 3));
    printf("%d\n", (i >= 1 || j >= 2 && n >= 3));

    return(0);

} 
