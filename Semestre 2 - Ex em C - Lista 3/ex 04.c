#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int num[5], cont, maior=0;
	
	for(cont = 0; cont < 5; cont++){
		printf("Digite o número da posição %d: ", cont);
		scanf("%d", & num[cont]);
	}
	for(cont = 0; cont < 5; cont++){
		if(num[cont] > num[maior])
			maior = cont;
	}
	printf("O maior número digitado ocupa a posição %d", maior);
	printf("\nE possui o valor de %d", num[maior]);
}
