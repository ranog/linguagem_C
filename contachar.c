/*  NOME
            contachar.c - conta caracteres de uma frase

    SINOPSES
            ./contachar
            DIGITAR [ENTRE]        
            O número de caracteres é [VALOR]

    DESCRIÇÃO
            While significa enquando. Utilizamos o laço while quando o laço pode ser terminado 
            inesperadamente, por condições desenvolvidas dentro do corpo do laço.

            Em situações semelhantes, o laço while é mais apropriado que o laço for.
        
---------------------------------------------------------------------------------------------------

        HISTÓRICO
            201622081448: João Paulo, agosto de 2016
                - O laço while - Capítulo 3 - Página 73
                    - Treinamento em linguagem C 

*/

#include "stdio.h"
#include "stdlib.h"
#include "gconio.h" // para getche()

int main(){

    int cont=0; // contador

    //XXX o exemplo do livro esta usando o '\r', não funciona, por isso alterei para '\n'
    while(getche() != '\n') // enquando não [ENTER]
        cont++; // corpo do laço

    // fora do laço
    printf("O número de caracteres é %d\n", cont);

    return(0);

}
