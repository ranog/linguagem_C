#include <stdio.h>
#include <ctype.h>

int main()
{
  char a;
  printf("Digite um caractere: ");
  a = getchar();
  printf("Retorno de isalpha = %d",isalpha(a));
  if (isalpha(a)>0)
  	printf("\nO caractere digitado foi a letra %c.\n", a);
  else
	printf("\nO caractere digitado foi  %c.\n", a);
return(0);
}
