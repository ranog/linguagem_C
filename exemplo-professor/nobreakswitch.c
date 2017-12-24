//exemplo de como nao deve se usar o switch
//alem de nao ter os "break" o "default" nao eh o ultimo
#include <stdio.h>

int main()
{
	int i = 1, j;
	switch (i) {
		case 0:
			j = 0;			
		case 1:
			j = 10;			
		default:			
			j = 100;			
		case 2:			
			j = 1000;			
	}
	printf("j= %d\n",j);
	return(0);
}
