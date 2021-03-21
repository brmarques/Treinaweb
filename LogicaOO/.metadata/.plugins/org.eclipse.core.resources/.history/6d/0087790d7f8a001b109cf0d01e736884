package br.com.treinaweb.zoologico.classes;

public class Gato extends Animal {

	public Gato(String nome) {
		super(nome);
	}
	
	public Gato (String nome, int idade, String especie) {
		super(nome, idade, especie);
	}
	
	public Gato (String nome, int idade) {
		super(nome, idade, "Gato");
	}
	
	@Override
	public void emitirBarulho() {
		if (estaVivo) {
			System.out.println("MIIIIAAAUUU...");
		} else {
			System.out.println(getNome() + " is dead!"); //a recuperação do nome passa pelo método getNome(), para fazer o acesso direto pela classe extendida, seria necessário mudar o atributo para protected na superclasse
			//System.out.println ("O " + nome + " morreu!"); //caso o atributo fosse protected
		}
	}
}
