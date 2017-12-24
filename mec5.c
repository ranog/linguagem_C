/*  
    Capítulo 2 / Operadores / Pagina 56 / exercicio 5
*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int x, y, z;

    x = 1;
    y = 2;
    z = 0;

    z = x+++y;

    printf("%d\n", z);
    printf("%d\n", x+++y);

    //system("pause");
    return (0);
}
