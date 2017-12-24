
/*
 jogodavelhaIni.c - jogo da velha.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa mostra como as matriz de duas dimensões são inicializadas.
 
 Exemplo:
    $ ./jogodavelhaIni
    Digite coordenadas na forma [linha] [columa]
    . . .
    . . .
    . . .
    Coordenadas: 0 0
    O . .
    . . .
    . . .
    Coordenadas: 0 1
    O X .
    . . .
    . . .
    ...
    Você ganhou, primeiro jogador!!!

    A matriz m[] tem três elementos: m[0], m[1] e m[2]. Cada elemento 
    de m[] é, por sua vez, uma matriz de três elementos do tipo char.
    Assim, m[0], m[1] e m[2] são nomes de matriz de elementos do tipo
    char.
    
    Para inicializar uma matriz, devemos colocar a lista de elementos
    em ordem, entre chaves e separados por vírgulas, exatamente como
    fizemos ao inicializar uma matriz de uma dimensão.

    unsigned char m[3][3] = {{pt, pt, pt}, {pt, pt, pt}, {pt, pt, pt}};
    
    A lista de valores usada para inicializar a matriz apresenta
    constantes separadas por vírgulas e envoltas por chaves.

----------------------------------------------------------------------

 Histórico:

 v1.0 2016-10-02, João Paulo:
    - Capítulo 7 / Matrizes - Inicialização de matrizes de duas 
    dimensões.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

int main(){   

    const int TRUE = 1;
    const char O = 'o', X = 'x', pt = '.';
       
    unsigned char m[3][3] = {{pt, pt, pt}, {pt, pt, pt}, {pt, pt, pt}};
    int linha, coluna, j = 0;

    printf("Digite coordenadas na forma [linha] [coluna]:\n");
    
    for(linha = 0; linha < 3; linha++)
        for(coluna = 0; coluna < 3; coluna++)
            m[linha][coluna] = '.';

    while(TRUE){

        for(linha = 0; linha < 3; linha++){
            for(coluna = 0; coluna < 3; coluna++)
                printf("%c ", m[linha][coluna]);
            
            printf("\n");
        }

        // Verifica se o primeiro jogador ganhou
        if((m[0][0] == O && m[0][1] == O && m[0][2] == O) ||
           (m[1][0] == O && m[1][1] == O && m[1][2] == O) ||
           (m[2][0] == O && m[2][1] == O && m[2][2] == O) ||
           (m[0][0] == O && m[1][0] == O && m[2][0] == O) ||
           (m[0][1] == O && m[1][1] == O && m[2][1] == O) ||
           (m[0][2] == O && m[1][2] == O && m[2][2] == O) ||
           (m[0][0] == O && m[1][1] == O && m[2][2] == O) ||
           (m[0][2] == O && m[1][1] == O && m[2][0] == O)){
            
            printf("\aVocê ganhou, primeiro jogador!!!\n");
                break;
        }

        // Verifica se o segundo jogador ganhou
        if((m[0][0] == X && m[0][1] == X && m[0][2] == X) ||
           (m[1][0] == X && m[1][1] == X && m[1][2] == X) ||
           (m[2][0] == X && m[2][1] == X && m[2][2] == X) ||
           (m[0][0] == X && m[1][0] == X && m[2][0] == X) ||
           (m[0][1] == X && m[1][1] == X && m[2][1] == X) ||
           (m[0][2] == X && m[1][2] == X && m[2][2] == X) ||
           (m[0][0] == X && m[1][1] == X && m[2][2] == X) ||
           (m[0][2] == X && m[1][1] == X && m[2][0] == X)){
            
            printf("\aVocê ganhou, segundo jogador!!!\n");
                break;
        }

        if( j == 9){ 
            printf("\aEmpatou!!!\n"); 
                break;
        }

        printf("Coordenadas: ");
            scanf("%d%d", &linha, &coluna);

        if(m[linha][coluna] == '.'){ // casa livre?
            if(j % 2)
                m[linha][coluna] = X;

            else
                m[linha][coluna] = O;

            j++;
        }

    }
    
    return(0);

}
