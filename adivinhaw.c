/*  NOME
            adivinhaw.c - testa a sua capacidade de adivinhar uma letra

    SINOPSES
            ./adivinhaw
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
            Uma das instruções de um bloco de código que compõe o corpo de um laço while pode
            ser outro laço while.

            A função rand() necessita da inclusão do arquivo stdlib.h. Essa função retorna um
            número inteiro aleatório (sorteado).

---------------------------------------------------------------------------------------------------

    HISTÓRICO
            201622081555: João Paulo, agosto de 2016
                - Laços while aninhados / A função rand() - Capítulo 3 Laços - Página 74-75
                    - Treinamento em linguagem C

*/

#include "stdio.h"
#include "stdlib.h"
#include "gconio.h" //para getche()

int main(){

    int tentativas;
    char resp, secreto, ch = 's';  // s de sim
    
    while(ch == 's'){

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
            ch = getche();
    
    }

    printf("\nAté logo e boa sorte!\n");

    return 0;
}
