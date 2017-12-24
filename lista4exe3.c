/*  NOME
        lista4exe3.c

    SINOPSES
        ./lista4exe2
        Opções:
            [D] MDC - Maximo Divisor Comum
            [M] MMC - Minimo Multiplo Comum
            [X] Sair 

        Digite dois inteiros: [valor] [valor]
        MDC = [valor]
        MMC = [valor]
        Opeção invalida!  

    DESCRIÇÃO
        Programa mostra um menu com 3 opções e realiza a tarefa 
        conforme a escolha do usuario.

---------------------------------------------------------------------

    HISTÓRICO
        201617092003: João Paulo, agosto de 2016
            - Lista 4 / Esctruturas de repetição

*/

#include "stdio.h"
#include "stdlib.h"
#include "gconio.h"

int main(){

    int MMC, MDC = 1, dividendo, divisor, A, B;
    char OP;

    do{

    printf("Opções:\n");
    printf("\t[D] MDC - Maximo Divisor Comum\n");
    printf("\t[M] MMC - Minimo Multiplo Comum\n");
    printf("\t[X] Sair\n");

    printf("\nDigite sua opção: ");
        scanf("%c", &OP);

    if(OP == 'd' || OP == 'D' || OP == 'M' || OP == 'm'){

        printf("Digite dois números inteiros: ");
            scanf("%d %d", &A, &B);

        dividendo = A;
        divisor = B;    

        while(MDC != 0){
            MDC = dividendo % divisor;
            dividendo = divisor;
            divisor = MDC;
        }

        MDC = dividendo;

        MMC = (A * B) / MDC;


        switch(OP){ 
            case 'D' : 
            case 'd' : printf("MDC = %d\n", MDC); break;

            case 'M' : 
            case 'm' : printf("MMC = %d\n", MMC); break;
        }    

        } 

        puts("");
        //break; //para sair do laço
        
    }while(getche() != 'x' || getche() != 'X');

    return(0);

}
