#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale (LC_ALL,"");
	int matriz1[3][3] = {0}, matriz2[3][3] = {0}, matriz_mult[3][3] = {0};
	int cont1, cont2, contaux1=0, contaux2=0, contaux3=0;
	
	//entrada das matrizes
	printf("Primeira matriz.\n");
	for(cont1 = 0; cont1 < 3; cont1 ++)
		for(cont2 = 0; cont2 < 3; cont2 ++){
			printf("Digite o elemento da posição(%d,%d):", cont1+1,cont2+1);
			scanf("%d",&matriz1[cont1][cont2]);
		}
	
	printf("\nSegunda matriz.\n");
	for(cont1 = 0; cont1 < 3; cont1 ++)
		for(cont2 = 0; cont2 < 3; cont2 ++){
			printf("Digite o elemento da posição(%d,%d):", cont1+1,cont2+1);
			scanf("%d",&matriz2[cont1][cont2]);
		}
	
	//mostrando a multiplicação passo a passo
	printf("\npasso 1:");
	for(cont1 = 0; cont1 < 3; cont1 ++){
		printf("\n");
		for(cont2 = 0; cont2 < 11; cont2 ++){
			if(cont2 == 0 || cont2 == 6)
				printf("[ ");
			else if(cont2 == 4 || cont2 == 10)
				printf("]");
			else if(cont2 == 5 && cont1 == 1)
				printf(" X ");
			else if(cont2 == 5 && cont1 != 1)
				printf("   ");
			else if(cont2 < 5)
				printf("%d ",matriz1[cont1][cont2-1]);
			else if(cont2 > 6)
				printf("%d ",matriz2[cont1][cont2-7]);
		}
	}
	
	printf("\n\npasso 2:");
	for(cont1 = 0; cont1 < 3; cont1 ++){
		printf("\n[(");
		for(cont2 = 0; cont2 < 35; cont2 ++){
			if(cont2 == 3 ||cont2 == 7 ||cont2 == 15 ||cont2 == 19 ||cont2 == 27 ||cont2 == 31)
				printf(")+(");
			else if(cont2 == 11 ||cont2 == 23)
				printf(")  (");
			else if(cont2 %4  == 1)
				printf("*");
			else{
				if(cont2 %4  == 0){
					printf("%d", matriz1[cont1][contaux1]);
					contaux1 ++;
					if(contaux1 == 3)
						contaux1 = 0;
				}		
				else{
					printf("%d", matriz2[contaux2][contaux3]);
					contaux2 ++;
					if(contaux2 == 3){
						contaux2 = 0;
						contaux3 ++;
						if(contaux3 == 3)
							contaux3 = 0;
					}
				}
			}
		}
		printf(")]");
	}
	
	printf("\n\npasso 3:");
	for(cont1 = 0; cont1 < 3; cont1 ++){
		printf("\n[");
		for(cont2 = 0; cont2 < 17; cont2 ++){
			if((cont2 %2 == 1) && (cont2 != 5 && cont2 != 11))
				printf("+");
			else if(cont2 == 5 ||cont2 == 11)
				printf("  ");
			else{
				if((matriz1[cont1][contaux1]*matriz2[contaux2][contaux3]) < 10)
					printf(" ");
				printf("%d",matriz1[cont1][contaux1]*matriz2[contaux2][contaux3]);
				contaux1 ++;
				contaux2 ++;
				if(contaux1 == 3)
					contaux1 = 0;
				if(contaux2 == 3){
					contaux2 = 0;
					contaux3 ++;
					if(contaux3 == 3)
						contaux3 = 0;
				}
			}
		}
		printf("]");
	}
	
	//somando e armazenando na matriz mult
	for(cont1 = 0; cont1 < 3; cont1 ++){
		for(cont2 = 0; cont2 < 3; cont2 ++){
			for(contaux1 = 0; contaux1 < 3; contaux1++){
				matriz_mult[cont1][cont2] += matriz1[cont1][contaux1]*matriz2[contaux1][cont2];
			}	
		}
	}
	
	printf("\n\nResultado: ");
	for(cont1 = 0; cont1 < 3; cont1 ++){
		printf("\n[");
		for(cont2 = 0; cont2 < 3; cont2 ++){
			if(matriz_mult[cont1][cont2] < 100)
				printf(" %d ", matriz_mult[cont1][cont2]);
			else
				printf("%d ", matriz_mult[cont1][cont2]);
		}
		printf("]");
	}
	
	return 0;
}
