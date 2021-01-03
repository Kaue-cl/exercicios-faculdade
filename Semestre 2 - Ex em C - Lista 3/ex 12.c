#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int pascal[34] = {0};//vetor de pascal
	int  cont_linha, cont_coluna, cont_vetor, num_digitado;//contadores
	
	//entrada da qtd de linhas
	do{
		printf("Digite um número de 1 á 34: ");// 34 pq depois dele aparecem números além da capacidade do programa
		scanf("%d",&num_digitado);
		if(num_digitado < 1 || num_digitado > 34)
			printf("Esse número n pertence ao intervalo estipulado.\n");
	}while(num_digitado < 1 || num_digitado > 34);
	
	cont_coluna = num_digitado;
	
	//processo de dar valor e mostrar
	for(cont_linha = 1; cont_linha <= num_digitado; cont_linha++, cont_coluna --){
		//dando valores para o vetor		
		for(cont_vetor = cont_coluna; cont_vetor <= num_digitado; cont_vetor++){
			if(cont_vetor == num_digitado)
				pascal[cont_vetor]=1;
			
			else
				pascal[cont_vetor]=pascal[cont_vetor]+pascal[cont_vetor+1];
		}
		
		//mostrando a linha
		if(cont_linha < 10)
			printf("Linha %d ---", cont_linha);
		else
			printf("Linha %d --", cont_linha);
		//mostrando os números	
		for(cont_vetor = 0; cont_vetor <= num_digitado; cont_vetor++){
			if(pascal[cont_vetor] != 0)
				printf("  %d", pascal[cont_vetor]);
		}
		printf("\n");
	}
}
