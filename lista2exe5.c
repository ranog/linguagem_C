/*  NOME
        lista2exe5.c

    SINOPSES
        ./lista2exe5
        Digite sua massa em kilos (kg): [VALOR]
        Digite sua altura em metros (m): [VALOR]
        IMC = [VALOR] [CLASSIFICAÇÃO]
        

    DESCRIÇÃO
        Calcula o índice de masa corporal (IMC) a partir do peso e a
        massa solicitada ao usuário.

---------------------------------------------------------------------

    HISTÓRICO
        201630080943: João Paulo, agosto de 2016
            - Lista 2 / Introdução à linguagem C

*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){

    float altura, massa, IMC;

    printf("Digite sua massa em kilos (kg): ");
        scanf("%f", &massa);
    
    printf("Digite sua altura em metros (m): ");
        scanf("%f", &altura);

    IMC = massa/pow(altura, 2);

    if(IMC < 18.5){
        printf("IMC = %.2f Abaixo do peso\n", IMC);
    }
    else{
        if(IMC < 25){
            printf("IMC = %.2f Peso Normal\n", IMC);
        }
        else{
            if(IMC < 30){
                printf("IMC = %.2f Acima do Peso\n", IMC);
            }
            else{
                if(IMC < 35){
                    printf("IMC = %.2f Obesidade I\n", IMC);
                }
                else{
                    if(IMC < 40){
                        printf("IMC = %.2f Obesidade II\n", IMC);
                    }
                    else
                        printf("IMC = %.2f Obesidade III\n", IMC);
                }
            }
        }
    }


    return(0);

}
