#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	int vet[10], maior;
	float media_impar=0, media_par=0;
	int cont, cont_aux1, cont_aux2;
	
	//entrada e compara��o 
	for(cont = 0, cont_aux1 = 0, cont_aux2 = 0; cont < 10; cont ++){
		printf("Digite o %d� n�mero: ", cont + 1);
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
	
	// calculando a m�dia e atribuindo um valor � 'maior'
	media_par = media_par / cont_aux1;
	media_impar = media_impar / cont_aux2;
	maior = vet[cont-1];
	
	//comparando maior
	for(cont = 0; cont < 10; cont ++)
		if(vet[cont] > maior)
			maior = vet[cont];
	
	//sa�da de dados
	printf("\nA m�dia dos n�meros �mpares � %.2f", media_impar);
	printf("\nA m�dia dos n�meros pares � %.2f", media_par);
	printf("\nO maior n�mero encontrado � %d", maior);
	
	return 0;
}
