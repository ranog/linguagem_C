/*
 str2.c - mostra leitura de strings com fgets().

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa le uma cadeia de caracteres do teclado enquanto não for 
 pressionada a tecla [ENTER].
 
 Exemplo:
    $ ./str1
    Digite o seu nome: [nome]
    Saudações, [nome]
 
----------------------------------------------------------------------

 Histórico:
    v1.0 2016-10-12, João Paulo:
        - Capítulo 7 /  Matrizes - A função gets()/fgets(str, tam, sdin)
            - Paginas 202

 Licença: GNU 
*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    char nome[80];

    printf("Digite o seu nome: ");
        fgets(nome, 80, stdin);

    printf("Saudações, %s", nome);

    return(0);

}
