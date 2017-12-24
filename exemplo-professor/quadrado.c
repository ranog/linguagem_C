#include <stdio.h>


int main()
{
    int i, num;
    int quad=0;
    printf("Entre o numero: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)	
    	quad += 2*i-1;    
    printf("O valor do quadrado de %d eh %d", num, quad);
    return 0;
}
