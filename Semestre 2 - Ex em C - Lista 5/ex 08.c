#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"");
	int MAT[5][8], linha[5] = {0}, coluna[8] = {0};
	int cont1, cont2, contaux;
	
	
	for(cont1 = 0; cont1 < 5; cont1 ++)
		for(cont2 = 0, contaux  = 1; cont2 < 8; cont2 ++, contaux ++)
			MAT[cont1][cont2] = contaux;
	
	printf("Matriz MAT:");
	for(cont1 = 0; cont1 < 5; cont1 ++){
		printf("\n[ ");
		for(cont2 = 0; cont2 < 8; cont2 ++){
			if(MAT[cont1][cont2] < 10)
				printf("%d  ",MAT[cont1][cont2]);
			else
				printf("%d ",MAT[cont1][cont2]);
			linha[cont1] += MAT[cont1][cont2];
			coluna[cont2] += MAT[cont1][cont2];
		}
		printf("]");
	}
	
	printf("\n\nDessa matriz podemos dizer que: ");
	for(cont1 = 0; cont1 < 5; cont1 ++){
		printf("\na soma dos elementos da %dª linha é %d - ", cont1 + 1, linha[cont1]);
		if(linha[cont1] %2 == 0)
			printf("Par");
		else
			printf("Impar");
	}
	printf("\n");
	for(cont2 = 0; cont2 < 8; cont2 ++){
		printf("\na soma dos elementos da %dª coluna é %d - ", cont2 + 1, coluna[cont2]);
		if(coluna[cont2] %2 == 0)
			printf("Par");
		else
			printf("Impar");
	}
	
	return 0;
}
