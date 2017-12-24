/*  NOME

    SINOPSES
        ./chamadas
        [CARACTERE_SEGUINTE][CARACTERE_SEGUINTE]...        
    
    DESCRIÇÃO
        Codifica a entrada digitada

        Usando chamadas a funções:        
            É possível chamar funções de dentro de expressões do laço for.
        
            Esse programa lê caractere a caractere do teclado e imprime o 
            caractere seguinte da tabela ASCII, para sair digitar X maiúsculo

        ---------------------------------------------------------------------------

        Omitindo expressões do laço for:
            Qualquer uma das três expressões de um laço for pode ser omitida, embora 
            os ponto-e-vírgula devam permanecer. Se a expressão de inicialização ou
            a de incremento for omitida, será simplesmente desconsiderada. Se a 
            condição de teste não estiver presente, será considerada permanentemente 
            verdadeira.

        ---------------------------------------------------------------------------

        Laço infinito:
            Um laço infinito é aquele que é executado sempre, sem parar. Ele sempre
            tem a expressão de teste verdadeira, e um modo de parar sua execução é
            desligando o computador.    

        ---------------------------------------------------------------------------

        Omitindo o corpo do laço for:
            O corpo do laço pode ser vazio; entretanto, o ponto-e-vírgula deve 
            permanecer.                

-----------------------------------------------------------------------------------

    HISTÓRICO
        201620081443: João Paulo, agosto de 2016
            Usando chamadas a funções - Capítulo 3 laços - Página 66
                Treinamento de linguagem C

            Omitindo expressões do laço for - Página 67

            Laço infinito

            Omitindo o corpo do laço for
               
*/

#include "stdio.h"
#include "stdlib.h"
#include "gconio.h" // para o getch()

int main(){

    unsigned char ch;

    for(ch = getch(); ch != 'X'; ch = getch())
        printf("%c", ch + 1);

    printf("\n");

    /* omitindo expressões do laço for
    for(;(ch = getch()) != 'X';)
        prinft("%c", ch + 1);
    */

    /* laço infinito
    for(;;)
        printf("Laço Infinito");
    */

    /* omitindo o corpo do laço for
    for(;(ch = getch()) != 'X'; printf("%c", ch + 1))
        ;
    
    outro exemplo:

        for(i = 0; i < 1000; i = i + 1)
            ;
    */

    return(0);

}
