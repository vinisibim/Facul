package br.com.uem.din.poo.detetive.preparacao;

import java.util.Random;

public class Objetos_Jogo {
	private String[] arma = { "Casti�al", "Cano", "Chave inglesa", "Corda", "Rev�lver", "Faca" };
	private String[] local = { "Biblioteca", "Cozinha", "Hall", "Escrit�rio", "Sala de estar", "Sala de jantar",
			"Sala de m�sica", "Sal�o de festas", "Sal�o de jogos" };
	private String[] suspeito = { "O Coronel Mustard", "Dona Branca", "A Senhora Pav�o", "Professor Plum",
			"O Reverendo Sr. Green", "A Senhorita Scarlett" };
	private String[] envelope = { "vini", "sla", "slc" };

	public String[] getArma() {
		return arma;
	}

	public void setArma(String[] arma) {
		this.arma = arma;
	}

	public String[] getLocal() {
		return local;
	}

	public void setLocal(String[] local) {
		this.local = local;
	}

	public String[] getSuspeito() {
		return suspeito;
	}

	public void setSuspeito(String[] suspeito) {
		this.suspeito = suspeito;
	}

	public String[] envelope() {
		Random random = new Random();

		if (arma[1] == "") {
			System.out.println("***ATEN��O***\n" + "N�o existem armas cadastradas no sistema!\n"
					+ "Por favor pe�a ao adiministrador para cadastra-las\n" + "Encerrando o jogo!!!");
			System.exit(0);
		} else if (local[1] == "") {
			System.out.println("***ATEN��O***\n" + "N�o existem locais cadastrados no sistema!\n"
					+ "Por favor pe�a ao adiministrador para cadastra-los\n" + "Encerrando o jogo!!!");
			System.exit(0);
		} else if (suspeito[1] == "") {
			System.out.println("***ATEN��O***\n" + "N�o existem suspeitos cadastrados no sistema!\n"
					+ "Por favor pe�a ao adiministrador para cadastra-las\n" + "Encerrando o jogo!!!");
			System.exit(0);
		} else {
			envelope[0] = arma[random.nextInt(arma.length)];
			envelope[1] = suspeito[random.nextInt(suspeito.length)];
			envelope[2] = local[random.nextInt(local.length)];
		}

		return envelope;
	}
}