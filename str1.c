/*
 str1.c - mostra o uso de strings.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa mostra um dos modos de se ler strings do teclado, é por meio
 da função scanf(), pelo formato %s.
 
 Exemplo:
    $ ./str1
    Digite o seu nome: [nome]
    Saudações, [nome]
 
----------------------------------------------------------------------

 Histórico:
    v1.0 2016-10-12, João Paulo:
        - Capítulo 7 /  Matrizes - Strings variáveis
            - Paginas 201

 Licença: GNU 
*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    char nome[80];

    printf("Digite o seu nome: ");
        scanf("%s", nome);


    printf("Saudações, %s.\n", nome);

    return(0);

}
