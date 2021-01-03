#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int matriz[4][4];
	int cont1, cont2, qtd = 0;
	
	for(cont1 = 0; cont1 < 4; cont1 ++)
		for(cont2 = 0; cont2 < 4; cont2 ++)
			matriz[cont1][cont2] = 3 * cont1 + 2 * cont2;
	
	printf("MAtriz: ");
	for(cont1 = 0; cont1 < 4; cont1 ++){
		printf("\n[");
		for(cont2 = 0; cont2 < 4; cont2 ++){
			printf("%d ",matriz[cont1][cont2]);
			if(matriz[cont1][cont2] > 10)
				qtd ++;
		}
		printf("]");
	}
	
	printf("\n\nEssa matriz possui %d valores maiores que 10, são eles: ", qtd);
	for(cont1 = 0; cont1 < 4; cont1 ++)
		for(cont2 = 0; cont2 < 4; cont2 ++)
			if(matriz[cont1][cont2] > 10)
				printf("\n%d - na posição (%d,%d)", matriz[cont1][cont2], cont1, cont2);
	
	
	return 0;
}
