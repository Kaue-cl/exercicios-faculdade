#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	int numero;
	
	for(numero = 1000; numero <=1999; numero ++){
		if(numero %11 == 5)
			printf("%d \n", numero);
	}
}
