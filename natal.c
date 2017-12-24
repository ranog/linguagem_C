/*  NOME
        natal.c

    SINOPSES
        ./natal
        Sinal interno direito: [CARACTERE]
        Sinal interno esquerdo: [CARACTERE]

            [DENHO DO ÁRVORE COM OS CARACTERES DIGITADOS]

            [MESAGEM DE FELIZ NATAL]        

    DESCRIÇÃO
        Imprime uma árvore de natal

-----------------------------------------------------------------------------------

    HISTÓRICO
        201621081215: João Paulo, agosto de 2016
            O programa que imprime um cartão de natal - Capítulo 3 laços - Página 71
                Treinamento em linguagem C

*/

#include "stdio.h"
#include "stdlib.h"
#include "gconio.h"

int main(){

    char sd, se;
    int i, k, j;

    // system("cls");  // limpa a tela

    printf("Sinal interno direito: ");
        sd = getche();  // caractere de desenho da árvore

    printf("\nSinal interno esquerdo: ");
        se = getche();  // caractere de desenho da árvore

    printf("\n\n"); // pula 2 linhas antes do início do desenho

    for(i = 0; i < 4; i++){
        for(k = 1; k < 5; k++){
            for(j = 1; j <= 40 - (2 * i + k); j++)
                printf(" ");    // imprime brancos

            printf("/");    // delimitador inicial da linha

            for(j = 1; j < (2 * i + k); j++)
                printf("%c", se);   // até o meio

            for(j = 1; j < (2 * i + k); j++)
                printf("%c", sd);   // meio ao fim

            printf("\\\n"); // delimitador final da linha
        }
    }

    // denha o pé da árvore
    for(i = 0; i < 2; i++){
        for(j = 0; j < 38; j++)
            printf(" ");

        printf("| |\n");   
    }

    printf("\n");

    // imprime mensagem centralizada
    for(j = 0; j < 35; j++)
        printf(" ");

    printf("FELIZ NATAL\n");

    for(j = 0; j < 31; j++)
        printf(" ");
    
    printf("E UM PRÓSPERO 2007!\n");
    
    return(0);

}
