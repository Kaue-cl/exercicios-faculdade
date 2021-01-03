#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero_base, numero_expoente, resultado = 1;
	//entrada de dados
	printf("Digite um número: ");
	scanf("%d",&numero_base);
	do{
		printf("Digite um número positivo para ser o expoente: ");
		scanf("%d",&numero_expoente);
		
		if(numero_expoente < 0)
			printf("ERRO - o número digitado não pertence ao intervalo estipulado");
	}while(numero_expoente < 0);
	//saída de dados
	printf("%d elevado a %d = ", numero_base, numero_expoente);
	//processamento
	if(numero_expoente > 0){
		resultado = numero_base;
		for(numero_expoente; numero_expoente > 1; numero_expoente--)
		resultado = numero_base * resultado;		
	}
	//saída de dados
	printf("%d", resultado);
}
