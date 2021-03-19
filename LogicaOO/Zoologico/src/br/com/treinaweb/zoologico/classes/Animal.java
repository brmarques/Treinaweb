package br.com.treinaweb.zoologico.classes;

public abstract class Animal implements Animavel{ //implements implementa a interface (ora, ora... quem diria!)
	
	private String nome;
	private String especie;
	private int idade;
	protected boolean estaVivo; //estado interno do objeto, não expôr externamente (método acessor set, no caso)
	
	
	//métodos acessores: get = retorna o valor da variável e set = insere ou altera o valor da variável
	//this: QUALIFICADOR, serve para apontar para a varável que sofrerá a ação
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
	
	public int getIdade() {
		return idade;
	}
	
	public void setIdade(int idade) {
		this.idade = idade;
	}
	
	public Boolean estaVivo() { //método acessor, somente leitura, não necessita do 'get' em atributos booleanos
		return estaVivo;
	}
	
	//construtor personalizado, leva o nome da classe, como boa prática
	public Animal (String nome, int idade, String especie) {
		this.nome = nome;
		this.idade = idade;
		this.especie = especie;
		this.estaVivo = true;
	}
	 
	public Animal(String nome) {
		this.nome = nome;
		this.estaVivo = true;
	}
	
	/*método abstrato - mantém a característica da classe, porém, é sobrescrito na classe específica onde será utilizado,
	 * podendo atender as especificidades da classe em questão, no caso, o barulho produzido pelos animais, que são diferentes
	só pode ser utilizado em classes abstratas, não possui corpo (implementação)*/
	
	public abstract void emitirBarulho();
	
	//no caso do método abaixo, o tipo do retorno faz parte da assinatura
	public Boolean ehAdulto() {
		if (estaVivo) {
			return idade >= 1;
		} else {
			return false;
		}
	}

	public final void morrer() {  //método acessor criado para setar false no método estaVivo que é somente leitura
		this.estaVivo = false;	  //final define que o método não pode ser sobrescrito (sofrer override)
	}
}
