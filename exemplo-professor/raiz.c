#include <stdio.h>
#include <math.h>

#define TOL 10E-7//tolerancia do metodo

int main()
{
    float num, raiz, tol;
	printf("Entre um numero para calcular a raiz quadrada?");
	scanf("%f", &num);
	raiz = 1;
	while  ( fabs((raiz * raiz) / num  - 1.0) >= TOL ) 
        raiz = ((num/raiz) + raiz) / 2;
	printf("A raiz de %f = %f\n", num, raiz );
    printf("A raiz de %f = %f usando a funcao sqrt do C\n", num, sqrt(num));
    return 0;
}
