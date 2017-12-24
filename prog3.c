/* prog3.c

    Variáveis

    201610081756: João Paulo, agosto de 2016
        - Esse programa mostra a declaração de variáveis

*/

# include "stdio.h"     // para printf()
# include "stdlib.h"    // para system()

int main(){

    // variáveis devem ser declaradas no início do bloco.
    int num1, num2; // É obrigatório declarar variáveis em C.

    num1 = 44;
    num2 = num1 + 20;

    printf("\nO primeiro número é %d", num1);
    printf("\nO segundo número é \"num1 + 20 \" = %d\n\n", num2);

    //system("pause");
    return 0;
}
