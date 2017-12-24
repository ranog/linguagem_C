/*  NOME
        asterisco.c

    SINOPSES
        ./asterisco
        Digite um data no formato dd/mm/aaaa: [dd/mm/aaaa]
        A data que você digitou foi: [dd/mm/aaaa]

    DESCRIÇÃO
        Mostra o uso do caractere * com scanf(), digitando uma data
        formatada

*/

#include "stdio.h"
#include "stdlib.h"

int main(){


    int dia, mes, ano;

    printf("Digite um data no formato dd/mm/aaaa: ");
    scanf("%d %*c %d %*c %d", &dia, &mes, &ano );

    printf("\nA data que você digitou foi: %02d/%02d/%d\n", dia, mes, ano );

    //system("pause");
    return 0;
}
