#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	//vari�veis
	int n1, n2, n3, variavel_intermediaria;
	//entrada de dados
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&n1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&n2);
	printf("Digite o terceiro n�mero: ");
	scanf("%d",&n3);
	//processamento de dados
	if (n1>n2){
		variavel_intermediaria=n1;
		n1=n2;
		n2=variavel_intermediaria;
	}
	if (n1>n3){
		variavel_intermediaria=n1;
		n1=n3;
		n3=variavel_intermediaria;
	}
	if (n2>n3){
		variavel_intermediaria=n2;
		n2=n3;
		n3=variavel_intermediaria;
	}
	//sa�da de dados
	printf("os n�meros em ordem crescente s�o %d, %d e %d", n1, n2, n3);
}
