#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int cont1, cont2, controlador = 0;//contadores
	int num1[5], num2[5], n1in2[5] = {0};//vetores
	int cont_aux, num_aux;//auxiliares
	
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

	//intersecção
	for(cont1 = 0; cont1 < 5; cont1++)
		for(cont2 = 0; cont2 < 5; cont2 ++)
			if(num1[cont1] == num2[cont2]){
				n1in2 [controlador] = num1[cont1];
				controlador ++;
			}

	//colocando a intersecção em ordem crescente
	for(controlador = 0; controlador < 5; controlador++)
		for(cont_aux = 0; cont_aux < 5; cont_aux ++)
			if(n1in2[controlador] < n1in2[cont_aux] && n1in2[controlador] != 0){
				num_aux = n1in2[cont_aux];
				n1in2[cont_aux] = n1in2[controlador];
				n1in2[controlador] = num_aux;
			}
	
	//saída dos dados finais
	if(n1in2[0] != 0)
		printf("A intersecção do conjunto 1 com o conjunto 2 = { %d", n1in2[0]);
	else
		printf("A intersecção do conjunto 1 com o conjunto 2 = { ");
	for(controlador = 1; controlador < 5; controlador++)
		if(n1in2[controlador] != 0)
			printf(", %d", n1in2[controlador]);
	printf(" }");
}
