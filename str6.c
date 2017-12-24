/*
 str6.c - mostra o uso de strlen().

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa examina cada posição de memória ocupada pela string e 
 imprime o que tiver encontrado.
 
 Exemplo:
    $ ./str6
    Digite o seu nome: [nome]
    Endereço = [valor]  Char = [letra]  Dec = [valor]
    ...
    Endereço = [valor]  Char = [letra]  Dec = [valor]
 
 A função strlen(), declarada no arquivo string.h, recebe como 
 argumento o endereço de uma string e retorna o seu tamanho.

----------------------------------------------------------------------

 Histórico:
    v1.0 2016-10-12, João Paulo:
        - Capítulo 7 /  Matrizes - A função strlen()
            - Paginas 205

 Licença: GNU 
*/

#include "stdio.h"
#include "stdlib.h"

int main(){

    int len, i;
    char nome[80];

    printf("Digite o seu nome: ");
        fgets(nome, 80, stdin);

    len = strlen(nome);

    for(i = 0; i < len + 4; i++)
        printf("Endereço = %u\tChar = %c\tDec = %d\n", (unsigned)(nome + i), nome[i], (int)nome[i]);

    return(0);

}
