#include <stdio.h>
#include <locale.h>

int Fibonacci(int i)
{	
	if(i == 0)
		return 0;
	if(i == 1)
		return 1;	
	else
		i = Fibonacci(i - 1) + Fibonacci(i - 2);
	return i;
}

void main () 
{
	int a, i;
	
	setlocale(LC_ALL,"");
	
	printf("Digite a quantidade de elementos desejados da sequencia de Fibonacci: ");
	scanf("%d", &a);
	
	if(a == 1)
		printf("{0}");
	else
	{
		printf("{0");
		for(i = 1; i < a; i ++)
			printf(", %d", Fibonacci(i));
		printf("}");
	}
}
