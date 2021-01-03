#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int cont1, cont2, controlador;//contadores
	int num1[5], num2[5], n1dn2[5] = {0}, n2dn1[5] = {0};//vetores
	int cont_aux, num_aux = 0;//auxiliares
	
	//entrada do vetor 1
	for(cont1 = 0; cont1 < 5; cont1++)
		do{
			printf("Digite o %dº número(diferente de 0): ", cont1+1);
			scanf("%d", & num1[cont1]);
		}while(num1[cont1] == 0);
	
	//entrada do vetor 2
	printf("\n");
	for(cont2 = 0; cont2 < 5; cont2++)
		do{
			printf("Digite o %dº número(diferente de 0): ", cont2+1);
			scanf("%d", & num2[cont2]);
		}while(num2[cont2] == 0);

	//diferença do 1 com 2
	for(cont1 = 0, controlador = 0; cont1 < 5; cont1++){
		for(cont2 = 0, num_aux = 0; cont2 < 5; cont2 ++){
			if(num1[cont1] != num2[cont2]){
				num_aux ++;
			}
		}
		if(num_aux == 5){
			n1dn2 [controlador]= num1[cont1];
			controlador ++;
		}
	}
	
	//diferença co 2 com 1
	for(cont2 = 0, controlador = 0; cont2 < 5; cont2++){
		for(cont1 = 0, num_aux = 0; cont1 < 5; cont1 ++){
			if(num2[cont2] != num1[cont1]){
				num_aux ++;
			}
		}
		if(num_aux == 5){
			n2dn1 [controlador]= num2[cont2];
			controlador ++;
		}
	}

	//colocando a diferença num1-num2 em ordem crescente
	for(controlador = 0; controlador < 5; controlador++)
		for(cont_aux = 0; cont_aux < 5; cont_aux ++){
			if(n1dn2[controlador] < n1dn2[cont_aux] && n1dn2[controlador] != 0){
				num_aux = n1dn2[cont_aux];
				n1dn2[cont_aux] = n1dn2[controlador];
				n1dn2[controlador] = num_aux;
			}
		}
	
	//colocando a diferença num2-num1 em ordem crescente
	for(controlador = 0; controlador < 5; controlador++)
		for(cont_aux = 0; cont_aux < 5; cont_aux ++)
			if(n2dn1[controlador] < n2dn1[cont_aux] && n2dn1[controlador] != 0){
				num_aux = n2dn1[cont_aux];
				n2dn1[cont_aux] = n2dn1[controlador];
				n2dn1[controlador] = num_aux;
			}
			
	//saída diferença num1-num2
	printf("\nA diferença do conjunto 1 com o conjunto 2 = { %d", n1dn2[0]);
	for(controlador = 1; controlador < 5; controlador++)
		if(n1dn2[controlador] != 0)
			printf(", %d", n1dn2[controlador]);
	printf(" }");

	//saída diferença num2-num1
	printf("\nA diferença do conjunto 2 com o conjunto 1 = { %d", n2dn1[0]);
	for(controlador = 1; controlador < 5; controlador++)
		if(n2dn1[controlador] != 0)
			printf(", %d", n2dn1[controlador]);
	printf(" }");
}
