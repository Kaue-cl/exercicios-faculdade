#include <stdio.h>
#include <math.h>
#include <locale.h>


int EntradaValor (int valor[2])
{
	int i;
	char xy[2] = {"XY"};
	
	for(i = 0; i < 2; i++)
	{
		printf("Digite a posição %c do ponto: ", xy[i]);
		scanf("%d",& valor[i]);
	}
}

float Distancia (int pA[2], int pB[2])
{
	float distancia;
	
	distancia = sqrt((pA[0]-pB[0])*(pA[0]-pB[0]) + (pA[1]-pB[1])*(pA[1]-pB[1]));
	
	return distancia;
}

int main()
{
	setlocale (LC_ALL,"");
	int A[2], B[2];
	
	EntradaValor(A);
	EntradaValor(B);
	
	printf("A distância do ponto A para o ponto B é de %.2f.", Distancia(A,B));
	
	return 0;
}
