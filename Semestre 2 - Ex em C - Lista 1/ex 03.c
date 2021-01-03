#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	//variáveis
	float salario;
	//entrada de dados
	printf("Digite seu salário: ");
	scanf("%f",&salario);
	//processamento e saída de dados
	if (salario < 1903.99)
		printf("Então você não possui alíquota.");
	else if (salario < 2826.66)
		printf("Então sua alíquota é de 7,5%%");
	else if(salario <  3751.06)
		printf("Então sua alíquota é de 15%%");
	else if(salario < 4664.68)
		printf("Então sua alíquota é de 22,5%%");
	else 
		printf("Então sua alíquota é de 27,5%%");
}
