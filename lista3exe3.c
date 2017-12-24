/*  NOME
        lista3exe3.c

    SINOPSES
        Opeções:
            [+]Adição
            [-]Subtração
            [*]Multiplicação
            [/]Divisão

    DESCRIÇÃO
        Entrada:
            1.  Usuário escolhe a opção (char) correspondente à 
                operação desejada.
            2.  Informar as partes real e imaginária de 2 números 
                complexo.

        Processo:
            z1 + z2 = (Re1 + Re2, Im1 + Im2)
            z1 - z2 = (Re1 - Re2, Im1 - Im2)
            z1 * z2 = (Re1 * Re2 - Im1 * Im2, Re1 * Im2 + Im1 * Re2)
            z1 / z2 = (Re1 * Re2 + Im1 * Im2)/((Re2)^2 + (Im2)^2),
                      (Im1 * Re2 - Re1 * Im2)/((Re2)^2 + (Im2)^2)

            OBS: Divisão não poderá ser realizada se z2 = (0,0)
        
---------------------------------------------------------------------

    HISTÓRICO
        201609091920: João Paulo, agosto de 2016
            - Lista 3 / Estruturas de seleção

*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(){

    char op;
    float Re1, Re2, Im1, Im2, Re, Im;

    printf("Opeções:\n");
    printf("\t[+]Adição\n");
    printf("\t[-]Subtração\n");
    printf("\t[*]Multiplicação\n");
    printf("\t[/]Divisão\n");
    
    printf("\nEntre com uma opção: ");
        scanf("%c", &op);

    printf("\nDigite a parte real e imaginária do primero número: ");
        scanf("%f %f", &Re1, &Im1);
    
    printf("\nDigite a parte real e imaginária do segundo número: ");
        scanf("%f %f", &Re2, &Im2);

    switch(op){
        case '+' : 
            Re = Re1 + Re2; 
            Im = Im1 + Im2;
                        
            printf("z = (%.2f, %.2f)\n", Re, Im); 
            break;

        case '-' :
            Re = Re1 - Re2; 
            Im = Im1 - Im2;
            
            printf("z = (%.2f, %.2f)\n", Re, Im); 
            break;

        case '*' :
            Re = Re1 * Re2 - Im1 * Im2; 
            Im = Re1 * Im2 + Im1 * Re2;
            
            printf("z = (%.2f, %.2f)\n", Re, Im); 
            break;

        case '/':
            if(Re2 == 0 && Im2 == 0){
                printf("Ops! A divisão não poderá ser realizada.\n");
            }
            else{
                Re = (Re1*Re2 + Im1*Im2)/(pow(Re2,2) + pow(Im2,2));
                Im = (Im1*Re2 - Re1*Im2)/(pow(Re2,2) + pow(Im2,2));
            
                printf("z = (%.2f, %.2f)\n", Re, Im); 
                break;
                }
        default :
            printf("Ops!!! Opeção invalidade\n");
    }            
    return(0);

}
