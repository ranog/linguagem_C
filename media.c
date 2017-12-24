/*  NOME
        media.c

    SINOPSES
        ./media
        Digite a nota [1]: [NOTA]
            .
            .   
            .
        Digite a nota [10]: [NOTA]
        
        Média = [VALOR]        

    DESCRIÇÃO
        Imprime a média aritmética de 10 notas.

        Múltiplas instruções no corpo de um laço for:
            Se um laço for deve executar várias instruções a cada iteração, elas
            precisam estar entre chaves.

            Sintaxe:
                for(i = 0; i < 10; ++i){
                    instrução;
                    instrução;
                    instrução;
                }
   
-----------------------------------------------------------------------------------

    HISTÓRICO
        201620081524: João Paulo, agosto de 2016
            Múltiplas instruções no corpo de um laço for - Capítulo 3 laços - Página 68
                Treinamento em linguagem C

*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    float soma = 0.0;
    const int max = 10;
    int i;

    for(i = 0; i < max; ++i){
        float nota;
        
        printf("Digite a nota %d: ", i + 1);
            scanf("%f", &nota);
    
        soma += nota; // soma = soma + nota    
    }

    printf("\nMédia = %.2f\n", soma/max);

    return(0);   

}
