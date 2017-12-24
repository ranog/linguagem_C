/*  NOME
        cap2exe24.c

    SINOPSES
        ./cap2exe24
        Pressione uma tecla
        [CARACTERE]

    DESCRIÇÃO
        Programa solicita um caractere do teclado por meio da função getch(). Se for
        letra minúscula, imprime em maiúscula, caso contrário, imprime o próprio
        caractere. Usando uma expressão condicional.


-----------------------------------------------------------------------------------

    HISTÓRICO
        201616081733: João Paulo, agosto de 2016
            Exercício 24 - Capítulo 2 Operadores - Treinamento em linguagem C

*/

#include "stdio.h"
#include "stdlib.h"
#include "gconio.h" // para função getch()

int main(){

    char ch;

    printf("Pressione uma tecla ");

    ch = getch();

    // operador condicional ternário: exp1 ? exp2 : exp3
    // verifica se foi digitado uma letra minuscula, se sim é realiza a função 
    // que se encontra entre o ? e :, se não a variavel ch continua com o mesmo valor.
    (ch >= 'a' && ch <= 'z') ? ch = 'A' + (ch - 'a') : ch;

    printf("\n%c\n", ch);

    //system("pause");
    return(0);
}
