#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	//vari�veis
	float salario;
	//entrada de dados
	printf("Digite seu sal�rio: ");
	scanf("%f",&salario);
	//processamento e sa�da de dados
	if (salario < 1903.99)
		printf("Ent�o voc� n�o possui al�quota.");
	else if (salario < 2826.66)
		printf("Ent�o sua al�quota � de 7,5%%");
	else if(salario <  3751.06)
		printf("Ent�o sua al�quota � de 15%%");
	else if(salario < 4664.68)
		printf("Ent�o sua al�quota � de 22,5%%");
	else 
		printf("Ent�o sua al�quota � de 27,5%%");
}
