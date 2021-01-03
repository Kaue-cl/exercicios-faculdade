#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL,"");
	//variáveis
	int a1, a2, a3;
	//entrada de dados
	printf("Digite o primeiro ângulo: ");
	scanf("%d",&a1);
	printf("Digite o segundo ângulo: ");
	scanf("%d",&a2);
	printf("Digite o terceiro ângulo: ");
	scanf("%d",&a3);
	//processamento e saída de dados
	if(a1==90 || a2==90 || a3==90)
		printf("Esse triângulo é retângulo.");
	else if(a1>90 || a2>90 || a3>90)
		printf("Esse triângulo é obtusângulo.");
	else 
		printf("eEsse triângulo é acutângulo.");
}
