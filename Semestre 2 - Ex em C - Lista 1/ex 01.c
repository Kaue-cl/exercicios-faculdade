#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	//variaveis
	int n1, n2; 
	//entrada de dados
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&n1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&n2);
	//processamento e sa�da de dados
	if(n1%2==0)
		printf("O primeiro n�mero � par.");
	else
		printf("O primeiro n�mero � impar.");
	if(n2%2==0)
		printf("\nO segundo n�mero � par");
	else
		printf("\nO segundo n�mero � impar.");
}
