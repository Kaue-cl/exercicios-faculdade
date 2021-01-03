#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	//variáveis
	int n1, n2, n3, variavel_intermediaria;
	//entrada de dados
	printf("Digite o primeiro número: ");
	scanf("%d",&n1);
	printf("Digite o segundo número: ");
	scanf("%d",&n2);
	printf("Digite o terceiro número: ");
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
	//saída de dados
	printf("os números em ordem crescente são %d, %d e %d", n1, n2, n3);
}
