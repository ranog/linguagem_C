/*
 ============================================================================
 Name        : dicegame.c
 Author      : jfvg
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int dadoHum, dadoComp, ganHum=0, ganComp=0, jogos;
	printf("Quantos jogos deseja fazer?");
	scanf("%d", &jogos);
	getchar();			//para tirar o \n que fica no buffer de entrada!
	srand(time(NULL));	//inicializa o gerador de numeros
	while(ganHum<jogos && ganComp<jogos){
		printf("Aperte ENTER para jogar...\n");
		getchar();
		dadoHum = 1 + rand()%6;
		dadoComp = 1 + rand()%6;
		if (dadoHum > dadoComp){
			printf("Voce ganhou %d a %d\n", dadoHum, dadoComp);
			ganHum++;
		}
		else if (dadoHum < dadoComp){
			printf("Voce perdeu %d a %d\n", dadoComp, dadoHum);
			ganComp++;
		}
			else
				printf("Empatou a %d\n", dadoHum);
	}
	if (ganHum > ganComp)
		printf("Voce ganhou a partida %d a %d\n", ganHum, ganComp);
	else
		printf("Voce perdeu a partida %d a %d\n", ganComp, ganHum);
	return EXIT_SUCCESS;//constante definida em stdlib.h eh igual a zero
}
