#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int num[10], cont;
	
	for(cont = 0; cont < 10; cont++){
		printf("Digite o %d� n�mero: ", cont+1);
		scanf("%d", & num[cont]);
	}
	
	printf("Os n�meros digitados, na ordem de posi��o par depois impar, s�o: ");
	
	for(cont = 0; cont < 10; cont++){
		if((cont+1) %2 ==0)
			printf("\n%d -- %d", cont+1, num[cont]);
	}
	for(cont = 0; cont < 10; cont++){
		if((cont+1) %2 !=0)
			printf("\n%d -- %d", cont+1, num[cont]);
	}
}


