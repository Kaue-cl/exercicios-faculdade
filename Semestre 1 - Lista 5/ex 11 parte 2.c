#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	char gab[10];
	char resp[10];
	int qtdAlunos, contQuestao, contAluno=0, continuar;
	float nota, maior_nota=0, menor_nota=10, media=0;
	
	for(contQuestao=0; contQuestao<10; contQuestao++){
		printf("Professor - Digite a resposta da %dª questão: ", contQuestao+1);
		scanf("%s",&gab[contQuestao]);
	}
		
	do{
		nota = 0;
		printf("\n================================================\n\n");
		
		for(contQuestao=0; contQuestao<10; contQuestao++){
			printf("%dº Aluno - Digite a resposta da %dª questão: ", contAluno+1, contQuestao+1);
			scanf("%s",&resp[contQuestao]);
		}
		for(contQuestao=0; contQuestao<10; contQuestao++){
			if(toupper(resp[contQuestao]) == toupper(gab[contQuestao])){
				nota = nota + 1;
			}
		}
		printf("A nota do %dº aluno é: %.2f \n\n", contAluno+1, nota);
		
		if(nota>maior_nota){
			maior_nota = nota;
		}
		if(nota<menor_nota){
			menor_nota = nota;
		}
		media = media + nota;
		
		printf("outro alugo gostaria de fazer a prova?");
		printf("\nsim:1       não:0          resposta: ");
		scanf("%d",&continuar);
		printf("\n");
		
		contAluno ++;
	} while (continuar == 1);
	
	media = media/contAluno;

	printf("\nA maior nota é: %.2f", maior_nota);
	printf("\nA menor nota é: %.2f", menor_nota);
	printf("\nA quantidade de alunos que fizeram a prova é: %d", contAluno);
	printf("\nA média da turma é: %.2f", media);
}
