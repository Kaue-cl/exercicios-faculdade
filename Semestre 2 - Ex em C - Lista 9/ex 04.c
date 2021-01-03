#include <stdio.h>
#include <locale.h>

typedef struct
{
	int dia, mes, ano;
} DATA;

DATA* Entrada_Data (DATA data[2])
{
	int i;

	for(i = 0; i < 2; i++)
	{
		printf("Digite a %dºª data (dd/mm/aaaa): ", i+1);
		scanf("%d/%d/%d",&data[i].dia, &data[i].mes, &data[i].ano);
	}
	
	return data;
}

int Soma_Dias (DATA data[2])
{
	int mes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int diferenca_dias = 0;
	int i = data[0].mes, j = data[0].ano;
	
	//dias
	if(data[0].dia > data[1].dia)
	{
		diferenca_dias += mes[i] - (data[0].dia - data[1].dia);
		
		if(i == 2 && ((j%100==0 && j%400==0) || (j%100!=0 && j%4==0)))
			diferenca_dias += 1;
		
		i ++;
	}
	else
		diferenca_dias += data[1].dia - data[0].dia;
	
	//meses
	for(i; i != data[1].mes; i++)
	{
		diferenca_dias += mes[i];
		if(i == 2 && ((j%100==0 && j%400==0) || (j%100!=0 && j%4==0)))
			diferenca_dias += 1;
		
		if(i == 12)
		{
			i = 1;
			i ++;
		}
	}
	
	//anos
	for(j; j != data[1].ano; j++)
	{
		diferenca_dias += 365;
		if((j%100==0 && j%400==0) || (j%100!=0 && j%4==0))
			diferenca_dias += 1;
	}
	if((data[0].mes > 2) && ((j%100==0 && j%400==0) || (j%100!=0 && j%4==0)))
		diferenca_dias += 1;
	
	return diferenca_dias;
}

int main ()
{
	setlocale(LC_ALL,"");
	
	DATA data[2];
		
	Entrada_Data(data);
	printf("A diferença de dias entre %d/%d/%d e %d/%d/%d é %d dias",
		data[0].dia, data[0].mes, data[0].ano, data[1].dia, data[1].mes, data[1].ano, Soma_Dias(data));
		
	return 0;
}
