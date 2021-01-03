#include <stdio.h>
#include <locale.h>

int Resto(int a, int b)
{
	int res = 0;
	
	if(b == 0)
		return 0;
	if(a < b)
		return a;
	else
		res = Resto(a-b, b);
	return res;
}

void main () 
{
	int a, b;
	
	setlocale(LC_ALL,"");
	
	printf("Digite a divisão desejada (a/b): ");
	scanf("%d/%d", &a, &b);
	
	printf("O resto da divisão de %d/%d é %d", a, b, Resto(a, b));
}
