/*  NOME
            adivinhadow.c - testa a sua capacidade de adivinhar uma letra agora com o laço do-while

    SINOPSES
            ./adivinhadow
            Digite uma letra entre 'a' e 'z': [LETRA]
            [LETRA] é incorreto. Tente novamente
                    .
                    .
                    .
            [LETRA] É CORRETA!!
            Você acertou em [VALOR] tentarivas
            Quer jogar novamente? (s/n): [LETRA]
            Até logo e boa sorte!

    DESCRIÇÃO
            Utilizado em situações em que é necessário executar o corpo do laço uma primeira vez e,
            depois, avaliar a expressão de teste e criar um ciclo repetido.

            Existe uma estimativa que aponta os laços do-while necessários somente em 5% dos laços. 

---------------------------------------------------------------------------------------------------

    HISTÓRICO
            201622081555: João Paulo, agosto de 2016
                - Laços do-while / Sintaxe do laço do-while / Quando usar do-while 
                    - Capítulo 3 Laços - Página 75-76
                        - Treinamento em linguagem C

*/

#include "stdio.h"
#include "stdlib.h"
#include "gconio.h" //para getche()

int main(){

    int tentativas;
    char resp, secreto;  // s de sim
    
    do{ // início do laço

        secreto = rand() % 26 + 'a';
        tentativas = 1;

        printf("\nDigite uma letra entre 'a' e 'z': \n");

        while((resp = getch()) != secreto){

            printf("%c é incorreto. Tente novamente\n", resp);
            tentativas++;

        }

        printf("%c É CORRETO!!\n", resp);
        printf("Você acertou em %d tentativas\n", tentativas);
        printf("Quer jogar novamente?(s/n): ");
            
    
    }while(getche() == 's');

    printf("\nAté logo e boa sorte!\n");

    return 0;
}
