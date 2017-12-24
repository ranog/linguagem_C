#include <stdio.h>


int main()
{
    int i, num;
    float serie=0;
    printf("Entre o numero de fatores: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    	serie += 1.0/i; //somatoria de cada elemento da serie
    printf("O valor da serie harmonica com %d elemento eh %.2f", num, serie);
    return 0;
}
