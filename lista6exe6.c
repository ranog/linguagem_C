/*
 lista6exe6.c - proteínas-bases de DNA.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa gera uma sequencia aleatória de tamanho 20 composta apenas
 por elementos do vetor base e armazena esta sequencia em um vetor.
 Exiba este vetor e o número de vezes que cada base aparece na 
 sequencia.
 
 Exemplo:
    $ ./lista6exe6
    [DNA]
    A = adenina (valor)
    C = citosina (valor)
    G = guanina (valor)
    T = timina (valor) 

----------------------------------------------------------------------

 Histórico:

 v1.0 201620102227, João Paulo:
    - Lista 6 / Vetores e Matrizes - Exercicio 6.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

#define TamVetor 20

int main(){

    char base[4] = {'A', 'C', 'G', 'T'};
    int i, j, DNA[TamVetor], A = 0, C = 0, G = 0, T = 0;

    srand(time(0));

    for(i = 0, j = 0; i < TamVetor; i++){
        DNA[i] = rand() % 4;
        
        j = DNA[i];

        DNA[i] = base[j];
        
        printf("%c ", DNA[i]);

        switch(j){
            case 0 : A++; break;
            case 1 : C++; break;
            case 2 : G++; break;
            case 3 : T++; break;
        }

     }

    puts("");

    printf("A = adenina  (%d)\nC = citosina (%d)\nG = guanina  (%d)\nT = timina   (%d)\n", A, C, G, T);    
     
    return(0);

}
