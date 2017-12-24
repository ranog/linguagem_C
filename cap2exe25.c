/*  NOME

    SINOPSES

    DESCRIÇÃO
        Exercício:
            25. A função scanf() retorna o número de leituras feitas com sucesso.
            Considere o seguinte programa:

            -----------------------------[PROGRAM]---------------------------------

            Execute-o digitando os seguintes valores:

            a) 1    2   3
            b) 1    2   a
            c) a    3   4
            d) 3    4   2.1
            e) ^Z   5   1
            f) 1    2   ^Z
            g) 3.2  1   2

            Verifique os possíveis inteiros retornados por scanf(). Observe que o 
            caractere ^Z é obtido pressionando-se, ao mesmo tempo Ctrl e Z.

-----------------------------------------------------------------------------------

    HISTÓRICO
        201616081802: João Paulo, agosto de 2016
            Exercício 25 - Capítulo 2 Operadores - Treinamento de linguagem C

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int i, j, k;

    printf("%d\n", scanf("%d %d %d", &i ,&j ,&k));

    //system("pause");
    return(0);
}
