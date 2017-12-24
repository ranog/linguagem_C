/*  NOME
        lista3exe2.c

    SINOPSES
        ./lista3exe2
        Digite o MÊS e o ANO: [MES] [ANO]
        Mês com [VALOR] dias

    DESCRIÇÃO
        Programa lê o mês e o ano e informa quantos dias o mês tem.
        O ano é necessário para calcular se o ano é bissexto.

---------------------------------------------------------------------

    HISTÓRICO
        201601090849: João Paulo, agosto de 2016
            - Lista 3 / estruturas de seleção

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int mes, ano, bissexto;

    printf("Digite o MÊS e o ANO: ");
        scanf("%d %d", &mes, &ano);

    switch(mes){
        case 1  : 
        case 3  :
        case 5  :
        case 7  :
        case 8  :
        case 10 :
        case 12 : printf("Mês com 31 dias\n");  break;
        
        case 4  :
        case 6  :
        case 9  :
        case 11 : printf("Mês com 30 dias\n");  break;

        case 2  :
            
            bissexto = ano%4 == 0 || ano%100 != 0 && ano%400 == 0;
                
            if(bissexto)
                printf("Mês com 29 dias\n");
            else
                printf("Mês com 28 dias\n");    break;

    }

    return(0);

}
