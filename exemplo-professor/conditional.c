#include <stdio.h>
#define NUMERO '\0' //uma constante tipo char


int main()
{
	if (NUMERO)
		printf("A condição foi avaliada como %s", "verdadeira");
	else
		printf("A condição foi avaliada como %s", "falsa");
	return(0);
}
