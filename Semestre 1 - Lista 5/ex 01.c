#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale (LC_ALL,"");
	int n=0, p=0, i=0, c=1;
	
	do{
		printf("%d - Digite um n�mero inteiro: ", c);
		scanf("%d",&n);
		
		if (n %2 == 0){
			p = p + 1;
		} else {
			i = i + 1;
		}
		
		c ++;
		
	} while(c <= 10);
	
	printf("Voc� digitou:");
	printf("\n%d N�meros pares", p);
	printf("\n%d N�meros �mpares", i);
}
