#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL,"");
	//vari�veis
	int a1, a2, a3;
	//entrada de dados
	printf("Digite o primeiro �ngulo: ");
	scanf("%d",&a1);
	printf("Digite o segundo �ngulo: ");
	scanf("%d",&a2);
	printf("Digite o terceiro �ngulo: ");
	scanf("%d",&a3);
	//processamento e sa�da de dados
	if(a1==90 || a2==90 || a3==90)
		printf("Esse tri�ngulo � ret�ngulo.");
	else if(a1>90 || a2>90 || a3>90)
		printf("Esse tri�ngulo � obtus�ngulo.");
	else 
		printf("eEsse tri�ngulo � acut�ngulo.");
}
