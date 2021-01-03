#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero, contador;
	
	do{
		printf("Digite um número entre 0 e 100: ");
		scanf("%d",&numero);
		if(numero > 100 || numero < 1)
			printf("ERRO - o número digitado não pertence ao intervalo estipulado \n");
	}while(numero > 100 || numero < 1);
	
	for(contador = numero; contador >= 0; contador--){
		printf("O número atual é: %d \n", contador);
	}
}
