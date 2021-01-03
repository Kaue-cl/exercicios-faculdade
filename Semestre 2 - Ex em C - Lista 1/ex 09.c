#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL,"");
	//variáveis
	float peso, altura, imc;
	//entrada de dados
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	//processamento de dados
	imc = peso / (altura * altura);
	printf("Seu IMC é %.2f.", imc);
	//saída de dados
	if (imc<17)
		printf("Muito abaixo do peso.");
	else if (imc<18.5)
		printf("Abaixo do peso.");
	else if (imc<25)
		printf("Peso normal.");
	else if (imc<30)
		printf("Acima do peso.");
	else if (imc<35)
		printf("Obesidade I.");
	else if (imc<40)
		printf("Obesidade II.");
	else
		printf("Obesidade III.");
}
