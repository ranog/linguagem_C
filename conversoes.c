/*  NOME
        conversoes.c

    SINOPSES
        ./conversoes
        VarInt = [VALOR ERRADO]
        VarIntc = [VALOR CORRETO]

    DESCRIÇÃO
        O primeiro valor impresso é um exemplo da conversão de tipo
        automática.
        
        Algumas vezes, a conversão automárica não faz exatamente o que
        esperamos. Teremos, então, resultados errados.

        O segundo mostra o uso do operador de conversão de tipo.
        
        O operador de molde consiste em escrever o nome do tipo 
        desejado entre parênteses, em seguida, o valor ou a expressão
      a ser avaliada. O resultado é a expressão convertida para o 
        tipo especificado.

----------------------------------------------------------------------

    HISTORICO
        201612082256: João Paulo, agosto de 2016
            - capítulo 2 - operadores:
                        - Conversões de tipos e o operador de molde ou
                          cast.
                            - Conversão automática
                            - Conversão explícita

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int VarInt = 2000000000;
    int VarIntc = 2000000000;
    int Dez = 10;

    VarInt = (VarInt * Dez)/Dez;            // Valor muito grande
    
    printf("VarInt  = %d\n", VarInt);        // Resposta errada

    VarIntc = ((double)VarIntc * Dez)/Dez;    // Converte para double

    printf("VarIntc = %d\n", VarIntc);    

    //system("pause");
    return(0);
}
