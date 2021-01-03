#include <stdio.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int matriz[5][5] = {0};
	int cont1, cont2;
	
	for(cont1 = 0; cont1 < 5; cont1 ++)
		for(cont2 = 0; cont2 < 5; cont2 ++)
			if(cont1 == cont2)
				matriz[cont1][cont2] = 1;
	
	printf("MAtriz: ");
	for(cont1 = 0; cont1 < 5; cont1 ++){
		printf("\n[");
		for(cont2 = 0; cont2 < 5; cont2 ++){
			printf("%d ",matriz[cont1][cont2]);
		}
		printf("]");
	}
	
	return 0;
}
