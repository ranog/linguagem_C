#include <stdio.h>
#include <math.h>

int main()
{
    float num, raiz, tol;
	printf("Entre um numero para calcular a raiz quadrada e a tolerancia desejada?");
	scanf("%f %f", &num, &tol);
	raiz = 1;
	while  ( fabs((raiz * raiz) / num  - 1.0) >= tol ) 
        raiz = ((num/raiz) + raiz) / 2;
	printf("A raiz de %f = %f\n", num, raiz );
    printf("A raiz de %f = %f usando a funcao sqrt do C\n", num, sqrt(num));
    return 0;
}
