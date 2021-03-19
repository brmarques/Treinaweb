package br.com.treinaweb.desafio.classes;

public class Calculadora implements Aritmetica{
	public int n;
	@Override
	public int fatorial(int n) {
		for (int i = n; i > 1; i--) {
			n = n *(i - 1);
		}		
	return n;
	}
}
