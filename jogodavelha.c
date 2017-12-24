/*
 jogodavelha.c - jogo da velha.

 Autor      : João Paulo    <jprnogueira@yahoo.com.br>
 Manutenção : João Paulo    <jprnogueira@yahoo.com.br> 

----------------------------------------------------------------------

 Programa mostra matriz de duas dimensões.
 
 Exemplo:
    $ ./jogodavelha
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

    A matriz é preenchida com pontos. Depois, o programa forma um 
    ciclo por meio de um laço while no qual a matriz é impressa, 
    verifica se algum jogador já ganhou ou se houve empate, solicita 
    ao jogador que digite um par de coordenadas e finalmente atribui o
    caractere 'O' ou 'X' ao elemento da matriz correspondente às 
    coordenadas entradas.

----------------------------------------------------------------------

 Histórico:

 v1.0 2016-10-02, João Paulo:
    - Capítulo 7 / Matrizes - Matrizes de mais de uma dimensão.

 Licença: GNU
*/

#include "stdio.h"
#include "stdlib.h"

int main(){   
    
    unsigned char m[3][3];  // matriz de duas dimensões
    int linha, coluna, j = 0;

    const int TRUE = 1;
    const char O = 'o', X = 'x';

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
