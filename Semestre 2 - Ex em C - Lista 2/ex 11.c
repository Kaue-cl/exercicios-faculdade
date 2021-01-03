#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero_digitado;
	float soma, media = 0,contador = 1;
	
	do{
		printf("%.0f-Digite um número: ", contador);
		scanf("%d",&numero_digitado);
		
		if(numero_digitado %2 == 0){
			soma = soma + numero_digitado;
			media ++;
		}	
		
		printf("Quer continuar? sim(1) não(0) : ");
		scanf("%f",&numero_digitado);
		contador ++;
	}while(numero_digitado != 0);
	
	media = soma/media;
	
	printf("A média dos números digitados é %.2f", media);
}
