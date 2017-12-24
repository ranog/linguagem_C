/* UnsigVars.c

O modificador unsigned (sem sinal)

Indica que o tipo associado deve ter seu bit superior
interpretado como um outro bit qualquer e não como bit
de sinal.

    201610082050: João Paulo, agosto de 2016
        - Mostra o modificar unsigned

*/

# include "stdio.h"     // para printf()
# include "stdlib.h"    // para system()

int main(){

    unsigned j = 4294967000UL;
    int i = j;

    printf("\nVariável unsigned = %u\n", j);
    printf("Variável int = %d\n\n", i);

    // system("pause");
    return 0;
}
