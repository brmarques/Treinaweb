package br.com.treinaweb.zoologico.classes;

import java.util.ArrayList;
import java.util.List;

public class Veterinario {

//Agregação - ocorre quando dois ou mais objetos se relacionam na intenção de um objeto “complementar” informações no outro objeto. Os dois objetos não necessariamente dependem um do outro para existir; mas, quando unidos, apresentam um sentido mais completo e descritivo sobre uma determinada situação.

	private String nome;
	private List<Animal> animais;

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public Veterinario() {
		animais = new ArrayList<Animal>();
	}

	public void atenderAnimal(Animal animalASerAtendido) {
		animais.add(animalASerAtendido);
	}

	public void deixarDeAtenderAnimal(int indiceAnimal) {
		animais.remove(indiceAnimal);
	}

	public void listarAnimaisAtendidos() {
		System.out.println("Animais atendidos");
		for (int i = 0; i < animais.size(); i++) {
			System.out.println("    - " + animais.get(i).getNome());
		}
	}

}
