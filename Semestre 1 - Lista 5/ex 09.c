#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	int n, n1=0, n5=0, n10=0, n50=0, n100=0;
	
	do{
		printf("Digite o valor do saque");
		printf("\nMínimo 10 reais e máximo 600 reais: ");
		scanf("%d",&n);
	} while(n < 10 || n > 600);
	
	while(n%5!=0 && n%10!=0){
		n1 = n1+1;
		n--;
	}
	while(n%5==0 && n%10!=0){
		n5 = n5+1;
		n = n-5;
	}
	while(n%10==0 && n%50!=0){
		n10 = n10+1;
		n = n-10;
	}
	while(n%50==0 && n%100!=0){
		n50 = n50+1;
		n = n-50;
	}
	while(n%100==0 && n>0){
		n100 = n100+1;
		n = n-100;
	}
	
	printf("Você receberá");
	if (n100>0){
		printf("\n%d - notas de 100,", n100);
	}
	if (n50>0){
		printf("\n%d - notas de 50,", n50);
	}
	if (n10>0){
		printf("\n%d - notas de 10,", n10);
	}
	if (n5>0){
		printf("\n%d - notas de 5,", n5);
	}
	if (n1>0){
		printf("\n%d - notas de 1,", n1);
	}

}
