package br.com.uem.din.poo.detetive.administrador;

import java.util.Scanner;

public class Administrador {
	public void administrador(int senha) {
		Scanner scan = new Scanner(System.in);
		if (senha != 0306) {
			System.out.println("ERRO!\nSenha incorreta.");
			System.exit(0);
		}

		System.out.println("Você logou como adminstrador.\n" + "O que pode fazer como Adm?\n "
				+ "Você pode Criar, recuperar, alterar ou excluir algum objeto do jogo.\n" 
				+ "O que deseja fazer\n?"
				+ "Digite a Ação + objeto\n");

		String opcao = scan.nextLine();
		String[] separa = opcao.split(" ");

		if (separa[1].intern() == "criar" && separa[2].intern() == "suspeito") {
			System.out.println("Deu certo");

		} else if (separa[1].intern() == "criar" && separa[2].intern() == "arma") {
			System.out.println("Deu certo");

		} else if (separa[1].intern() == "criar" && separa[2].intern() == "local") {
			System.out.println("Deu certo");
		}

		else if (separa[1].intern() == "recuperar" && separa[2].intern() == "suspeito") {
			System.out.println("Deu certo");

		} else if (separa[1].intern() == "recuperar" && separa[2].intern() == "arma") {
			System.out.println("Deu certo");

		} else if (separa[1].intern() == "recuperar" && separa[2].intern() == "local") {
			System.out.println("Deu certo");
		}

		else if (separa[1].intern() == "alterar" && separa[2].intern() == "suspeito") {
			System.out.println("Deu certo");

		} else if (separa[1].intern() == "alterar" && separa[2].intern() == "arma") {
			System.out.println("Deu certo");

		} else if (separa[1].intern() == "alterar" && separa[2].intern() == "local") {
			System.out.println("Deu certo");
		}

		else if (separa[1].intern() == "excluir" && separa[2].intern() == "suspeito") {
			System.out.println("Deu certo");

		} else if (separa[1].intern() == "excluir" && separa[2].intern() == "arma") {
			System.out.println("Deu certo");

		} else if (separa[1] == "excluir" && separa[2] == "local") {
			System.out.println("Deu certo");
		}

	}
}
