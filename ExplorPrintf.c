/* ExplorPrintf.c

Explorando a função printf()

    201610082356: Ranog, agosto de 2016
        - Imprimir o caractere % é preciso usar dois símbolos %.
        - Tamanho de campos na impressão
*/

# include "stdio.h"     // para printf()
# include "stdlib.h"    // para system()

int main(){

    int reajuste = 10;

    printf("\nO reajuste foi de %d%%\n\n", reajuste);

//-----------[Tamanho de campos na impressão]---------------

    printf("Os alunos são %2d.\n", 350);    
    printf("Os alunos são %4d.\n", 350);    
    printf("Os alunos são %5d.\n\n", 350);
    
    //system("pause");
    return 0;
}
