package br.com.treinaweb.zoologico.classes;

import java.util.ArrayList;
import java.util.List;

//Relação de Agregação é um pouco diferente, ocorre quando dois ou mais objetos se relacionam na intenção de um objeto “complementar” informações no outro objeto. Os dois objetos não necessariamente dependem um do outro para existir; mas, quando unidos, apresentam um sentido mais completo e descritivo sobre uma determinada situação.
//Implementações parecidas em ambas, o que muda são os conceitos.

public class Veterinario {
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

	public Veterinario() {
		animais = new ArrayList<Animal>();
	}
	
	public void atenderAnimal(Animal animalASerAtendido) {
		animais.add(animalASerAtendido);
	}
	
	public void deixarDeAtenderAnimal (int indiceAnimal) {
		animais.remove(indiceAnimal);
	}
	
	public void listarAnimaisAtendidos() {
		System.out.println("Animais atendidos: ");
		for (int i = 0; i < animais.size(); i++) {
			System.out.println("    - " + animais.get(i).getNome() + " - " + animais.get(i).getEspecie());
		}
	}
}
