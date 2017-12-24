/*  NOME
        qualificador.c

    SINOPSES
        ./qualificador
        Digite o raio da esfera: [RAIO]
        [Bip][Bip]
        Area da esfera = [AREA]

    DESCRIÇÃO
        Mostra o uso de const para declarar constantes
        OBS: Obrigatoriamente, as variáveis associadas ao qualificador
        const devem ser inicializadas.

----------------------------------------------------------------------

    HISTORICO
        201612081730: João Paulo, agosto de 2016
            - Capítulo 2 - Operadores: O qualificador const

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    const char Bip = '\a';      // Declaração de constante
    const double Pi = 3.141592; // Declaração de constante
    double raio, area;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4.0 * Pi * raio * raio;

    printf("%c%c", Bip, Bip);

    printf("\nArea da esfera = %.2lf\n", area);

    //system("pause");
    return 0;
}


