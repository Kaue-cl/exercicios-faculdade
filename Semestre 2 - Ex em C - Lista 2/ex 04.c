#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero_base, numero_expoente, resultado = 1;
	//entrada de dados
	printf("Digite um n�mero: ");
	scanf("%d",&numero_base);
	do{
		printf("Digite um n�mero positivo para ser o expoente: ");
		scanf("%d",&numero_expoente);
		
		if(numero_expoente < 0)
			printf("ERRO - o n�mero digitado n�o pertence ao intervalo estipulado");
	}while(numero_expoente < 0);
	//sa�da de dados
	printf("%d elevado a %d = ", numero_base, numero_expoente);
	//processamento
	if(numero_expoente > 0){
		resultado = numero_base;
		for(numero_expoente; numero_expoente > 1; numero_expoente--)
		resultado = numero_base * resultado;		
	}
	//sa�da de dados
	printf("%d", resultado);
}
