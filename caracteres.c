/*  NOME
        caracteres.c

    SINOPSES
        ./caracteres
        O valor ASCII de a é 97
            .   
            .
            .
        O valor ASCII de z é 122

    DESCRIÇÃO
        Mostra o uso de uma variável do tipo char para controle do laço
        Imprime as letras minúsculas e seus correspondentes valores em decimal na
        tabela ASCII.

        A variável do laço pode ser do tipo char.

-----------------------------------------------------------------------------------

    HISTÓRICO
        201620081423: João Paulo, agosto de 2016
            Usando caracteres - Capítulo 3 laços - Página 65
                Treinamento em linguagem C        

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    char ch;

    for(ch = 'a'; ch <= 'z'; ++ch)
        printf("\nO valor ASCII de %c é %d", ch, ch);

    printf("\n");

    return(0);

}
