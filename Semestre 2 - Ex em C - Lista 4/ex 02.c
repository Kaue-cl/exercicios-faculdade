#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	int vet[10], maior;
	float media_impar=0, media_par=0;
	int cont, cont_aux1, cont_aux2;
	
	//entrada e comparação 
	for(cont = 0, cont_aux1 = 0, cont_aux2 = 0; cont < 10; cont ++){
		printf("Digite o %dº número: ", cont + 1);
		scanf("%d", & vet[cont]);
		if(vet[cont] %2 == 0){
			media_par += vet[cont];
			cont_aux1 ++;
		}
		else{
			media_impar += vet[cont];
			cont_aux2 ++;
		}
	}
	
	// calculando a média e atribuindo um valor á 'maior'
	media_par = media_par / cont_aux1;
	media_impar = media_impar / cont_aux2;
	maior = vet[cont-1];
	
	//comparando maior
	for(cont = 0; cont < 10; cont ++)
		if(vet[cont] > maior)
			maior = vet[cont];
	
	//saída de dados
	printf("\nA média dos números ímpares é %.2f", media_impar);
	printf("\nA média dos números pares é %.2f", media_par);
	printf("\nO maior número encontrado é %d", maior);
	
	return 0;
}
