#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL,"");
	float n=0, vt=0, cod=0;
	
	printf("Especificação       Código    Preço");
	printf("\nCachorro quente     100       R$1,20");
	printf("\nBauru Simples       101       R$1,30");
	printf("\nBauru com ovo       102       R$1,50");
	printf("\nHambúrguer          103       R$1,20");
	printf("\nCheeseburguer       104       R$1,30");
	printf("\nRefrigersnte        105       R$1,00");
	printf("\nFinalizar pedido    000\n");
	
	do{
		do {
			printf("\nDigite o código do produto: ");
			scanf("%f",&cod);
		} while(cod!=0 && cod<100 || cod>106);
		
		if(cod!=0){
			printf("Digite a quantidade: ");
			scanf("%f",&n);
			
			if(cod==100){
				vt = vt+(n*1.2);
			} else if(cod==101){
				vt = vt+(n*1.3);
			} else if(cod==102){
				vt = vt+(n*1.5);
			} else if(cod==103){
				vt = vt+(n*1.2);
			} else if(cod==104){
				vt = vt+(n*1.3);
			} else if(cod==105){
				vt = vt+(n*1.0);
			}
		}
		
	} while(cod != 0);
	
	printf("\nO valor total do pedido é R$%.2f", vt);
}
