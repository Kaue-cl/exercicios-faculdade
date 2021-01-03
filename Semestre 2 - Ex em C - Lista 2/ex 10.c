#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	float tamanho_chico = 1.5, tamanho_ze = 1.1, crescimento_chico = 0.02, crescimento_ze = 0.03;
	int ano;

	for(ano = 1; tamanho_ze < tamanho_chico; ano++){
		tamanho_chico = tamanho_chico + crescimento_chico;
		tamanho_ze = tamanho_ze + crescimento_ze;
		printf("Ano %d - Chico tem %.2fm e Zé tem %.2fm \n", ano, tamanho_chico, tamanho_ze);
	}
	printf("Serão nescessários %d anos para Zé ter %.2fm e ser maior que chico, com %.2fm", ano-1, tamanho_ze, tamanho_chico);
}
