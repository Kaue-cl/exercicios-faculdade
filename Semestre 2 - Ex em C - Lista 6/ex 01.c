#include <stdio.h>
#include <locale.h>

int Maior (int valor1, int valor2, int valor3)
{
	if(valor1 > valor2 && valor1 > valor3)
		return valor1;

	if(valor2 > valor1 && valor2 > valor3)
		return valor2;

	return valor3;
}

int main()
{
	setlocale (LC_ALL,"");
	int num1, num2, num3;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&num1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&num2);
	printf("Digite o terceiro n�mero: ");
	scanf("%d",&num3);
	printf("O maior deles � %d", Maior(num1,num2,num3));
	
	return 0;
}


