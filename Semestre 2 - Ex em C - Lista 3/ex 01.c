#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int num[10], cont;
	
	for(cont = 0; cont < 10; cont++){
		printf("Digite o %dº número: ", cont+1);
		scanf("%d", & num[cont]);
	}
	
	printf("Os números digitados, na ordem inversa são: ");
	
	for(cont = 9; cont >= 0; cont--)
		printf("\n%dº -- %d ", cont+1, num[cont]);
}
