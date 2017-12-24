/*  NOME

    SINOPSES
        ~:./volcilindro
        Entre com altura do cilindro: [ALTURA]
        Entre com o raio do cilindro: [RAIO]
        Volume do cilindro circular é [VOLUME]

    DESCRIÇÃO
        Programa solicita ao usuário a altura e o raio de um cilindro circular e
        imprime o volume do cilindro.

-----------------------------------------------------------------------------------

    HISTORICO
        201613082117: João Paulo, agosto de 2016
            Exercício 18 capítulo 2 - operadores

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    const double Pi = 3.141592;
    double raio, altura, volume;

    printf("Entre com à altura do cilindro: ");
    scanf("%lf", &altura);
    printf("Entre com o raio do cilindro: ");
    scanf("%lf", &raio);

    volume = Pi * raio * raio * altura;

    printf("Volume do cilindro circular é %lf\n", volume);

    //system("pause");
    return(0);
}
