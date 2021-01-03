programa
{
	
	funcao inicio()
	{
		real peso, excesso, multa
		//mostrar
		escreva("Insira o peso do peixe pescado:\n")
		//entrada de dados
		leia (peso)
		//processamento
		excesso = peso - 50
		multa = excesso * 4
		//mostrar
		se (excesso > 0) {
			escreva ("Infelizmente você excedeu ", excesso," Kg do peso estabelecido pelo regulamento de pesca do estado de São Paulo")
			escreva ("\nSua multa pelo excesso será de R$", multa)
		}
		senao {
			escreva ("você está dentro do peso estabelecido pelo regulamento de pesca do estado de São Paulo")
			escreva ("\nEntão não precisará pagar nenhuma multa")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 426; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */