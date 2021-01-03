#include <stdio.h>
#include <locale.h>

int Mult (int a, int b)
{
	int res;
	
	if(a == 0 || b == 0)
		return 0;
	if(b == 1)
		return a;
	else
		res = a + Mult(a,b-1);
	
	return res;
}

void main () 
{
	int a, b;
	
	setlocale(LC_ALL,"");
	
	printf("Digite a multiplica��o desejada (a*b): ");
	scanf("%d*%d", &a, &b);
	
	printf("O resultado da multiplica��o de %d*%d � %d", a, b, Mult(a, b));
}
