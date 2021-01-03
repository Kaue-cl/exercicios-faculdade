programa
{
	
	funcao inicio()
	{
		//Faça um programa que pergunte o preço de três produtos 
		//e informe qual produto você deve comprar,
		//sabendo que a decisão é sempre pelo mais barato. 
 
		real n1, n2, n3
		escreva("O primeiro produto custa R$")
		leia(n1)
		escreva("O seguno produto custa R$")
		leia(n2)
		escreva("O terceiro produto custa R$")
		leia(n3)

		se (n1 < n2 e n1 < n3) {
			escreva("O menor valor foi o do primero produto")
		}
		senao se (n2 < n1 e n2 < n3) {
			escreva("O menor valor foi o do segundo produto")
		}
		senao se ( n1 == n2 e n1 == n3) {
			escreva("Todos possuem o mesmo valor")
		}
		senao {
			escreva("O menor valor foi o do terceiro produto")
			
		}
		escreva("\nEntão é melhor comprá-lo")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 143; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */