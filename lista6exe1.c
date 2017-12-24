/*
 lista6exe1.c - números aleatorios.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa cria um vetor de tamanho N gerado aleatoriamente no 
 intervalo [-N, N] pela função rand().
 
 Exemplo:
    $ ./lista6exe1
    [valor], [valor], [valor], [valor], ..., [N-1] 

----------------------------------------------------------------------

 Histórico:

 v1.0 201615102112, João Paulo:
    - Lista 6 / Vetores e Matrizes - Exercicio 1.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

#define MaxVetor 10

int main(){   

    int i = 0, digitado, vetor[MaxVetor] = {0};
    int maior, menor, k = 0, j = 0;
    int soma = 0, positivo = 0, negativo = 0;

    srand(time(0));

    printf("Digite um valor: ");
        scanf("%d", &digitado);

    for(i = 0; i < MaxVetor; i++){
        
        vetor[i] = rand() % 20;
        vetor[i] -= i * 2;

        printf("%d ", vetor[i]);
        
    }
       
    puts("");

/*--------------------------------------------------------------------

 a) Verifique se um valor digitado pelo usuário é um elemento do vetor.
 Se sim, informe a posição em que o elemento ocorre.

--------------------------------------------------------------------*/
 
    for(i = 0; i < MaxVetor; i++)
        if(digitado == vetor[i])
            printf("Valor %d se encontra na %d° posição.\n", digitado, i + 1);
    
/*--------------------------------------------------------------------

 b) Percorrendo o vetor uma única vez, determine o menor e maior 
 elemento do vetor, e as posições em que ocorrem.

--------------------------------------------------------------------*/

    maior = vetor[0];
    menor = vetor[0];    

    //FIXME retorna o primeiro elemento encontrado no vetor    
    for(i = 0; i < MaxVetor; i++){

        if(vetor[i] > maior){

            maior = vetor[i];
            k = i;

        }

        if(vetor[i] < menor){

            menor = vetor[i];
            j = i;
        }

    }
                
   printf("Maior: %d Posição: %d\nMenor: %d Posição: %d\n", maior, k + 1, menor, j + 1);

/*--------------------------------------------------------------------

 c) Informe para cada elemento se ele é par ou ímpar.

--------------------------------------------------------------------*/

    for(i = 0; i < MaxVetor; i++){

        if(vetor[i] % 2 == 0)
            printf("%d° é par\n", i + 1);
        else
            printf("%d° é impar\n", i + 1);

    }

/*--------------------------------------------------------------------

 d) Calcule a soma de todos os elementos do vetor.

--------------------------------------------------------------------*/

    for(i = 0; i < MaxVetor; i++){
        
        soma += vetor[i];
/*--------------------------------------------------------------------

 e) Calcule a soma de todos os elementos positivos do vetor.

--------------------------------------------------------------------*/

        if(vetor[i] > 0 )
            positivo += vetor[i];

/*--------------------------------------------------------------------

 f) Calucle a soma de todos os elementos negativos do vetor.

--------------------------------------------------------------------*/

        else
            negativo += vetor[i];
    
    }

    printf("Total = %d\nPositivos = %d\nNegativos = %d\n", soma, positivo, negativo);

    return(0);

}
