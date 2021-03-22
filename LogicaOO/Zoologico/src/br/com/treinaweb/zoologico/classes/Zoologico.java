package br.com.treinaweb.zoologico.classes;

import java.util.ArrayList;
import java.util.Collection;
import java.util.List;

//Relação de Composição ocorre quando uma classe é composta por objetos de outra classe. Isso quer dizer que uma das classes envolvidas depende de maneira direta da existência da outra classe para que ela também possa existir.
//Implementações parecidas em ambas, o que muda são os conceitos.

public class Zoologico {
	private String nome;
	private String especie;
	private List<Animal> animais;

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getEspecie() {
		return especie;
	}

	public void setEspecie(String especie) {
		this.especie = especie;
	}
	
	public Zoologico() {
		animais = new ArrayList<Animal>(); //concretiza/instancia a lista como array, pq a lista é na verdade uma interface, ver documentação da linguagem ==>> public interface List<E> extends Collection<E>
	}

	public void adicionarAnimal(Animal animalASerAdicionado) {
		animais.add(animalASerAdicionado);
	}
	
	public void removerAnimal(int indiceDoAnimal) {
		animais.remove(indiceDoAnimal);
	}
	
	public void listarAnimais() {
		System.out.println("Animais do zoológico: ");
		for (int i = 0; i < animais.size(); i++) {
			System.out.println("    - " + animais.get(i).getNome() + " - " + animais.get(i).getEspecie());
		}
	}
	
}
