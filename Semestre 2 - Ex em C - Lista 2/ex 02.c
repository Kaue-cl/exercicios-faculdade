#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero, contador;
	
	do{
		printf("Digite um n�mero entre 0 e 100: ");
		scanf("%d",&numero);
		if(numero > 100 || numero < 1)
			printf("ERRO - o n�mero digitado n�o pertence ao intervalo estipulado \n");
	}while(numero > 100 || numero < 1);
	
	for(contador = numero; contador >= 0; contador--){
		printf("O n�mero atual �: %d \n", contador);
	}
}
