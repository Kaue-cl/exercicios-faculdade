#include <stdio.h>
#include <locale.h>

int Tempo (float temp[3], int n1)
{
	if(n1 < 60)
		temp [0] = n1;
	else if(n1 < 3600)
	{
		temp [0] = n1%60;
		temp [1] = n1/60;
	}
	else
	{
		temp [2] = n1/3600;
		temp [1] = (n1%3600)/60;
		temp [0] = (n1%3600)%60;
	}
}

int main()
{
	setlocale (LC_ALL,"");
	int num;
	float  t[3] = {0};
	
	printf("Digite o tempo em segundos: ");
	scanf("%d",&num);
	
	Tempo(t,num);
	
	printf("esse tempo corresponde a: ");
	if(t[2] != 0)
		printf("%.0fh ",t[2]);
	if(t[1] != 0)
		printf("%.0fmin ",t[1]);
	if(t[0] != 0)
		printf("%.0fseg",t[0]);
	
	return 0;
}
