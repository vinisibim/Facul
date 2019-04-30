#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

int main(int argc, char **argv) {//Pronto
	setlocale(LC_ALL, "Portuguese");
	FILE *lista;
	
	
    if (argc < 3) {
        fprintf(stderr, "Numero incorreto de argumentos!\n");
        fprintf(stderr, "Modo de uso: ");
        fprintf(stderr, "$ %s (-i|-e) nome_arquivo\n", argv[0]);
        exit(1);
    }

    if (strcmp(argv[1], "-i") == 0) {
        printf("\n\nModo de importacao ativado ... nome_arq_importacao = %s\n", argv[2]);
        if ((fopen(argv[2],"rb")) == NULL) {
       		printf("\nErro na abertura do arquivo --- programa abortado\n");
       		exit(1);
    	}
        
		importacao(argv[2]);
		
    } else if (strcmp(argv[1], "-e") == 0) {
        printf("\n\nModo de execucao de operacoes ativado ...nome_arq_comandos = %s\n", argv[2]);
		menuPrincipal(argv[2]);
		
    } else {
        fprintf(stderr, "Opcao \"%s\" nao suportada!\n", argv[1]);
    }

    return 0;
}

menuPrincipal(FILE* arq){//Pronto
	
	int escolha;
	printf("Você está no menu de ações, escolha uma ação abaixo para realiza-la.\n");
	printf("1.Buscar um filme\n2.Inserir um novo filme\n3.Excluir um filme\n9.Encerrar progama\n");
	printf("\nResposta: ");
	scanf("%i",&escolha);
	printf("\n\n");
	menuSecundario(escolha, arq);	
}

menuSecundario (int menu, FILE* arq){//Pronto
	
	int escolha, opcao;
	if(menu == 1){//Pronto
		printf("Escolha uma das opções abaixo para executa-la.\n");
		printf("1.Buscar filme pelo ID\n2.Visualizar lista de filmes\n9.Voltar ao menu Principal\n");
		printf("\nResposta: ");
		scanf("%i",&opcao);
		printf("\n\n");
		
		switch(opcao){
			case 1:
				busca(arq);
			break;
			
			case 2:
				listaFilmes(arq);
				printf("\n\n");
				busca(arq);
			break;
			
			case 9:
				menuPrincipal(arq);
			break;
			
			default:
				printf("ERRO!\nDigite somente o numero da opção desejada\n");
				printf("Voltando ao menu principal\n\n");
				menuPrincipal(arq);
		}
		
	}
	
	else if(menu == 2){//Pronto
		printf("Escolha uma das opções abaixo para executa-la\n");
		printf("1.Inserir novo filme\n2.Visualizar lista de filmes\n9.Voltar ao menu Principal\n");
		printf("\nResposta: ");
		scanf("%i",&opcao);
		printf("\n\n");
		
		switch(opcao){
			case 1:
				inserir(arq);
			break;
			
			case 2:
				listaFilmes(arq);
				printf("\n\n");
				inserir(arq);
			break;
			
			case 9:
				menuPrincipal(arq);
			break;
			
			default:
				printf("ERRO!\nDigite somente o numero da opção desejada.\n");
				printf("Voltando ao menu principal.\n\n");
				menuPrincipal(arq);
		}
	}
	
	else if(menu == 3){//Pronto
		printf("Escolha uma das opções abaixo para executa-la\n");
		printf("1.Remover filme pelo ID\n2.Visualizar lista de filmes\n9.Voltar ao menu Principal\n");
		printf("\nResposta: ");
		scanf("%i",&opcao);
		printf("\n\n");
		
		switch(opcao){
			case 1:
				remover(arq);
			break;
			
			case 2:
				listaFilmes(arq);
				printf("\n\n");
				remover(arq);
			break;
			
			case 9:
				menuPrincipal(arq);
			break;
			
			default:
				printf("ERRO!\nDigite somente o numero da opção desejada.\n");
				printf("Voltando ao menu principal.\n\n");
				menuPrincipal(arq);
		}
	}
	
	else if(menu == 9){ //Pronto
		exit(0);
	}
	
	else{ //Pronto
		printf("ERRO!\nDigite somente o numero da opção desejada.\n");
		printf("\n\n");
		menuPrincipal(arq);
	}
	
}

int input(char * str, int size) {//Pronto

	int i = 0;    
	char c = getchar();    

	while (c != '\n') {        
		if (size > 0) {            
			str[i] = c;            
			i++;            
			size--;        
		}        
		c = getchar();   
	}  
}

int readfield(FILE* fd, char* str, int size){//Pronto
	#define DELIM_CHR ';'
    int i = 0;
    char c = fgetc(fd);

    while ( c != EOF && c != DELIM_CHR){
		if (size > 0) { 
			str[i] = c;
			i++;
			size--;
		}
        c = fgetc(fd);
    }

    str[i] = '\0'; // anexa 'null' ao final da string
    return i;
}

listaFilmes(FILE* fd) {

    char str[30];
    char filename[15];
    int fld_count;
    int field_length;

    if ((fd = fopen("filmes.txt","rb")) == NULL) {
       		printf("\nErro na abertura do arquivo --- programa abortado\n");
       		exit(0);
    	}
    
    	/* loop do programa principal -- chama a função 'readfield'
	   enquanto a função tiver sucesso (retorno > 0) */
    fld_count = 0;
	field_length = readfield(fd, str, 30);
	printf("ID      Nome do filme    Genero    Data de Lançamento   Tempo    Avaliação\n\n");
    while (field_length > 0) {
        printf("\t%s|",str);
		field_length = readfield(fd, str, 30);
	}
    fclose(fd);
}

busca(FILE* arq){
	int escolha = 0, i = 0;
	
	printf("Digite o ID desejado:\n\n");
	printf("Resposta: ");
	scanf("%f",escolha);
	printf("\n\n");
	if (escolha == 1){
		printf("Ainda não implementada\n\n");
		menuPrincipal(arq);
	}
	else if(escolha != 1){
		printf("***ID digitado incorreto***\n");
		printf("Deseja inserir outro ID ou voltar ao menu principal?\n");
		printf("1- Inserir novo ID\n2- Voltar ao menu principal\n\n");
		printf("Resposta: ");
		scanf("%i",escolha);
		printf("\n\n");
		while(i<=4){
			if(escolha == 1){
				busca(arq);
			}
			else if(escolha == 2){
				menuPrincipal(arq);
			}
			else if (i == 3){
				printf("Você excedeu o limite de tentativas, redirecionando para o menu principal.");
				menuPrincipal(arq);
			}
			else{
				i++;
			}
		}
	}
}

inserir(FILE* arq){
	printf("Ainda não implementada\n\n");
				menuPrincipal(arq);
}

remover(FILE* arq){
	printf("Ainda não implementada\n\n");
				menuPrincipal(arq);
}

importacao(FILE* arq){
	printf(" ******SUCESSO*****");
}
