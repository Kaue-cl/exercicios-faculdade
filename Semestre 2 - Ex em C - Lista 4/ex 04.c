#include <stdio.h>
#include <locale.h>

void main () {
	setlocale (LC_ALL,"");
	char texto[50], alfabeto[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	int cont_vet1, cont_vet2, media = 0;
	float porcentagem[26] = {0};
	
	printf("Digite uma palavra de até 20 letras: ");
	gets(texto);
	
	for(cont_vet1 = 0; cont_vet1 < strlen(texto); cont_vet1 ++)
		for(cont_vet2 = 0; cont_vet2 < 26; cont_vet2 ++)
			if(toupper(texto[cont_vet1]) == alfabeto[cont_vet2]){
				media ++;
				porcentagem[cont_vet2] +=1;
			}
	
	for(cont_vet2 = 0; cont_vet2 < 26; cont_vet2 ++){
		printf("\n%c - %.2f%%", alfabeto[cont_vet2], porcentagem[cont_vet2]*100/media);
	}
	
}
