package br.com.casadocodigo.classes;

public class Livro {
	public String nome;
	public String descricao;
	public double valor;
	public String isbn;
	public Autor autor; //passando objeto como atributo, processo conhecido como COMPOSIÇÃO
	
	public void mostrarDetalhes() {
		System.out.println("Mostrando detalhes do livro: ");
		System.out.println("Nome: " + nome);
		System.out.println("Descrição: " + descricao);
		System.out.println("Valor: " + valor);
		System.out.println("ISBN: " + isbn);
		System.out.println(" ");
		autor.mostrarDetalhes(); //chama o método que mostra em tela os atributos do objeto autor
		System.out.println("--");		
	}
}
