programa
{
	
	funcao inicio()
	{
		real p1, p2, m
		//mostrar
		escreva ("Olá! Curioso para saber se foi aprovado ou não?")
		escreva ("\nDigite a nota da sua p1: ")
		//entrada de dados
		leia(p1)
		//mostrar
		escreva ("Digite a nota da sua p2: ")
		//entrada de dados
		leia(p2)
		//processamento
		m = (p1 + p2) / 2
		//mostrar
		se (m >= 7) {
			escreva ("APROVADO")
			escreva ("\nParabéns! Sua média é ", m, " e você foi aprovado")
			escreva ("\nVocê deu o seu melhor e alcançou essa nota por seus próprios méritos e deve ser reconhecido por isso.")
		} senao se (m < 7) {
			escreva ("REPROVADO")
			escreva ("\nSua média é ", m, " e infelismente você não foi aprovado")
			escreva ("\nTente novamente, mas se esforçe  mais e dê o seu melhor, você vai conseguir!")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 331; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */