/*
 lista6exe3.c - progressão aritmética.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa armazena em um vetor a os N primeiros valores de uma 
 progressão aritmética, para valores de primeiro termo a[0] e razão r
 informados pelo usuário, de acordo com a seguinte fórmula:

    a[i] = a[0] + (i - 1) * r, para 1 <= i < 20
 
 Exemplo:
    $ ./lista6exe3
    [valor] [valor] [valor] [valor] ... [N-1] 

----------------------------------------------------------------------

 Histórico:

 v1.0 201617102149, João Paulo:
    - Lista 6 / Vetores e Matrizes - Exercicio 3.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

#define Aritmetica 11

int main(){

    int i, r, a0, a[Aritmetica];

    printf("Digite o 1° termo da progressão aritmética: ");
        scanf("%d", &a0);

    printf("Digite a razão da progressão aritmética: ");
        scanf("%d", &r);

    for(i = 1; i < Aritmetica; i++){
     
        a[i] = a0 + (i - 1)*r;
        printf("%d ", a[i]);

    }

    puts("");

    return(0);

}
