#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero_digitado, contador = 1, soma = 0;
	
	do{
		printf("Digite um n�mero positivo: ");
		scanf("%d",&numero_digitado);
		if(numero_digitado < 0)
			printf("ERRO - o n�mero digitado n�o pertence ao intervalo estipulado. \n");
	}while(numero_digitado < 0);
	
	printf("A soma dos n�meros de 0 a %d �: 0", numero_digitado);
	
	for(contador; contador <= numero_digitado; contador ++){
		soma = soma + contador;
		printf(" + %d", contador);
	}		
	printf(" = %d", soma);
}
