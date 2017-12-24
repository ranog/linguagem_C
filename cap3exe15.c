/*  NOME
        cap3exe15.c

    SINOPSES
        ./cap3exe15
        ASCII = [CARACTERE] DECIMAL = [VALOR] HEXADECIMAL = [VALOR]

    DESCRIÇÃO
        Programa imprime os caracteres da tabela ASCII de código 32 a
        255. O caractere, seu decimal e o seu Hexadecimal.

---------------------------------------------------------------------

    HISTÓRICO
        201607091755: João Paulo, agosto de 2016
            - Capítulo 3 / Laços - Treinamento em linguagen C
                - Exercicio 15 / Pagina 80

*/

#include "stdio.h"
#include "stdlib.h" 

int main(){

    int ASCII;

    for(ASCII = 32; ASCII < 256; ASCII++)
        printf("ASCII = %c\tDECIMAL = %d\tHEXADECIMAL = %x\n", ASCII, ASCII, ASCII);

    return(0);

}
