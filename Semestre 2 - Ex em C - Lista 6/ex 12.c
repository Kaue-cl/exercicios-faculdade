#include <stdio.h>
#include <locale.h>

int Verificador (int n1)
{
	int i, j = 0;
	int divisores [20] = {0}, soma = 0;
	
	for(i = 1; i <= (n1/2); i++)
		if(n1 % i == 0)
		{
			divisores[j] = i;
			j ++;
		}
	
	j = 0;
	
	do
	{
		soma += divisores[j];
		
		j++;
	}while(divisores[j] != 0);
	
	return soma;
}

int EntradaValor()
{	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	
	return num;
}

int main()
{
	setlocale (LC_ALL,"");
	int v1;
	
	v1 = EntradaValor();
	
	if(Verificador(v1) == v1)
		printf("Esse valor � perfeito ");
	else
		printf("Esse valor n�o � perfeito ");
	
	return 0;
}
