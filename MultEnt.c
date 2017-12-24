/*  NOME
        MultEnt.c

    SINOPSES
        ./MultEnt

    DESCRIÇÃO
        Mostra o uso de scanf() com várias entradas
        Calcula a média de 4 notas

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    float p1, p2, p3, p4;
    double media;

    printf("Digite as notas das 4 provas: \n");
    scanf("%f%f%f%f", &p1, &p2, &p3, &p4);

    media = (p1 + p2 + p3 + p4)/4;

    printf("MÉDIA: %.2f\n", media);

    // system("pause");
    return 0;
}
