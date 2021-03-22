package br.com.treinaweb.zoologico.app;

import br.com.treinaweb.zoologico.classes.*; //referencia todas as classes contidas no pacote classe

public class Programa {

	public static void main(String[] args) {
		//após a criação do construtor personalizado, o método deve receber os parâmetros diretamente, elimina a necessidade dos métodos set nesse cenário
		//sobrecarga = mais de um método com o mesmo nome, com assinaturas diferentes, não podem ter a mesma assinatura, pois dá erro
											//assinatura = nome do método e tipos de parâmetros==>>independe do conteúdo do parâmetro, ex em Animal.java 
		 Animal animal = new Cachorro ("Pluto", 4); //LSP (Liskov substitution principle) - Polimorfismo
		 //Gato gato = new Gato ("Félix", 0, "Gato");
		
		//cachorro.setNome("Totó");		//cachorro.setIdade(2);		//cachorro.setEspecie("Cachorro");
		
		System.out.println("Olá, seu animal é " + animal.getEspecie() + ", o nome do animal é " + animal.getNome() + " e ele tem " + animal.getIdade() + " anos.");
		if (animal.ehAdulto()) {
			System.out.println(animal.getEspecie() + " " + animal.getNome() + " é adulto.");
		} else {
			System.out.println(animal.getEspecie() + " " + animal.getNome() + " não é adulto.");
		}
		
		System.out.println("Barulho do " + animal.getEspecie() + ":");
		animal.emitirBarulho();
		
		System.out.println("=====================================");	

		//		animal.morrer();
//		animal.emitirBarulho();
//		System.out.println("=====================================");
		
		Animal animal2 = new Gato("Garfield", 5, "Gato");
		Animal animal3 = new Gato("Stitch", 3, "Gato");
		Zoologico zoo = new Zoologico();
		zoo.setNome("Zoo Treinaweb");
		zoo.adicionarAnimal(animal);
		zoo.adicionarAnimal(animal2);
		zoo.adicionarAnimal(animal3);
		
		System.out.println("Animais do zoológico: " + zoo.getNome());
		zoo.listarAnimais();
		
		System.out.println("-------------------------------------");
		
		zoo.removerAnimal(2);
		System.out.println("Depois da remoção... ");
		zoo.listarAnimais();
		
		System.out.println("-------------------------------------");
		
		Veterinario vet = new Veterinario();
		vet.setNome("Treinaweb");
		vet.atenderAnimal(animal3);
		vet.listarAnimaisAtendidos();
	}
}
