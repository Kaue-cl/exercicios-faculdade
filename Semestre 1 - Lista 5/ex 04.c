#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int n, tf=1, p=0, maior, menor, soma=0;
	
	printf("Digite um n�mero: ");
	scanf("%d",&n);
	maior = n;
	menor = n;
	soma = soma + n;
	
	do{
		printf("se desejar parar digite 0, Digite um n�mero: ");
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
	
	printf("O maior n�mero digitado � %d", maior);
	printf("\nO menor n�mero digitado � %d", menor);
	printf("\nA soma dos n�meros digitados � %d", soma);
}
