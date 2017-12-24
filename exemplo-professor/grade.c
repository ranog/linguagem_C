#include <stdio.h>

int main()
{
	float nota;	
	printf("Informe a nota: ");
	scanf("%f", &nota);
	if ( nota >= 9.0 )
		printf("Conceito A.\n");
	else
		if ( nota >= 7.5 )
			printf("Conceito B.\n");
		else
			if ( nota >= 5.0 )
				printf("Conceito C.\n");
			else
				if ( nota >= 3.0 )
					printf("Conceito D.\n");
				else
					printf("Conceito E.\n");

	return(0);
}
