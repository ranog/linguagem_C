/*
 lista6exe7.c - proteínas-bases de DNA, RNA e similaridade entre eles.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa gera duas sequencia aleatória de tamanho 20 composta apenas
 por elementos do vetor base e armazena esta sequencia em dois vetor.
 A seguir, calcula o valor da similaridade entre as duas sequencias, ou
 seja, o numero total de bases que aparecem na mesma posição nos dois
 vetores. Apresentando o valor em porcentagem.
 
 Exemplo:
    $ ./lista6exe6
    [DNA]
    [RNA]
    Similaridade = [valor]%

----------------------------------------------------------------------

 Histórico:

 v1.0 201622101850, João Paulo:
    - Lista 6 / Vetores e Matrizes - Exercicio 7.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

#define TamVetor 20

int main(){

    char base[4] = {'A', 'C', 'G', 'T'};
    int i, d, r, DNA[TamVetor], RNA[TamVetor], cont = 0;
    float sim = 0.0; 

    srand(time(0));

    for(i = 0; i < TamVetor; i++){

        DNA[i] = rand() % 4;
        RNA[i] = rand() % 4;

        d = DNA[i];
        r = RNA[i];

        DNA[i] = base[d];
        RNA[i] = base[r];
        
        if(d == r)
            cont++;

    }

    for(i = 0; i < TamVetor; i++)
        printf("%c ", DNA[i]);

    puts("");

    for(i = 0; i < TamVetor; i++)
        printf("%c ", RNA[i]);

    puts("");

    sim = (100. * cont) / 20.;

    printf("Similaridade = %.0f %\n", sim);
    
    return(0);

}
