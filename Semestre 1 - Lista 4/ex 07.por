programa
{
	
	funcao inicio()
	{
		//Faça um programa que leia 5 números 
		//e informe a soma e a média dos números.

		real n, x = 0.0
		inteiro contador = 0
		enquanto (contador<5){
			contador ++
			//mostrar
			escreva(contador + " - Digite um número: ")
			//entrada de dados
			leia(n)
			//processamento
			x = x + n

			
		}
		//mostrar
		escreva("A soma dos números digitados é :" + x)
		//processamento
		x = x / contador
		//mostar
		escreva("\nA média dos números digitados é :" + x)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 203; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */