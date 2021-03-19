package br.com.casadocodigo.app;
import br.com.casadocodigo.classes.*;

public class CadastroDeLivros {

	public static void main(String[] args) {
		Autor autor = new Autor();
		autor.nome = "Rodrigo Turini";
		autor.email = "rodrigo.turini@caelum.com.br";
		autor.cpf = "123.466.789.10";
		
		Livro livro = new Livro();
		livro.nome = "Java 8 Prático";
		livro.descricao = "Novos recursos da linguagem";
		livro.valor = 59.90;
		livro.isbn = "978-85-66250-46-6";
		
		livro.autor = autor; //associa o objeto autor ao objeto livro
		livro.mostrarDetalhes();
	}

}
