#include <stdio.h>

int main()
{
	float nota;
	char conceito;
	printf("Informe a nota: ");
	scanf("%f", &nota);
	conceito = ( nota >= 9.0 ) ? 'A' 
                               : ( nota >= 7.5 ) ? 'B'
                               : ( nota >= 5.0 ) ? 'C'
                               : ( nota >= 3.0 ) ? 'D' 
							   : 'E';
	printf("Conceito %c\n", conceito);
	return(0);
}
