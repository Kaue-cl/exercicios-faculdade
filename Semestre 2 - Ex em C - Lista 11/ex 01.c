#include <stdio.h>
#include <locale.h>

int Potencia(int i)
{
	int res;
	
	if(i == 1)
		return 2;
	else
		res = 2 * Potencia(i - 1);
	
	return res;
}

void main () 
{
	int num_dig;
	
	setlocale(LC_ALL,"");
	
	printf("Digite o expoente desejado para elevar o número 2: ");
	scanf("%d", &num_dig);
	
	printf("2^%d = %d", num_dig, Potencia(num_dig));
}
