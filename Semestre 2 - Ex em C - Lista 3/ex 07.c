#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int cont, positivo = 0, negativo = 0, nulo = 0;
	float num[5];
	
	for(cont = 0; cont < 5; cont++){
		printf("Digite o %dº número: ", cont+1);
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
	printf("\nVocê digitou: ");
	printf("\n%d números positivos", positivo);
	printf("\n%d números negativos", negativo);
	printf("\n%d números nulos", nulo);
}
