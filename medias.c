/*  NOME
        medias.c

    SINOPSES
        ~:./medias
        
        ~:Digite a primeira nota: [NOTA]
        
        ~:Digite a segunda nota: [NOTA]
        
        ~:Digite a terceira nota: [NOTA]
        
        ~:Digite a quarta nota: [NOTA]
        
        ~:MÉDIA: [MEDIA]

    DESCRIÇÃO
        Mostra operadores aritméticos de atribuição

        Calcula a média aritmética de 4 notas

        Esses operadores combinam as operações aritméticas com a operação de 
        atribuição, oferecendo uma maneira curta e clara de escrita de certas
        expressões de atribuição.

        Como regra geral, se x é uma variável, exp uma expressão e op um operador
        aritmético, então:
    
            x op= exp  equivale a  x = x op (exp)

-----------------------------------------------------------------------------------

    HISTORICO
        201613081537: João Paulo, agosto de 2016
            - Capítulo 2 / Operadores / pg 49:
                - Operadores aritméticos de atribuição:
                    - += -= *= /= %=

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    float nota, media = 0.0;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota);

    media += nota;

    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota);

    media += nota;

    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota);

    media += nota;

    printf("\nDigite a quarta nota: ");
    scanf("%f", &nota);

    media += nota;

    media /= 4.0;

    printf("\nMÉDIA: %.2f\n", media);

    //system("pause");
    return(0);

