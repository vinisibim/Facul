#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

menuPrincipal(){
	
	int escolha;
	printf("Voc� est� no menu de a��es, escolha uma a��o abaixo para realiza-la.\n");
	printf("1.Buscar um filme\n2.Inserir um novo filme\n3.Excluir um filme\n9.Encerrar progama\n");
	printf("\nResposta: ");
	scanf("%i",&escolha);
	printf("\n\n");
	menuSecundario(escolha);	
}

menuSecundario (int menu){
	int escolha, opcao;
	if(menu == 1){
		printf("Escolha uma das op��es abaixo para executa-la\n");
		printf("1.Buscar filme pelo ID\n2.Visualizar lista de filmes\n9.Voltar ao menu Principal\n");
		printf("\nResposta: ");
		scanf("%i",&opcao);
		printf("\n\n");
		
		switch(opcao){
			case 1:
				printf("Ainda n�o implementada\n\n");
				menuPrincipal();
			break;
			
			case 2:
				printf("Ainda n�o implementada\n\n");
				menuPrincipal();
			break;
			
			case 9:
				printf("Ainda n�o implementada\n\n");
				menuPrincipal();
			break;
			
			default:
				printf("ERRO!\nDigite somente o numero da op��o desejada\n\n");
		}
		
	}
	
	else if(menu == 2){
		printf("Escolha uma das op��es abaixo para executa-la\n");
		printf("1.Inserir novo filme\n2.Visualizar lista de filmes\n9.Voltar ao menu Principal\n");
		printf("\nResposta: ");
		scanf("%i",&opcao);
		printf("\n\n");
		
		switch(opcao){
			case 1:
				printf("Ainda n�o implementada\n\n");
				menuPrincipal();
			break;
			
			case 2:
				printf("Ainda n�o implementada\n\n");
				menuPrincipal();
			break;
			
			case 9:
				printf("Ainda n�o implementada\n\n");
				menuPrincipal();
			break;
			
			default:
				printf("ERRO!\nDigite somente o numero da op��o desejada\n\n");
		}
	}
	
	else if(menu == 3){
		printf("Escolha uma das op��es abaixo para executa-la\n");
		printf("1.Excluir filme pelo ID\n2.Visualizar lista de filmes\n9.Voltar ao menu Principal\n");
		printf("\nResposta: ");
		scanf("%i",&opcao);
		printf("\n\n");
		
		switch(opcao){
			case 1:
				printf("Ainda n�o implementada\n\n");
				menuPrincipal();
			break;
			
			case 2:
				printf("Ainda n�o implementada\n\n");
				menuPrincipal();
			break;
			
			case 9:
				printf("Ainda n�o implementada\n\n");
				menuPrincipal();
			break;
			
			default:
				printf("ERRO!\nDigite somente o numero da op��o desejada\n\n");
		}
	}
	
	else if(menu == 9){ //Pronto
		exit(0);
	}
	
	else{ //Pronto
		printf("ERRO!\nDigite somente o numero da op��o desejada.\n");
		printf("\n\n");
		menuPrincipal();
	}
	
}


int main (){
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	menuPrincipal();	
}




 
