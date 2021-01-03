#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int  cont1, cont2, num_digitado;//contadores
	
	//entrada da qtd de linhas
	printf("Digite o número da matriz: ");
	scanf("%d",&num_digitado);
	
	// entrada da matriz
	int matriz[num_digitado][num_digitado];
	
	for(cont1 = 0; cont1 < num_digitado; cont1++)
		for(cont2 = 0; cont2 < num_digitado; cont2++){
			matriz[cont1][cont2] = 0;
		}
	
	//colocando valores pra matriz
	for(cont1 = 0; cont1 < num_digitado; cont1++)
		for(cont2 = 0; cont2 < num_digitado; cont2++){
			printf("Digite o valor da posição(%d,%d): ", cont1, cont2);
			scanf("%d",& matriz[cont1][cont2]);
		}
	
	//saída de valores
	printf("Os valores da diagonal principal são: ");
	for(cont1 = 0; cont1 < num_digitado; cont1++){
		printf("\n[");
		for(cont2 = 0; cont2 < num_digitado; cont2++){
			if(cont1 == cont2)
				printf("%d", matriz[cont1][cont2]);
			else
				printf(" ");
		}
		printf("]");
	}
	
	return 0;
}
