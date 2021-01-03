programa
{
	
	funcao inicio()
	{
		real n, h, pi1, pi2
		//mostrar
		escreva("Digite sua altura, exemplo 1.65, por favor para que eu lhe mostre seu peso ideal\n")
		//entrada de dados
		leia(h)
		//processamento
		pi1 = (722/10 * h) - 58
		pi2 = (621/10 * h) - 447/10
		//mostrar
		escreva("Para um melhor reusltado digite \n1 se você for homem \n2 se você for mulher\n")
		//entrada de dados
		leia(n)
		//mostrar
		se (n == 1) {
			escreva ("seu peso ideal é ", pi1)
		}
		se (n == 2) {
			escreva ("seu peso ideal é ", pi2)
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 110; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */