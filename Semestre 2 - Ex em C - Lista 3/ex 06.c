#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int cont;
	float num[5], num_quadrado[5];
	
	for(cont = 0; cont < 5; cont++){
		printf("Digite o %d� n�mero: ", cont+1);
		scanf("%f", & num[cont]);
	}
	for(cont = 0; cont < 5; cont++){
		num_quadrado[cont] = num[cont] * num[cont];
	}
	for(cont = 0; cont < 5; cont++){
		printf("%d� --- %.2f� = %.2f \n", cont+1, num[cont], num_quadrado[cont]);
	}
	
}
