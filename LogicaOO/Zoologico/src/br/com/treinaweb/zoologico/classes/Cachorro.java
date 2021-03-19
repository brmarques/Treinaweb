package br.com.treinaweb.zoologico.classes;

public class Cachorro extends Animal {

	//sobrecarga de métodos:
	
	public Cachorro(String nome, int idade, String especie) {
		super(nome, idade, especie);
		//chama o construtor personalizado da classe Animal (não padrão) que recebe os três atributos
	}
	
	public Cachorro (String nome) {
		super(nome);
		//chama o construtor personalizado da classe Animal (não padrão) que recebe só um atributo
	}
	
	public Cachorro (String nome, int idade) {
		super (nome, idade, "Cachorro");
		/*contrutor não contido na classe Animal, só aqui, mas que referencia o construtor com 3 atributos, 
		sendo que para o compilador entender, um deve ser repassado manualmente, no caso, espécie, que não 
		está contido neste */
	}

	@Override
	public void emitirBarulho() {
		if (estaVivo) {
			System.out.println("AU AU AAAUUUU...");
		} else {
			System.out.println(getNome() + " is dead!");
		}
	}
	
	@Override
	public Boolean ehAdulto() {
		if (estaVivo) {
			return getIdade() >= 2;
		} else {
			return false;
		}
	}

}
