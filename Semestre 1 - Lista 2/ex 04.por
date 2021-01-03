programa
{
	
	funcao inicio()
	{
		real dph, htm, sb, ir, inss, sind, sl
		//mostrar
		escreva("Digite quanto você ganha por hora\n")
		//entrada de dados
		leia(dph)
		//mostrar
		escreva ("Digite quantas horas você trabalha no mês\n")
		leia(htm)
		//processamento
		sb = dph * htm
		ir = sb * 11 / 100
		inss = sb * 8 / 100
		sind = sb * 5 / 100
		sl = (sb*100 - ir*100 - inss*100 - sind*100)/100
		//mostrar
		escreva("+Salário Bruto : R$", sb )
		escreva("\n-IR (11%) : R$", ir)
		escreva("\n-INSS (8%) : R$", inss)
		escreva("\n-Sindicato (5%) : R$", sind)
		escreva("\n=Saláro Líquido : R$", sl)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 399; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */