#include <stdio.h>
#include <locale.h>
#include <math.h>

int EntradaComodo()
{
	int lugar;
	
	printf("Em que tipo de c�modo ir� por a l�mpada? ");
	printf("\n0 - Quarto");
	printf("\n1 - Sala");
	printf("\n2 - Escrit�rio");
	printf("\n3 - Lugar aberto");
	printf("\nResposta: ");
	scanf("%d",&lugar);
	
	return lugar;	
}

float EntradaMedidas()
{
	float comprimento, lado, area;
	
	printf("\nDigite a medida, em metros, do lado desse c�modo: ");
	scanf("%f", & lado);
	printf("Digite a medida, em metros, do comprimento desse c�modo: ");
	scanf("%f", & comprimento);
	
	area = lado * comprimento;
	
	return area;
}

float EntradaHoras()
{	
	float horas;
	
	printf("Digite quantas horas a l�mpada ficar� acesa diariamente: ");
	scanf("%f",& horas);
	
	return horas;
}

int QuantidadeLampadas(float area, int lugar)
{
	int lumen_nesc[4] = {80, 100, 120, 150}, verificador;
	float iluminacao;
	int quantidade;
	
	iluminacao = area * lumen_nesc[lugar];
	
	quantidade = ceil(iluminacao / 810);
	
	printf("\nSer�o nescess�rias %d l�mpadas.", quantidade);
	
	return quantidade;
}

float CustoMensal(int quantidade, float horas)
{
	float custo_lampada, custo_energia, custo_total;
	
	custo_lampada = quantidade * 1.5;
	custo_energia = quantidade * horas * 0.513918; // 60 / 1000 * 30 * 0,28551 = 0,513918
	custo_total = custo_lampada + custo_energia;
	
	printf("\n\nO custo mensal, caso escolha comprar l�mpadas incandescentes, ser� de:");
	printf("\nCusto das l�mpadas(apenas no m�s da compra) = +%.2f", custo_lampada);
	printf("\nCusto da energia el�trica(mensal) = +%.2f",custo_energia);
	printf("\nCusto total R$%.2f", custo_total);
	
	return custo_total;
}

float CustoMensalLED(int quantidade, float horas)
{
	float custo_lampada, custo_energia, custo_total;
	
	custo_lampada = quantidade * 15;
	custo_energia = quantidade * horas * 0.085653; // 10 / 1000 * 30 * 0,28551 = 0,085653
	custo_total = custo_lampada + custo_energia;
	
	printf("\n\nO custo mensal, caso escolha comprar l�mpadas LED, ser� de:");
	printf("\nCusto das l�mpadas(apenas no m�s da compra) = +%.2f", custo_lampada);
	printf("\nCusto da energia el�trica(mensal) = +%.2f",custo_energia);
	printf("\nCusto total R$%.2f", custo_total);
	
	return custo_total;
}

int Meses(float custo_I, float custo_L, int quantidade, float horas)
{
	int meses = 1;
	
	custo_I = quantidade * 1.5 + quantidade * horas * 0.513918;
	custo_L = quantidade * 15 + quantidade * horas * 0.085653;
	
	for(meses = 1; custo_I < custo_L; meses ++)
	{
		custo_I += quantidade * horas * 0.513918;
		custo_L += quantidade * horas * 0.085653;
	}
	
	return meses;
}

int main ()
{
	setlocale(LC_ALL,"");
	int lugar, quantidade, meses;
	float horas, area;
	float custo_I, custo_L, diferenca;
	
	lugar = EntradaComodo();
	area = EntradaMedidas();
	horas = EntradaHoras();
	quantidade = QuantidadeLampadas(area, lugar);
	custo_I = CustoMensal(quantidade, horas);
	custo_L = CustoMensalLED(quantidade, horas);
	diferenca = custo_L - custo_I;
	meses = Meses(custo_I, custo_I, quantidade, horas);
	
	printf("\n\nSe escolher usar da nova tecnologia LED, pagar� R$%.2f a mais,", diferenca);
	printf("\nmas a partir de %d meses passar� a gastar menos em compara��o a uma l�mpada incandescente", meses);
	
	return 0;
}
