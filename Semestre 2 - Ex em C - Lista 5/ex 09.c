#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int matriz[4][4] = {0}, valor, achado = 0;
	int cont1, cont2;
	
	for(cont1 = 0; cont1 < 4; cont1 ++)
		for(cont2 = 0; cont2 < 4; cont2 ++){
			printf("Digite o n�mero da posi��o (%d,%d): ", cont1, cont2);
			scanf("%d",&matriz[cont1][cont2]);
		}
	
	printf("\nDigite um valor para encontrar na matriz: ");
	scanf("%d",& valor);
	
	for(cont1 = 0; cont1 < 4; cont1 ++)
		for(cont2 = 0; cont2 < 4; cont2 ++)
			if(valor == matriz[cont1][cont2]){
				achado ++;
				printf("\n%d� - valor encontrado na posi��o (%d,%d)", achado, cont1, cont2);
			}
	
	if(achado == 0)
		printf("\n\nValor n�o encontrado.");
	else
		printf("\n\nO valor %d foi encontrado %d vezes na matriz.", valor, achado);
	printf("\n\nA matriz era: ");
	for(cont1 = 0; cont1 < 4; cont1 ++){
		printf("\n[ ");
		for(cont2 = 0; cont2 < 4; cont2 ++)
			printf("%d ",matriz[cont1][cont2]);
		printf("]");
	}
	
	return 0;
}
