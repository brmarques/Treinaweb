programa
{
	
	funcao inicio()
	{
		inteiro numero1
		inteiro numero2
		escreva("Digite o primeiro número: ")
		leia(numero1)
		escreva("Digite o segundo número: ")
		leia(numero2)
		logico primeiroNumeroMaiorSegundoNumero = numero1 > numero2
		logico primeiroNumeroIgualSegundoNumero = numero1 == numero2
		logico primeiroNumeroMenorSegundoNumero = numero1 < numero2
		logico primeiroNumeroMaiorIgualSegundoNumero = numero1 >= numero2
		logico primeiroNumeroMenorIgualSegundoNumero = numero1 <= numero2
		logico primeiroNumeroDiferenteSegundoNumero = numero1 != numero2
		escreva(primeiroNumeroMaiorSegundoNumero , "\n")
		escreva(primeiroNumeroIgualSegundoNumero , "\n")
		escreva(primeiroNumeroMenorSegundoNumero, "\n")
		escreva(primeiroNumeroMaiorIgualSegundoNumero, "\n")
		escreva(primeiroNumeroMenorIgualSegundoNumero, "\n")
		escreva(primeiroNumeroDiferenteSegundoNumero)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 884; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */