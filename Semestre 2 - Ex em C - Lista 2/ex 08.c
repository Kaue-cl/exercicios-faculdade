#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero_digitado, numero_codigo = 20;
	
	do{
		printf("Digite o n�mero do c�digo: ");
		scanf("%d",&numero_digitado);
		if(numero_digitado != numero_codigo)
			printf("ERRO - o n�mero digitado n�o � o numero correto.\n");
		else
			printf("Correto.");
	}while(numero_digitado != numero_codigo);
}
