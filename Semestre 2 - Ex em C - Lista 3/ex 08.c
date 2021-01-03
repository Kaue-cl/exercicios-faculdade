#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int cont1, cont2, controlador;//contadores
	int num1[5], num2[5], n1un2[10];//vetores
	int num_aux = 0, cont_aux;//auxiliares
	
	//entrada do vetor 1
	for(cont1 = 0; cont1 < 5; cont1++){
		printf("Digite o %dº número: ", cont1+1);
		scanf("%d", & num1[cont1]);
	}
	
	//entrada do vetor 2
	printf("\n");
	for(cont2 = 0; cont2 < 5; cont2++){
		printf("Digite o %dº número: ", cont2+1);
		scanf("%d", & num2[cont2]);
	}
	
	//unindo os conjuntos
		for(controlador = 0, cont1 = 0, cont2 = 0; controlador < 10; controlador++){
		if(cont1 < 5){
			n1un2[controlador] = num1[cont1];
			cont1++;
		} else {
			n1un2[controlador] = num2[cont2];
			cont2++;
		}
	}
	
	//colocando o vetor 1U2 em ordem crscente
	for(controlador = 0; controlador < 10; controlador++){
		for(cont_aux = 0; cont_aux < 10; cont_aux ++){
			if(n1un2[controlador] < n1un2[cont_aux]){
				num_aux = n1un2[cont_aux];
				n1un2[cont_aux] = n1un2[controlador];
				n1un2[controlador] = num_aux;
			}
		}
	}
	
	//saída dos dados finais
	printf("A união do conjunto 1 com o conjunto 2 = { %d", n1un2[0]);
	for(controlador = 1; controlador < 10; controlador++)
		if(n1un2[controlador] != n1un2[controlador-1])
			printf(", %d", n1un2[controlador]);
	printf(" }");
}
