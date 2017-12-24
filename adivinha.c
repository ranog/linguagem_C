/*  NOME

        adivinha.c

    SINOPSES
        ./adivinha

    DESCRIÇÃO
        Adivinha número

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int x, r;

    printf("Digite um número de até 4 algarismos: \n");
    scanf("%d", &x);

    r = 19998 + x;

    printf("O resultado da soma é: %d \n", r);

    printf("Digite o segundo número: \n");
    scanf("%d", &x);

    printf("O meu número é: %d \n", 9999 - x);

    printf("Digite o quarto número: \n");
    scanf("%d", &x);

    printf("O meu número é: %d \n", 9999 - x);

    // system("pause");
    return 0;
}
