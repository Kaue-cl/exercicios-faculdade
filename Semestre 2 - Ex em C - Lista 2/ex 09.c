#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero_digitado, contador = 1, soma = 0;
	
	do{
		printf("Digite um número positivo: ");
		scanf("%d",&numero_digitado);
		if(numero_digitado < 0)
			printf("ERRO - o número digitado não pertence ao intervalo estipulado. \n");
	}while(numero_digitado < 0);
	
	printf("A soma dos números de 0 a %d é: 0", numero_digitado);
	
	for(contador; contador <= numero_digitado; contador ++){
		soma = soma + contador;
		printf(" + %d", contador);
	}		
	printf(" = %d", soma);
}
