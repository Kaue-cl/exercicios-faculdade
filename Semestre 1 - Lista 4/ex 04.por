programa
{
	
	funcao inicio()
	{
		//Faça um Programa que pergunte em que turno você estuda.
		//Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.
		//Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" 
		//ou "Valor Inválido!", conforme o caso.

		cadeia periodo = "."
		escreva("Em qual período você estuda?")
		escreva("\nDigite:")
		escreva("\nM para Matutino")
		escreva("\nV para Vespertino")
		escreva("\nN para Noturno\n")
		
		leia(periodo)
		enquanto (periodo !="M" e periodo != "N" e periodo !="V") {
			escreva("Valor Inválido, tente novamente: ")
			leia (periodo)
		}

		se (periodo == "M") {
			escreva ("Bom Dia!")		
		}
		senao se (periodo == "V") {
			escreva ("Boa Tarde!")		
		}
		senao se (periodo == "N") {
			escreva ("Boa Noite!")		
		}
		senao {
			escreva ("Valor Inválido")		
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 527; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */