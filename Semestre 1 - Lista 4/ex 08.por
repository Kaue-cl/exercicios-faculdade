programa
{
	
	funcao inicio()
	{
		//Faça um programa que peça uma nota, entre zero e dez. Mostre uma
		//mensagem caso o valor seja inválido e continue pedindo até que o
		//usuário informe um valor válido.
		real x
		
		escreva("Digite uma nota entre 0 e 10: ")

		leia(x)

		enquanto(0>x ou x>10){
			escreva("Comando inválido, essa nota não está dentro do limite estipulado.")
			escreva("\ntente novamente")	
			escreva("\nDigite uma nota entre 0 e 10: ")
			leia(x)
		}

		escreva ("A nota digitada foi ", x)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 300; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */