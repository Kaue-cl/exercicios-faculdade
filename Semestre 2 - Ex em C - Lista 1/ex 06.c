#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	//variáveis
	float lado1, lado2, lado3;
	//entrada de dados
	printf("Digite o valor do primeiro lado: ");
	scanf("%f",&lado1);
	printf("Digite o valor do segundo lado: ");
	scanf("%f",&lado2);
	printf("Digite o valor do terceiro lado: ");
	scanf("%f",&lado3);
	//processamento e saída de dados
	if (lado1==lado2 && lado1==lado3)
		printf("Esse triângulo é equilátero.");
	else if (lado1==lado2 || lado1==lado3 || lado2==lado3)
		printf("Esse triângulo é isóceles.");
	else
		printf("Esse triângulo é escaleno.");
}
