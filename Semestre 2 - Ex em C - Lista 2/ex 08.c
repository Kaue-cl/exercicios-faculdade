#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero_digitado, numero_codigo = 20;
	
	do{
		printf("Digite o número do código: ");
		scanf("%d",&numero_digitado);
		if(numero_digitado != numero_codigo)
			printf("ERRO - o número digitado não é o numero correto.\n");
		else
			printf("Correto.");
	}while(numero_digitado != numero_codigo);
}
