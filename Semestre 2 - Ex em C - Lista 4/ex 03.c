#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	int vet[1000];
	int cont_vet, cont_num;
	
	//atribui��o de valores
	for(cont_vet = 0, cont_num = 0; cont_vet < 1000; cont_vet ++, cont_num += 2)
		vet[cont_vet] = cont_num;
	
	//sa�da de valores
	printf("os n�meros m�ltiplos de 3, dentre os 1000 primeiros n�merros pares, s�o: [ ");
	for(cont_vet = 0, cont_num = 0; cont_vet < 1000; cont_vet ++, cont_num + 2)
		if(vet[cont_vet] %3 ==0)
			printf("%d ", vet[cont_vet]);
	printf("]");
	
	printf("\nos n�meros m�ltiplos de 10, dentre os 1000 primeiros n�merros pares, s�o: [ ");
	for(cont_vet = 0, cont_num = 0; cont_vet < 1000; cont_vet ++, cont_num + 2)
		if(vet[cont_vet] %10 ==0)
			printf("%d ", vet[cont_vet]);
	printf("]");	
	
	return 0;
}
