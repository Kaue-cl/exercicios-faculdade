programa
{
	inclua biblioteca Matematica
	
	funcao inicio()
	{
		real m, litro,lata, valor, virgula
		inteiro x
		//mostrar
		escreva("Digite a quantidade, em m², a ser pintada: ")
		//entrada de dados
		leia(m)
		//processamento
		litro = m / 3
		lata = litro / 18
		//equação criada para adicionar uma lata caso dê numeros quebrados
		x = lata
		virgula = lata - x
		se (virgula > 0) {
		 	x = x + 1
		 }
		//processamento
		valor = x * 80
		//mostrar 
		escreva("com ", m," m² a ser pintado,")
		se (x == 1) {
			escreva("\nserá necessário ", x, " lata")
			escreva("\nQue sairá no valor de R$",valor)
		}
		senao{
			escreva("\nserão necessárias ", x," latas.")
			escreva("\nQue sairão no valor de R$", valor)
		}

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 477; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */