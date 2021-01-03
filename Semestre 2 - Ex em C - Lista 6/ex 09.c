#include <stdio.h>
#include <locale.h>

float Conversao (float n1)
{
	n1 = (n1-32)*5/9;
		
	return n1;
}

float EntradaValor()
{
	float num;
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f",&num);
	
	return num;
}

int main()
{
	setlocale (LC_ALL,"");
	float v1 = 0;
	
	v1 = EntradaValor();
	
	printf("%.2f°F = %.2f°C", v1, Conversao(v1));
	
	return 0;
}
