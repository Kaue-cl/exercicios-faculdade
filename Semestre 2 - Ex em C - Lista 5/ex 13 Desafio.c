#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale (LC_ALL,"");
	int matriz[9][9] = {0};
	int cont1, cont2, cont3;
	int valido = 1, ierro,jerro;
	
	//ler
	for(cont1 = 0; cont1 < 9; cont1 ++)
		for(cont2 = 0; cont2 < 9; cont2 ++){
			printf("Digite o valor da posi��o(%d,%d): ", cont1, cont1);
			scanf("%d",&matriz[cont1][cont2]);
		}
	//mostrar
	for(cont1 = 0; cont1 < 9; cont1 ++){
		printf("\n[ ");
		for(cont2 = 0; cont2 < 9; cont2 ++)
			printf("%d ", matriz[cont1][cont2]);
		printf("]");
	}
	//ver se � v�lida
	for(cont1 = 0; cont1 < 9; cont1 += 1)
		for(cont2 = 0; cont2 < 9; cont1 += 1)
			for(cont3 = 0; cont3 < 9; cont3 += 1)
				if((matriz[cont1][cont2] == matriz[cont1][cont3]) && (cont2!=cont3))
				{
					valido++;
					ierro = cont1;
					jerro = cont2;
				}
					


	//mostrar a resposta final
	if(valido == 1)
		printf("\nValores inseridos ok !");
	else
		printf("\nErro na posi��o %d,%d", ierro, jerro);
	
	return 0;
}
