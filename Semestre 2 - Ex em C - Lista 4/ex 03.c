#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	int vet[1000];
	int cont_vet, cont_num;
	
	//atribuição de valores
	for(cont_vet = 0, cont_num = 0; cont_vet < 1000; cont_vet ++, cont_num += 2)
		vet[cont_vet] = cont_num;
	
	//saída de valores
	printf("os números múltiplos de 3, dentre os 1000 primeiros númerros pares, são: [ ");
	for(cont_vet = 0, cont_num = 0; cont_vet < 1000; cont_vet ++, cont_num + 2)
		if(vet[cont_vet] %3 ==0)
			printf("%d ", vet[cont_vet]);
	printf("]");
	
	printf("\nos números múltiplos de 10, dentre os 1000 primeiros númerros pares, são: [ ");
	for(cont_vet = 0, cont_num = 0; cont_vet < 1000; cont_vet ++, cont_num + 2)
		if(vet[cont_vet] %10 ==0)
			printf("%d ", vet[cont_vet]);
	printf("]");	
	
	return 0;
}
