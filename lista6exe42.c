/*
 lista6exe42.c - progressão geométrica.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa armazena em um vetor a os N (N = 20) primeiros valores de 
 uma progressão geométrica, para valores de primeiro termo a[0] e 
 razão r informados pelo usuário, de acordo com a seguinte fórmula:

    a[i] = a[0]*r^(i - 1), para 1 <= i < 20
 
 Exemplo:
    $ ./lista6exe4
    [valor] [valor] [valor] [valor] ... [N-1] 

----------------------------------------------------------------------

 Histórico:

 v1.0 201618102212, João Paulo:
    - Lista 6 / Vetores e Matrizes - Exercicio 4.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

#define ProGeo 21

int main(){

    int r[ProGeo], a0[ProGeo], i; 
    double a[ProGeo]; 
    

    printf("Primeiros termos:\n");
        for(i = 1; i < ProGeo; i++)
            scanf("%d", &a0[i]);

    printf("Razões:\n");
        for(i = 1; i < ProGeo; i++)
            scanf("%d", &r[i]);

    for(i = 1; i < ProGeo; i++){
        
        a[i] = (float)(a0[i]*pow(r[i], i - 1));
        printf("%.0f ", a[i]);

    }

    puts("");
    
    return(0);

}
