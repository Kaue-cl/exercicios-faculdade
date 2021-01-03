#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int n, tf=1, p=0;
	
	do{
		do{
			printf("Digite um número inteiro menor que 16: ");
			scanf("%d",&n);
		} while(n < 0 || n >16);
		
		printf("%d!=", n);
		tf = 1;
		
		do{
			tf = tf * n;
			printf(".%d", n);
			n--;
		}while(n > 0);

		printf("=%d", tf);
		printf("\nDeseja parar? sim=0, não=1: ");
		scanf("%d",&p);
	}while(p != 0);
}
