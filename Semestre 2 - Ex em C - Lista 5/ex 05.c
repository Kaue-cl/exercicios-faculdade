#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int matriz[3][3] = {0}, zeros = 0;
	int cont1, cont2;
	
	for(cont1 = 0; cont1 < 3; cont1 ++)
		for(cont2 = 0; cont2 < 3; cont2 ++){
			printf("Digite um número para a posição (%d,%d)", cont1, cont2);
			scanf("%d",&matriz[cont1][cont2]);
			if(matriz[cont1][cont2] == 0)
				zeros ++;
		}
	
	printf("\nMAtriz: ");
	for(cont1 = 0; cont1 < 3; cont1 ++){
		printf("\n[");
		for(cont2 = 0; cont2 < 3; cont2 ++){
			printf("%d ",matriz[cont1][cont2]);
		}
		printf("]");
	}
	printf("\nEsa matriz possui %d zeros", zeros);
	
	return 0;
}
