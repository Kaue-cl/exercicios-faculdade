programa
{
	
	funcao inicio()
	{
		//Faça um programa que leia 5 números e informe o maior número.
		real x, y = 0.0
		inteiro c = 1

		enquanto (c<=5){
			//mostrar
			escreva(c + " - Digite um número: ")
			//entrada de dados
			leia (x)

			se (x>y) {
				//processamento
				y = x
			}

			c++
		}
		//mostrar
		escreva("O maior número foi: " + y)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 98; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */