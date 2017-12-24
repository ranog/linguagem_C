/* prog2.c

    201610081736: João Paulo, agosto de 2016
        - Mais sobre a função printf()
        - Imprimindo outros tipos de dados com printf()
*/

# include "stdio.h"     // para printf()
# include "stdlib.h"    // para system()

int main(){

    printf("Este é o número %d.\n", 5);
    // system("pause"); para programas que vão rodar no windows
    printf("\n%s está a %d milhões de milhas\ndo sol.\n", "Venus", 67);
    printf("\nA letra %c", 'J');
    printf("pronuncia-se %s%c%c", "Jota", '.', '\n');

    return 0;

}
