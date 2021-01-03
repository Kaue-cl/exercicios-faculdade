programa
{
	
	funcao inicio()
	{
		real qee,qmx,qmn,qmd
		cadeia np
		//mostrar
		escreva("Digite o nome do produto: ")
		//entrada de dados
		leia(np)
		//mostrar
		escreva("Digite a quantidade atual em estoque de ", np," : ")
		//entrada de dados
		leia(qee)
		//mostrar
		escreva("Digite a quantidade máxima em estoque: ")
		//entrada de dados
		leia(qmx)
		//mostrar
		escreva("Digite a quantidade mínima em estoque: ")
		//entrada de dados
		leia(qmn)
		//processamento
		qmd = (qmx + qmn) / 2
		//mostrar
		escreva("A quantidade média é de ", qmd, "\n")
		se (qee >= qmd) {
			escreva("Então tem ", np," suficiente, não precisa efetuar compra.")
		}
		senao {
			escreva("Então seu estoque de ", np," está baixo, efetue a compra.")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 540; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */