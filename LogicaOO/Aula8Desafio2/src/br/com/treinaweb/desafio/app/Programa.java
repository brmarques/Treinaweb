package br.com.treinaweb.desafio.app;
import java.util.Scanner;
import br.com.treinaweb.desafio.classes.Calculadora;

public class Programa{
	
    public static void main(String []args){
    	Calculadora c = new Calculadora();  
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.printf("%d\n", c.fatorial(n));
      	sc.close();
    }
}
