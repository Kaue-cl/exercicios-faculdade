#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int matriz[3][3] = {0}, valor, achado = 0;
	int cont1, cont2;
	
	for(cont1 = 0; cont1 < 3; cont1 ++)
		for(cont2 = 0; cont2 < 3; cont2 ++)
			matriz[cont1][cont2] = 3*cont1 - cont2;
	
	printf("Digite um valor: ");
	scanf("%d",& valor);
	
	for(cont1 = 0; cont1 < 3; cont1 ++)
		for(cont2 = 0; cont2 < 3; cont2 ++)
			if(valor == matriz[cont1][cont2]){
				printf("valor encontrado na posição (%d,%d)",cont1,cont2);
				achado ++;
			}
	
	if(achado == 0)
		printf("Valor não encontrado.");
	
	printf("\nA matriz era: ");
	for(cont1 = 0; cont1 < 3; cont1 ++){
		printf("\n[");
		for(cont2 = 0; cont2 < 3; cont2 ++)
			printf("%d ",matriz[cont1][cont2]);
		printf("]");
	}
	
	
	return 0;
}
