#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int cont;
	float num[5], media=0;
	
	for(cont = 0; cont < 5; cont++){
		printf("Digite o %dº número: ", cont+1);
		scanf("%f", & num[cont]);
		media += num[cont];
	}
	printf("(%.2f", num[0]);
	for(cont = 1; cont < 5; cont++){
		printf(" + %.2f", num[cont]);
	}
	printf(") / %d = %.2f", cont, media/cont);
	printf("\nA média desses valores é: %.2f", media/cont);
}
