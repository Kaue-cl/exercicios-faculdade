#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	int n, n25=0, n50=0, n75=0, n100=0, nsi=0;
	
	do{
		printf("Se quiser parar, digite um número negativo.Digite um número: ");
		scanf("%d",&n);
		
		if (n >= 0 && n <= 25){
			n25 = n25 + 1;
		} else if (n >= 26 && n <= 50){
			n50 = n50 + 1;
		} else if (n >= 51 && n <= 75){
			n75 = n75 + 1;
		} else if (n >= 76 && n <= 100){
			n100 = n100 + 1;
		} else if (n > 100){
			nsi = nsi + 1;
		}
		
	}while(n > 0);
	
	printf("Dos números digitados:");
	printf("\n%d - pertencem ao intervalo [0,25]", n25);
	printf("\n%d - pertencem ao intervalo [26,50]", n50);
	printf("\n%d - pertencem ao intervalo [51,75]", n75);
	printf("\n%d - pertencem ao intervalo [76,100]", n100);
	printf("\n%d - não pertencem a um intervalo", nsi);
}
