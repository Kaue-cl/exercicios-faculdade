#include <stdio.h>
#include <locale.h>

int  Fatorial(int n1)
{
	int fatorial = 1;
	
	for(n1; n1 > 0; n1--)
		fatorial = fatorial * n1;
	
	return fatorial;
}

int main()
{
	setlocale (LC_ALL,"");
	int num1;
	int i;
	
	printf("Digite um valor: ");
	scanf("%d",&num1);
	
	printf("%d! = %d", num1, num1);
	for(i = num1-1; i > 0; i--)
		printf(" X %d", i);
	printf(" = %d", Fatorial(num1));
	
	
	return 0;
}

