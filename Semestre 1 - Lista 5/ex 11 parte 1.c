#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	char gab[10] = { 'A', 'B', 'C', 'D', 'E', 'E', 'D', 'C', 'B', 'A' };
	char resp[10];
	int qtdAlunos, nota, contQuestao, contAluno=0, continuar;
	int maior_nota=0, menor_nota=10, media=0;
	
	do{
		nota = 0;
		
		for(contQuestao=0; contQuestao<10; contQuestao++){
			printf("%d� Aluno - Digite a resposta da %d� quest�o: ", contAluno+1, contQuestao+1);
			scanf("%s",&resp[contQuestao]);
		}
		for(contQuestao=0; contQuestao<10; contQuestao++){
			if(toupper(resp[contQuestao])==gab[contQuestao]){
				nota = nota + 1;
			}
		}
		printf("A nota do %d� aluno �: %d \n\n", contAluno+1, nota);
		
		if(nota>maior_nota){
			maior_nota = nota;
		}
		if(nota<menor_nota){
			menor_nota = nota;
		}
		media = media + nota;
		
		printf("outro alugo gostaria de fazer a prova?");
		printf("\nsim:1       n�o:0          resposta: ");
		scanf("%d",&continuar);
		printf("\n");
		
		contAluno ++;
	} while (continuar == 1);
	
	media = media/contAluno;

	printf("\nA maior nota �: %d", maior_nota);
	printf("\nA menor nota �: %d", menor_nota);
	printf("\nA quantidade de alunos que fizeram a prova �: %d", contAluno);
	printf("\nA m�dia da turma �: %d", media);
}
