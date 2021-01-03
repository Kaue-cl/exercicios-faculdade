programa
{
	
	funcao inicio()
	{
		real tf, tc
		//mostrar
		escreva("acho que você tem uma temperatura em Farenheit, nem sei pra que existe Farenheit,\nMas eu posso converter pra você. Basta digitar a temperatura a seguir\n")
		//entrada de dados
		leia(tf)
		//processamento
		tc = ( 5 * ( tf - 32 ) / 9 )
		//mostrar
		escreva("Para simplificar sua vida, a temperatura em Celsius é ", tc)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 151; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */