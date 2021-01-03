#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int cont1;//contadores
	float num1[5];//vetores
	//auxiliares
	int cont_aux;
	float  num_aux = 0;
	
	//entrada do vetor 1
	for(cont1 = 0; cont1 < 5; cont1++){
			printf("Digite o %dº número: ", cont1+1);
			scanf("%f", & num1[cont1]);
	}

	//colocando o vetor em ordem crescente
	for(cont1 = 0; cont1 < 5; cont1++)
		for(cont_aux = 0; cont_aux < 5; cont_aux ++)
			if(num1[cont1] < num1[cont_aux]){
				num_aux = num1[cont_aux];
				num1[cont_aux] = num1[cont1];
				num1[cont1] = num_aux;
			}
	
	//saída dos dados finais
	printf("Os valores colocados em ordem cescente são = { %.2f", num1[0]);
	for(cont1 = 1; cont1 < 5; cont1++)
		if(num1[cont1] != num1[cont1-1])
			printf(" -- %.2f", num1[cont1]);
	printf(" }");
}
