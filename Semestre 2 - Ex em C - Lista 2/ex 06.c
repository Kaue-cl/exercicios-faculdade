#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero_digitado, contador_linha, contador_coluna;	
	
	printf("Digite o tamanho do lado do tabuleiro de xadrez: ");
	scanf("%d",&numero_digitado);
	
	for(contador_linha = 0; contador_linha < numero_digitado; contador_linha++){
		for(contador_coluna = 0; contador_coluna < numero_digitado; contador_coluna++){
			if((contador_linha + contador_coluna) %2 ==0)
				printf("P ");
			else
				printf("B ");
		}
		printf("\n");
	}
}
