#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	//vari�veis
	int senha_fixa = 1234, senha_digitada;
	//entrada de dados
	printf("Por favor digite a senha: ");
	scanf("%d",&senha_digitada);
	//processamento e sa�da de dados
	if (senha_digitada == senha_fixa)
		printf("Pode acessar o programa.");
	else
		printf("Senha incorreta.");
}
