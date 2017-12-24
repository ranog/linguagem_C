#include <stdio.h>
#include <math.h>

int main()
{
	int i;	
	char cidade[25] = "Lins";
	printf("Cidade: %s\n", cidade);
	printf("Cidade: ");
	for(i=0;i<5;i++)
		printf("%c",cidade[i]);
	printf("\n");
	i=0;
	printf("Cidade: ");	
	while(cidade[i]){
		printf("%c",cidade[i]);
	i++;
	}
	printf("\n");
	puts("Entre o string: ");
	//scanf("%s", cidade);
	//printf("Cidade: %s\n", cidade);
	//getchar();
	//puts("Entre o string: ");
	//fgets(cidade,25,stdin);
	gets(cidade);//unsafe
	printf("Cidade: %s\n", cidade);
	return 0;
}
