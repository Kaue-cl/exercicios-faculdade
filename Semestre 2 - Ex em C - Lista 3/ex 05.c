#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int cont, menor=0;
	float num[5];
	
	for(cont = 0; cont < 5; cont++){
		printf("Digite o n�mero da posi��o %d: ", cont);
		scanf("%f", & num[cont]);
	}
	for(cont = 0; cont < 5; cont++){
		if(num[cont] < num[menor])
			menor = cont;
	}
	printf("O menor n�mero digitado ocupa a posi��o %d", menor);
	printf("\nE possui o valor de %.2f", num[menor]);
}
