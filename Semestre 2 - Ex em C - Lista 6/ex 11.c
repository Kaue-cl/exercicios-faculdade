#include <stdio.h>
#include <locale.h>

//entrando o valor em string
char EntradaValor(char cpf[15])
{
	printf("Digite o número do seu CPF no modelo 000.000.000-00: ");
	gets(cpf);
}
//convertendo a string para uma matriz int
int ColocandoEmMatriz (char cpg[15], int matriz[11])
{
	int i, j = 0;
	
	for(i = 0; i < 14; i++)
		if(cpg[i] != '.' && cpg[i] != '-')
		{
			matriz[j] = cpg[i] - 48;
			j ++;
		}
		
	return matriz;
}
//verificando se o valor é válido
int CodigoValidar(int valor[11], int num_valid[2])
{
	int i,j, cont_igual = 0;
	//zerando os digitos finais
	for(i = 0; i < 2; i++)
		num_valid[i] = 0;
	//verificando o penutimo digito correto
	for(i = 0, j = 10; i < 9; i++, j --)
		num_valid[0] += valor[i]*j;
	num_valid[0] = 11 - (num_valid[0] % 11);
	if(num_valid[0] >= 10)
		num_valid[0] = 0;
	//verificando o ultimo digito correto
	for(i = 0, j = 11; i < 10; i++, j --)
		num_valid[1] += valor[i]*j;
	num_valid[1] = 11 - (num_valid[1] % 11);
	if(num_valid[1] >= 10)
		num_valid[1] = 0;
	//verificando se é tudo apenas o mesmo número
	for(i = 0; i < 10; i++)
		for(j = 0; j < 10; j++)
			if((valor[i] == valor[j]) && (i != j))
				cont_igual ++;
	if(cont_igual >=11){
		num_valid[0] = -1;
	}	
		
	return num_valid;
}

int main()
{
	setlocale (LC_ALL,"");
	int v1[11] = {0};
	int digi_fin[2];
	char m1[15] = {0};
	
	EntradaValor(m1);
	ColocandoEmMatriz(m1, v1);
	CodigoValidar(v1, digi_fin);
	
	if(digi_fin[0] == v1[9] && digi_fin[1] == v1[10])
		printf("Esse código de CPF é válido.");
	else
		printf("Esse código de CPF não é válido.");
	
	return 0;
}



