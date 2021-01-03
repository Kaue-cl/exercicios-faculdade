programa
{
	
	funcao inicio()
	{
		real sf, vv, st, com, x
		//mostrar
		escreva ("Digite seu salário fixo: ")
		//entrada de dados
		leia (sf)
		//mostrar
		escreva ("Digite o valor das vendas efetuadas: ")
		//entrada de dados
		leia (vv)
		//processamento
		st = 0.0
		se (vv <= 1500) {
			com = vv * 3 / 100
			st = com + sf
		}
		senao se (vv > 1500) {
			x = vv - 1500
			com = 45 + (x * 5 / 100)
			st = sf + com
		}
		//mostrar
		escreva ("Seu salário total, baseado nas vendas que vc efetuou é de R$", st)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 449; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */