#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero_digitado, contador = 1, numero_triangular = 0;
	
	do{
		printf("Digite um n�mero positivo: ");
		scanf("%d",&numero_digitado);
		if(numero_digitado < 0)
			printf("ERRO - o n�mero digitado n�o pertence ao intervalo estipulado. \n");
	}while(numero_digitado < 0);

	for(contador; numero_triangular < numero_digitado; contador ++)
		numero_triangular +=contador;
		
	if(numero_triangular == numero_digitado)
		printf("Esse n�mero � um n�mero triangular.");
	else
		printf("Esse n�mero n�o � triangular.");
}
