/*  NOME 
        impfor.c

    SINOPSES
        ./impfor

    DESCRIÇÃO
        O programa, além de mostrar mais um uso de scanf(), mostra 
        também a impressão formatada com printf().

        Impressão formatada com printf().

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    char a;

    printf("Digite um caractere e veja-o em decimal,");
    printf(" octal e hexadecimal: ");
    scanf("%c", &a);

    printf("\nCaractere = %c\nDec\t= %d\nOct\t= %o\nHex\t= %x\n", a,a,a,a);

    //system("pause");
    return 0;
}
