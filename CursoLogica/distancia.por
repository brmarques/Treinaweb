programa
{
	
	funcao inicio()
	{
		real distanciaTotal
		real distanciaPercorrida
		real velocidade
		escreva("Digite a distância total: ")
		leia(distanciaTotal)
		escreva("Digite a distância percorrida: ")
		leia(distanciaPercorrida)
		escreva("Digite a velocidade (km/h): ")
		leia(velocidade)
		real distanciaASerPercorrida = distanciaTotal - distanciaPercorrida
		real horasRestantes = distanciaASerPercorrida / velocidade
		escreva ("Faltam ", horasRestantes, "h para você terminar de percorrer sua distância.")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 523; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */