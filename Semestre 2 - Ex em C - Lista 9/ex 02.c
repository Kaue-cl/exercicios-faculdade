#include <stdio.h>
#include <locale.h>

typedef struct
{
	char titulo[50];
	char autor[50];
	char editora[50];
	int ano;
} BIBLIOGRAFIA;

void main()
{
	setlocale(LC_ALL,"");
	
	BIBLIOGRAFIA livro = {"Livro Teste", "Kaue", "Minha Edição", 2020};
	printf("O livro %s, escrito pelo(a) autor(a) %s, foi publicado pela editora %s no ano de %i",
		livro.titulo, livro.autor, livro.editora, livro.ano);
}
