#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int n, tf=1, p=0, maior, menor, soma=0;
	
	printf("Digite um número: ");
	scanf("%d",&n);
	maior = n;
	menor = n;
	soma = soma + n;
	
	do{
		printf("se desejar parar digite 0, Digite um número: ");
		scanf("%d",&n);
		
		if(n == 0){
			continue;
		}
		
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
