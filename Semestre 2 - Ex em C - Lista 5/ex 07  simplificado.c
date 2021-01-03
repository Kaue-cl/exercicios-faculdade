#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"");
	char matriz[3][3] = {{' ', 'O', 'X'}, {'O','X','O'}, {'X',' ',' '}};
	int cont1, cont2;
	
	//mostrando o jogo
	for(cont1 = 0; cont1 < 3; cont1 ++){
		for(cont2 = 0; cont2 < 2; cont2 ++)
			printf(" %c |",matriz[cont1][cont2]);
		printf(" %c ",matriz[cont1][cont2]);
		if(cont1 < 2)
			printf("\n---+---+---\n");
	}
	return 0;
}
