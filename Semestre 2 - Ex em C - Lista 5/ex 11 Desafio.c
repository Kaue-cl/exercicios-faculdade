#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale (LC_ALL,"");
	int bingo[5][5] = {0};
	int i, j, k, l;
	int verificador, num_temporario;
	
	printf(" B  I  N  G  O\n");
	for(i = 0; i < 5; i ++)
	{
		for(j = 0; j < 5; j ++)
		{
			do{
            	verificador = 0;
                
                bingo[i][j] = rand() % 100;

                for(k = 0; k < 5; k ++)
                    for(l = 0; l < 5; l ++)
                    	if (bingo[i][j] == bingo[k][l] && (i != k || j != l))
                    		verificador++;
                    		
            } while(verificador != 0);
			
			if(bingo[i][j] < 10)
				printf(" %d ", bingo [i][j]);
			else
				printf("%d ", bingo [i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
