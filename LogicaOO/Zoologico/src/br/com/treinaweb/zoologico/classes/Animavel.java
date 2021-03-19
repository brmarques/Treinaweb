package br.com.treinaweb.zoologico.classes;

public interface Animavel {
		//não são declarados os escopos de visibilidade, pois todos os métodos declarados na interface são públicos
		//não implementa os métodos, pois apenas define os métodos que as classes deverão implementar quando instanciadas
	
		Boolean ehAdulto();
		void emitirBarulho();
		void morrer();
}
