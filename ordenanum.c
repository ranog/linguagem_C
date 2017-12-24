/*
 ordenanum.c - ordena os valores da matriz.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa ordena os valores de uma matriz.
 
 Exemplo:
    $ ./ordenanum
    Digite número ou zero para terminar: [valor]
    Digite número ou zero para terminar: [valor]
    Digite número ou zero para terminar: [valor]
    Digite número ou zero para terminar: [valor]
    Digite número ou zero para terminar: [valor]
    Digite número ou zero para terminar: [valor]
    Digite número ou zero para terminar: [valor]
    Digite número ou zero para terminar: 0
    [valor]
    [valor]
    [valor]
    [valor]
    [valor]
    [valor]
    [valor]
    [valor]

    Observar que a mudança da ordem é feita na matriz original, criada
    em main().

----------------------------------------------------------------------

 Histórico:

 v1.0 2016-10-08, João Paulo:
    - Capítulo 7 / Matrizes - Ordenação dos valores de uma matriz.
        - Pagina 196-197

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

#define TAMANHO 50

void ordena(int[], int); // protótipo

int main(){

    int Tab[TAMANHO], i, j;

    for(i = 0; i < TAMANHO; i++){
        
        printf("Digite número ou zero para terminar: ");
            scanf("%d", &Tab[i]);

        if(!Tab[i]) break;

    }   
    
    ordena(Tab, i);

    for(j = 0; j < i; j++)
        printf("%d\n", Tab[j]);
    
    return(0);

}

// ordena os valores da matriz
void ordena(int lista[], int tamanho){
    
    int i, j, temp;

    for(i = 0; i < tamanho - 1; i++)

        for(j = i+1; j < tamanho; j++)
            if(lista[i] > lista[j]){
        
                temp = lista[j];
                lista[j] = lista[i];
                lista[i] = temp;

            }

    
}
