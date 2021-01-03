#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	//variaveis
	int n1, n2; 
	//entrada de dados
	printf("Digite o primeiro número: ");
	scanf("%d",&n1);
	printf("Digite o segundo número: ");
	scanf("%d",&n2);
	//processamento e saída de dados
	if(n1%2==0)
		printf("O primeiro número é par.");
	else
		printf("O primeiro número é impar.");
	if(n2%2==0)
		printf("\nO segundo número é par");
	else
		printf("\nO segundo número é impar.");
}
