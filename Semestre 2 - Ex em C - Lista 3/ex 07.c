#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int cont, positivo = 0, negativo = 0, nulo = 0;
	float num[5];
	
	for(cont = 0; cont < 5; cont++){
		printf("Digite o %d� n�mero: ", cont+1);
		scanf("%f", & num[cont]);
	}
	for(cont = 0; cont < 5; cont++){
		if(num[cont] > 0)
			positivo ++;
		else if(num[cont] < 0)
			negativo ++;
		else
			nulo ++;
	}
	printf("\nVoc� digitou: ");
	printf("\n%d n�meros positivos", positivo);
	printf("\n%d n�meros negativos", negativo);
	printf("\n%d n�meros nulos", nulo);
}
