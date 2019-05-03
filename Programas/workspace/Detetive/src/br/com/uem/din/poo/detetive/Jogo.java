package br.com.uem.din.poo.detetive;

import java.util.Scanner;

import br.com.uem.din.poo.detetive.administrador.Administrador;


public class Jogo {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		Administrador admin = new Administrador();

		System.out.println("Bem vindo ao jogo Detetive!!!!");
		System.out.print("Você é um Administrador ou um Jogador?\nResposta:");

		String pessoa = scan.nextLine();
		pessoa.toLowerCase();

		if (pessoa.intern() == "administrador") {
			System.out.println("Digite a senha de acesso administrativo\nSenha:");
			int senhaAdm = scan.nextInt();
			admin.administrador(senhaAdm);
		} 
		else if (pessoa.intern() == "jogador") {
			System.out.println("Digite o seu primeiro nome");
			String nomeJogador = scan.nextLine();
			
		}

	}

}
