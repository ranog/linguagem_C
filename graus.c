/*  NOME
        graus.c

    SINOPSES
        ./graus

    DESCRIÇÃO
        Converte temperatura de gruas Celsius para Fahrenheit  

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    float ftemp, ctemp;

    printf("Digite a temperatura em graus Celsius: \n");
    scanf("%f", &ctemp);

    ftemp = ctemp * 9/5 + 32;

    printf("Temperatura em graus Fahrenheit é %.2f \n", ftemp);

    // operação aritmética realizada direto na função printf()
    printf("Temperatura em graus Fahrenheit é %.2f \n", ctemp * 9/5 + 32);

    //system("pause");
    return 0;
}
