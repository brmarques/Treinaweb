package br.com.casadocodigo.classes;

public class Autor {
	public String nome;
	public String email;
	public String cpf;
	
	public void mostrarDetalhes() {
		System.out.println("Mostrando detalhes do autor: ");
		System.out.println("Nome: " + nome);
		System.out.println("E-mail: " + email);
		System.out.println("CPF: " + cpf);
	}
}
