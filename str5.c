/*
 str5.c - mostra o uso da aritmérica com endereço.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa mostra a aritmética com endereços.
 
 Exemplo:
    $ ./str5
    Digite o seu nome: [nome]
    Saudações, [nome]
 
----------------------------------------------------------------------

 Histórico:
    v1.0 2016-10-12, João Paulo:
        - Capítulo 7 /  Matrizes - Aritmética com endereços
            - Paginas 201

 Licença: GNU 
*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    char nome[80], salute[] = "Saudações, ";

    printf("Digite o seu nome: ");
        fgets(nome, 80, stdin);


    printf("%s%s", salute, nome + 5);

    return(0);

}
