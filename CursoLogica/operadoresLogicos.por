programa
{
	
	funcao inicio()
	{
		inteiro numero1
		inteiro numero2
		escreva ("Digite o primeiro número: ")
		leia(numero1)
		escreva ("Digite o segundo número: ")
		leia(numero2)
		//logico resultado = numero1>10 e numero2>10
		//logico resultado = numero1>10 ou numero2>10
		logico resultado = nao(numero1>10 e numero2>10) //operador nao inverte a logica da expressão
		escreva(resultado)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 281; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */