#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int cont1;//contadores
	float num1[10];//vetores
	int cont_aux;//auxiliares
	float  num_aux = 0;
	//entrada do vetor 1
	for(cont1 = 0; cont1 < 10; cont1++){
			printf("Digite o %dº número: ", cont1+1);
			scanf("%f", & num1[cont1]);
	}
	
	//colocando o vetor em ordem positivo, depois negativo
	for(cont1 = 0; cont1 < 10; cont1++)
		for(cont_aux = 0; cont_aux < 10; cont_aux++)
			if(num1[cont_aux] <= 0 && cont_aux < 9){
				num_aux = num1[cont_aux+1];
				num1[cont_aux+1] = num1[cont_aux];
				num1[cont_aux] = num_aux;
			}
	
	//saída dos dados finais
	printf("Os valores, apenas positivos, na ordem que foram digitados, são = {");
	for(cont1 = 0; cont1 < 10; cont1++)
		if(num1[cont1] >= 0)
			printf("  %.2f", num1[cont1]);
	printf(" }");
	
}
