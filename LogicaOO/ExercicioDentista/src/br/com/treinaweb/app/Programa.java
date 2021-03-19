package br.com.treinaweb.app;

import br.com.treinaweb.classes.Dentista;
import br.com.treinaweb.classes.Paciente;

public class Programa {

	public static void main(String[] args) {
		
		Dentista dentista = new Dentista("Carlos", "Silva", "Cirurgião Dentista", "SP-CS-01", true);
		
		dentista.atenderPaciente();
		dentista.marcarConsulta();
		dentista.cancelarConsulta();
		dentista.remarcarConsulta();
		dentista.viajarCongresso();
	
	
		Paciente paciente = new Paciente(1, "Maria", "Sousa", 33, "Feminino", "11-91111-1111", "Rua Central, 100 - São Paulo - SP");
		
		paciente.marcarConsulta();
		paciente.cancelarConsulta();
		paciente.remarcarConsulta();
		paciente.consultarConsulta();
	}
}