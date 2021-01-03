#include <stdio.h>
#include <math.h>
#include <locale.h>

int Verificacao (int n1)
{
	int i, verifica = 0;
	
	for(i = 1; i <= (n1/2); i++)
		if((n1%i) == 0)
			verifica ++;
	
	if(verifica == 1)
		return 1;
	
	return 0;
}

int main()
{
	setlocale (LC_ALL,"");
	int num;
	
	printf("Digite um valor: ");
	scanf("%d",&num);
	
	if(Verificacao(num) == 1)
		printf("O valor %d é primo.", num);
	else
		printf("O valor %d não é primo.", num);
	
	return 0;
}
