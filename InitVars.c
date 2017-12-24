/* InitVars.c

Inicializando variáveis

    201610082027: João Paulo, agosto de 2016
        - Mostra inicialização de variáveis
*/

# include "stdio.h"     // para printf()
# include "stdlib.h"    // para system()

int main(){

    int evento = 5;         // Define evento inicializada com 5
    char corrida = 'C';     // Define corrida inicializada com C

    float tempo = 27.25;    // Define tempo inicializada com 27.25

    printf("\nO tempo vitorioso na eliminatória %c", corrida);
    printf("\nda competição %d foi %f.\n\n", evento, tempo);

    //system("pause");
    return 0;
}
