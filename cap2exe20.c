/*  NOME
        cap2exe20.c

    SINOPSES
        ./cap2exe20

        Entre com o valor do seu jogo R$ [VALOR]
        Entre com o valor do jogo do seu amigo R$ [VALOR]
        
        O valor do seu prêmio é R$ [VALOR]
        O valor do prêmio do seu amigo é R$ [VALOR]

    DISCRIÇÃO
        Dois amigos jogam na loteria toda semana. Programa solicita a quantia com 
        que cada amigo participou e o valor do prêmio a ser rateado em partes 
        diretamente proporcionais às quantias de cada um deles. 

        O programa imprime quanto cada um dos amigos receberá caso sejam ganhadores.

-----------------------------------------------------------------------------------

    HISTÓRICO
        201615081326: João Paulo, agosto de 2016
            Exercício 20 - Capítulo 2 Operadores

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    float apostas, aposta1, aposta2, premio, premio1, premio2;

    
    printf("\nEntre com o valor do seu jogo R$ ");
        scanf("%f", &aposta1);
    printf("Entre com o valor do jogo do seu amigo R$ ");
        scanf("%f", &aposta2);
    printf("Entre com o valor totas do prêmio R$ ");
        scanf("%f", &premio);
    
    apostas = aposta1 + aposta2;

    premio1 = ( premio / apostas ) * aposta1;
    premio2 = ( premio / apostas ) * aposta2;

    printf("\nO valor do seu prêmio é R$ %.2f", premio1);
    printf("\nO valor do prêmio do seu amigo é R$ %.2f\n\n", premio2);

    //system("pause");
    return(0);
}
