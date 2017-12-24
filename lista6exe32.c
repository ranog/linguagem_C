/*
 lista6exe32.c - progressão aritmética.

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

    int i, a0[Aritmetica] = {0}, r[Aritmetica] = {0}, a[Aritmetica] = {0};

    printf("Digite o 1° termo da progressão aritmética:\n");
        
        for(i = 1; i < Aritmetica; i++)
            scanf("%d", &a0[i]);

    printf("Digite a razão da progressão aritmética:\n");
        
        for(i = 1; i < Aritmetica; i++)    
            scanf("%d", &r[i]);

    for(i = 1; i < Aritmetica; i++){
     
        a[i] = a0[i] + (i - 1)*r[i];
        printf("%d ", a[i]);

    }

    puts("");

    return(0);

}
