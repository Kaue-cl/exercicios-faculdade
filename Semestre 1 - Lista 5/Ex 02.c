#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int n, tf=1;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&n);
	printf("%d!=", n);
	
	while(n > 0){
		tf = tf * n;
		printf(".%d", n);
		n--;
	}

	printf("=%d", tf);
}
