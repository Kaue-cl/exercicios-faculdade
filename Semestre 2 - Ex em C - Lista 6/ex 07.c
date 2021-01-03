#include <stdio.h>
#include <locale.h>

float IMC (float alt, int peso)
{
	float imc;
	imc = peso/(alt*alt);
	return imc;
}

int main()
{
	setlocale (LC_ALL,"");
	float altura, peso;
	
	
	printf("Digite a sua altura: ");
	scanf("%f",&altura);
	printf("Digite o seu peso: ");
	scanf("%f",&peso);
	printf("Seu IMC é %.2f", IMC(altura, peso));
	
	return 0;
}
