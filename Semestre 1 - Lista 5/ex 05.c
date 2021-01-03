#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int n, tf=1, p=0, maior, menor, soma=0;
	
	do{
		printf("Digite um número: ");
		scanf("%d",&n);	
	}while(n < 1000 || n > 0);
	
	menor = n;
	maior = n;
	soma = soma + n;
	
	do{
		do{
			printf("se desejar parar digite 0,");
			printf("\nDigite um número entre 0 e 1000: ");
			scanf("%d",&n);
		}while(n<0 || n>1000);
			if(n > maior){
				maior = n;
			}
			if(n < menor){
				menor = n;
			}
			soma = soma + n;
		
	}while(n != 0);
	
	printf("O maior número digitado é %d", maior);
	printf("\nO menor número digitado é %d", menor);
	printf("\nA soma dos números digitados é %d", soma);
}
