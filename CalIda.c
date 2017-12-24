/*  NOME
            CalIda.c

    SINOPSES
            ./CalIda

    DESCRIÇÂO
            Calcula a sua idade em dias

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    float anos, dias;

    printf("\n\tntre com a sua idades: \n");
    scanf("%f", &anos);

    dias = anos*365;

    printf("Sua idade em dias é %.f\n", dias);

    //system("pause");
    return 0;
}

