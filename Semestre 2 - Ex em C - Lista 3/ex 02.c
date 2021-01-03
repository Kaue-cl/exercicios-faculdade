#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int num[10], cont;
	
	for(cont = 0; cont < 10; cont++){
		printf("Digite o %dº número: ", cont+1);
		scanf("%d", & num[cont]);
	}
	
	printf("Os números digitados, na ordem de posição par depois impar, são: ");
	
	for(cont = 0; cont < 10; cont++){
		if((cont+1) %2 ==0)
			printf("\n%d -- %d", cont+1, num[cont]);
	}
	for(cont = 0; cont < 10; cont++){
		if((cont+1) %2 !=0)
			printf("\n%d -- %d", cont+1, num[cont]);
	}
}


