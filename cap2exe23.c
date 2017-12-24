/*  NOME
        cap2exe23.c

    SINOPSES
        ./cap2exe23
        Entre com os dias trabalhados: [DIAS]
        Valor líquido a ser pago: R$ [VALOR]

    DESCRIÇÃO
        Programa solicita o número de dias trabalhados por um encanador e imprime
        o valor líquico a ser pago, com o desconto de 8% de imposto de renda.

-----------------------------------------------------------------------------------

    HISTÓRICO
        201615081950: João Paulo, agosto de 2016
            Exercício 23 - Capítulo 2 Operadores - Treinamento em Linguegem C
            
*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int dias;
    float liquido, imposto, total;

    printf("Entre com dos dias trabalhados: ");
    scanf("%d", &dias);
    
    total = 20. * (float)(dias);    //conversão explícita pg: 43
    imposto = total * (8./100.);
    liquido = total - imposto;

    printf("Valor líquido a ser pago: R$ %.2f\n", liquido);

    //system("pause");
    return(0);
}
