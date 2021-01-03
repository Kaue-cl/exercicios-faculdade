programa
{
	
	funcao inicio()
	{
		inteiro n1, n2, soma = 0
		escreva("digite o primeiro numero: ")
		leia(n1)
		
		escreva("digite o segundo numero: ")
		leia(n2)
		
		escreva("os números entre ", n1, " e ", n2, " são { ")
		
		se (n1 < n2){
			para(inteiro i = (n1+1); i < n2; i++){
				escreva(i + " ")
				soma = soma + i
			}
		}
		senao se (n1 > n2){
			para(inteiro i = (n1-1); i > n2; i--){
				escreva(i + " ")
				soma = soma + i
			}
		}

		escreva("}")
		}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 467; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */