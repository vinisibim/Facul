package br.com.uem.din.poo.detetive.administrador;

import java.util.Scanner;

public class Administrador {
	public void administrador(int senha) {
		Scanner scan = new Scanner(System.in);
		if (senha != 0306) {
			System.out.println("ERRO!\nSenha incorreta.");
			System.exit(0);
		}
		
		System.out.println("Voc� logou como adminstrador.\n"
							+ "O que pode fazer como Adm?\n "
							+ "Voc� pode Criar, recuperar, alterar ou excluir algum objeto do jogo.\n"
							+ "O que deseja fazer\n?"
							+ "Digite a A��o + objeto\n");
		
		String opcao = scan.nextLine();
		switch (opcao.intern()) {
		case :
			
			break;

		default:
			break;
		}
		
		
		
	}
}
