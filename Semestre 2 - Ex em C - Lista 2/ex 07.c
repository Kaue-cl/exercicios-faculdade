#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero_digitado, contador = 1, numero_triangular = 0;
	
	do{
		printf("Digite um número positivo: ");
		scanf("%d",&numero_digitado);
		if(numero_digitado < 0)
			printf("ERRO - o número digitado não pertence ao intervalo estipulado. \n");
	}while(numero_digitado < 0);

	for(contador; numero_triangular < numero_digitado; contador ++)
		numero_triangular +=contador;
		
	if(numero_triangular == numero_digitado)
		printf("Esse número é um número triangular.");
	else
		printf("Esse número não é triangular.");
}
