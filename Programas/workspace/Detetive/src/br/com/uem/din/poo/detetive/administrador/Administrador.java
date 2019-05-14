package br.com.uem.din.poo.detetive.administrador;

import java.util.Scanner;

public class Administrador {
	public void administrador(int senha) {
		Scanner scan = new Scanner(System.in);
		System.out.println("senha" + senha);
		if (senha != 2108) {
			System.out.println("ERRO!\nSenha incorreta.");
			System.exit(0);
		}

		System.out.println("\n\n****Senha correta****\n");

		System.out.println("\n\nVocê logou como adminstrador.\n" + "O que pode fazer como Adm?\n "
				+ "Você pode Criar, alterar ou excluir algum objeto do jogo.\n" + "O que deseja fazer?\n"
				+ "Digite a Ação + objeto\n" + "\nResposta: ");

		String opcao = scan.nextLine();
		String[] separa = opcao.split("\\s+");

		//A partir daqui chama os metodos de alteração dos objetos do jogo
		if (separa[0].intern() == "criar" && separa[1].intern() == "suspeito") {
			System.out.println("Deu certo");

		} else if (separa[0].intern() == "criar" && separa[1].intern() == "arma") {
			System.out.println("Deu certo");

		} else if (separa[0].intern() == "criar" && separa[1].intern() == "local") {
			System.out.println("Deu certo");

		} else if (separa[0].intern() == "alterar" && separa[1].intern() == "suspeito") {
			System.out.println("Deu certo");

		} else if (separa[0].intern() == "alterar" && separa[1].intern() == "arma") {
			System.out.println("Deu certo");

		} else if (separa[0].intern() == "alterar" && separa[1].intern() == "local") {
			System.out.println("Deu certo");
		}

		else if (separa[0].intern() == "excluir" && separa[1].intern() == "suspeito") {
			System.out.println("Deu certo");

		} else if (separa[0].intern() == "excluir" && separa[1].intern() == "arma") {
			System.out.println("Deu certo");

		} else if (separa[0] == "excluir" && separa[1] == "local") {
			System.out.println("Deu certo");
		}

	}
}