#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	int num, numMax, numMin, alt, altMax, altMin, cont=1;
	
	printf("Digite o número do aluno: ");
	scanf("%d",&num);
	printf("Digite a Altura do aluno, em centímetros: ");
	scanf("%d",&alt);
	numMax = num;
	numMin = num;
	altMax = alt;
	altMin = alt;
	
	for(cont; cont<=9; cont++){
		printf("\nDigite o número do aluno: ");
		scanf("%d",&num);
		printf("Digite a Altura do aluno, em centímetros: ");
		scanf("%d",&alt);
		if (alt > altMax){
			numMax = num;
			altMax = alt;
		}
		if (alt < altMin){
			numMin = num;
			altMin = alt;
		}
	}
	
	printf("O aluno %d foi o aluno com a maior altura %dcm", numMax, altMax);
	printf("\nO aluno %d foi o aluno com a menor altura %dcm", numMin, altMin);
}
