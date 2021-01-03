#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	float matriz[3][6] = {0}, somimp = 0, medsegqua = 0;
	int cont1, cont2, contaux = 0;
	
	for(cont1 = 0; cont1 < 3; cont1 ++)
		for(cont2 = 0; cont2 < 6; cont2 ++){
			printf("Digite o número da posição (%d,%d): ", cont1+1, cont2+1);// a matriz vai de (1,1)-(3,6)
			scanf("%f",&matriz[cont1][cont2]);
			
			if((cont2+1) %2 != 0)
				somimp += matriz[cont1][cont2];
			if((cont2+1) == 2 || (cont2+1) == 4){
				medsegqua += matriz[cont1][cont2];
				contaux ++;
			}
		}
	
	printf("\nMatriz original: ");
	for(cont1 = 0; cont1 < 3; cont1 ++){
		printf("\n[ ");
		for(cont2 = 0; cont2 < 6; cont2 ++){
			if(matriz[cont1][cont2] < 10)
				printf("%.2f  ", matriz[cont1][cont2]);
			else
				printf("%.2f ", matriz[cont1][cont2]);
		}
		printf("]");
	}
	
	for(cont1 = 0; cont1 < 3; cont1 ++)
		matriz[cont1][5] = matriz[cont1][0] + matriz[cont1][1];

	printf("\n\nA soma dos elementos das colunas ímpares é %.2f", somimp);
	printf("\nA média aritimética dos elementos da 2ª e 4ª colunas é %.2f", medsegqua/contaux);
	printf("\nA matriz após alterar a sexta coluna com a suma da primeira e segunda é: ");
	for(cont1 = 0; cont1 < 3; cont1 ++){
		printf("\n[ ");
		for(cont2 = 0; cont2 < 6; cont2 ++){
			if(matriz[cont1][cont2] < 10)
				printf("%.2f  ", matriz[cont1][cont2]);
			else
				printf("%.2f ", matriz[cont1][cont2]);
		}
		printf("]");
	}
	
	return 0;
}
