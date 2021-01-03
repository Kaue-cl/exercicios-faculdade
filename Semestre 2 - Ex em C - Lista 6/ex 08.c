#include <stdio.h>
#include <locale.h>

int Triangulo (int n1, int n2, int n3)
{
	int modulo = n1-n2;
	if (modulo < 0)
		modulo = modulo*(-1);
	if ((n1+n2)<=n3 || modulo>=n3)
		return 0;
	
	return 1;
}
int EntradaValor()
{
	int num;
	printf("Digite o número referente ao lado do triângulo: ");
	scanf("%d",&num);
	
	return num;
}

int main()
{
	setlocale (LC_ALL,"");
	int l1 = 0, l2 = 0, l3 = 0;
	
	l1 = EntradaValor();
	l3 = EntradaValor();
	l2 = EntradaValor();
	
	if(Triangulo(l1,l2,l3) == 0)
		printf("Essas medidas não correspondem a um triângulo.");
	else
		printf("Essas medidas correspondem a um triângulo.");
	
	return 0;
}
