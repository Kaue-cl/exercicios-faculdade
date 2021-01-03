#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int contador, numero_digitado, resultado;
	
	printf("Digite um número: ");
	scanf("%d",&numero_digitado);
	
	for(contador = 0; contador <= 9; contador++){
		resultado = numero_digitado * contador;
		printf("%d X %d = %d \n", numero_digitado, contador, resultado);
	}
}
