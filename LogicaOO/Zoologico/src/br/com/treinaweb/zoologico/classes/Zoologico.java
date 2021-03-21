package br.com.treinaweb.zoologico.classes;

import java.util.ArrayList;
import java.util.List;

public class Zoologico {

//Composi��o - ocorre quando uma classe � composta por objetos de outra classe. Isso quer dizer que uma das classes envolvidas depende de maneira direta da exist�ncia da outra classe para que ela tamb�m possa existir.

	private String nome;
	private List<Animal> animais;

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public Zoologico() {
		animais = new ArrayList<Animal>();
	}

	public void adicionarAnimal(Animal animalASerAdicionado) {
		animais.add(animalASerAdicionado);
	}

	public void removerAnimal(int indiceDoAnimal) {
		animais.remove(indiceDoAnimal);
	}

	public void listarAnimais() {
		System.out.println("Animais do zool�gico: ");
		for (int i = 0; i < animais.size(); i++) {
			System.out.println("    - " + animais.get(i).getNome());
		}
	}
}
