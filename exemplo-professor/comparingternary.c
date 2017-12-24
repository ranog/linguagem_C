#include <stdio.h>
/*operador ternario ou condicional ? : atua como substituicao de if-else
exp1 ? exp2 : exp3, se exp1 é true então exp2 eh avaliada, senao exp3 eh avaliada*/

int main()
{
	int a, b, c;	
	printf("Digite 3 numeros inteiros distintos: ");
	scanf("%d %d %d", &a, &b, &c);
	( a > b ) ?
		( a > c ) ? (b > c ) ? printf("%d %d %d\n", c, b, a)
							   : printf("%d %d %d\n", b, c, a)
                   : printf("%d %d %d\n", b, a, c)
	          : ( b > c ) ? ( a > c ) ? printf("%d %d %d\n", c, a, b)
                                        : printf("%d %d %d\n", a, c, b)
                           : printf("%d %d %d\n", a, b, c);
}
