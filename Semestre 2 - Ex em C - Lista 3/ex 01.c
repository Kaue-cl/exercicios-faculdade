#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int num[10], cont;
	
	for(cont = 0; cont < 10; cont++){
		printf("Digite o %d� n�mero: ", cont+1);
		scanf("%d", & num[cont]);
	}
	
	printf("Os n�meros digitados, na ordem inversa s�o: ");
	
	for(cont = 9; cont >= 0; cont--)
		printf("\n%d� -- %d ", cont+1, num[cont]);
}
