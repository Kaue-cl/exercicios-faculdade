#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale (LC_ALL,"");
	int ne, n1=0, n2=0, n3=0, nu=0, candidato, cont=1;
	
	printf("Digite o número de eleitores: ");
	scanf("%d",&ne);
	
	printf("\n1 - para o primeiro candidato");
	printf("\n2 - para o segundo candidato");
	printf("\n3 - para o terceiro candidato");
	printf("\nqualquer outro número - nulo\n");
	
	for(ne; ne > 0; ne--){
		printf("%dº eleitor - escolha: ", cont);
		scanf("%d",&candidato);
		
		switch (candidato){
			case 1 :
				n1 = n1 + 1;
				break;
			case 2 :
				n2 = n2 + 1;
				break;
			case 3 :
				n3 = n3 +1;
				break;
			default :
				nu = nu + 1;
		}
		cont++;
	}
	
	printf("O candidato 1 recebeu %d votos", n1);
	printf("\nO candidato 2 recebeu %d votos", n2);
	printf("\nO candidato 3 recebeu %d votos", n3);
	printf("\nnúmeros de votos nulos - %d", nu);
}
