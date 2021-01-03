#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	float centimetros = 0, conversor = 2.54;
	
	for(centimetros=0; centimetros <= 100; centimetros++)
		printf("Centímetros = %.0f --- Polegadas = %.2f \n", centimetros, centimetros * conversor);
}
