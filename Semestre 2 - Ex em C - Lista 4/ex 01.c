#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	int fib[40], cont;
	
	for(cont = 0; cont < 40; cont ++){
		if(cont <=1)
			fib[cont] = 1;
		else
			fib[cont] = fib[cont - 1] + fib[cont - 2];
	}
	 printf("Os 40 primeiros valores da série Fibonacci são:  %d", fib[0]);
	for(cont = 1; cont < 40; cont ++){
		printf(", %d", fib[cont]);
	}
	
	return 0;
}
