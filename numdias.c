/*
 numdias.c - imprime número de dias do inicio do ano até o dia digitado

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa imprime o número de dias do ano até a data escpecificada.
 
 Exemplo:
    $ ./numdias
    Digite a data no formato DD/MM/AAAA: [data]
    Total de dias transcorridos desde o início do ano: [valor]

----------------------------------------------------------------------

 Histórico:

 v1.0 2016-10-01, João Paulo:
    - Capítulo 7 / Matrizes - Inicialização de matrizes.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int dmes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dia, mes, ano, total, i;

    printf("Digite a data no formato DD/MM/AAAA: ");

    // %*c lê caractere do teclado e não atribui a nada
        scanf("%d%*c%d%*c%d", &dia ,&mes, &ano);

    if(((!(ano%4) && ano%100)) || !(ano%400))
        dmes[1] = 29;   // Ano bissexto

    total = dia;

    for(i = 0; i < mes - 1; i++)
        total += dmes[i];

    printf("Total de dias trancorridos desde o início do ano: %d\n", total);

    return(0);

}
