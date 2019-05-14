package br.com.uem.din.poo.detetive;

import java.util.Scanner;

import br.com.uem.din.poo.detetive.administrador.Administrador;
import br.com.uem.din.poo.detetive.preparacao.Objetos_Jogo;


public class Inicio {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		Administrador admin = new Administrador();
		Objetos_Jogo objetos = new Objetos_Jogo();

		System.out.println("Bem vindo ao jogo Detetive!!!!");
		System.out.print("Você é um Administrador ou um Jogador?\nResposta:");

		String pessoa = scan.nextLine();
		String aux = pessoa.toLowerCase();
		
		System.out.println("palavra: "+ pessoa.toLowerCase());

		if (aux.intern() == "administrador") {
			System.out.println("Digite a senha de acesso administrativo\nSenha: ");
			int senhaAdm = scan.nextInt();
			admin.administrador(senhaAdm);
		} 
		else if (aux.intern() == "jogador") {
			System.out.println("Digite seu apelido.\nResposta: ");
			String nomeJogador = scan.nextLine();
		
		}
		else {
			System.out.println("Você provavelmente digitou errado!\n"
						+ "Inicie o programa e tente novamente!!!!");
		}

	}

}
