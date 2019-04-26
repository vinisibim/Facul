#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

int main(int argc, char **argv) {
	setlocale(LC_ALL, "Portuguese");
	FILE* lista;
	lista = argv[2];
	
    if (argc < 3) {
        fprintf(stderr, "Numero incorreto de argumentos!\n");
        fprintf(stderr, "Modo de uso:\n");
        fprintf(stderr, "$ %s (-i|-e) nome_arquivo\n", argv[0]);
        exit(1);
    }

    if (strcmp(argv[1], "-i") == 0) {
        printf("\n\nModo de importacao ativado ... nome_arq_importacao = %s\n", argv[2]);
		// chame a função de importacao passando o nome_arq_importacao por parametro
		
    } else if (strcmp(argv[1], "-e") == 0) {
        printf("\n\nModo de execucao de operacoes ativado ...nome_arq_comandos = %s\n", argv[2]);
		menuPrincipal();
		
    } else {
        fprintf(stderr, "Opcao \"%s\" nao suportada!\n", argv[1]);
    }

    return 0;
}

menuPrincipal(){
	
	int escolha;
	printf("Você está no menu de ações, escolha uma ação abaixo para realiza-la.\n");
	printf("1.Buscar um filme\n2.Inserir um novo filme\n3.Excluir um filme\n9.Encerrar progama\n");
	printf("\nResposta: ");
	scanf("%i",&escolha);
	printf("\n\n");
	menuSecundario(escolha);	
}

menuSecundario (int menu){
	
	int escolha, opcao;
	if(menu == 1){
		printf("Escolha uma das opções abaixo para executa-la\n");
		printf("1.Buscar filme pelo ID\n2.Visualizar lista de filmes\n9.Voltar ao menu Principal\n");
		printf("\nResposta: ");
		scanf("%i",&opcao);
		printf("\n\n");
		
		switch(opcao){
			case 1:
				printf("Ainda não implementada\n\n");
				menuPrincipal();
			break;
			
			case 2:
				listaFilmes(lista);
			break;
			
			case 9:
				printf("Ainda não implementada\n\n");
				menuPrincipal();
			break;
			
			default:
				printf("ERRO!\nDigite somente o numero da opção desejada\n\n");
		}
		
	}
	
	else if(menu == 2){
		printf("Escolha uma das opções abaixo para executa-la\n");
		printf("1.Inserir novo filme\n2.Visualizar lista de filmes\n9.Voltar ao menu Principal\n");
		printf("\nResposta: ");
		scanf("%i",&opcao);
		printf("\n\n");
		
		switch(opcao){
			case 1:
				printf("Ainda não implementada\n\n");
				menuPrincipal();
			break;
			
			case 2:
				printf("Ainda não implementada\n\n");
				menuPrincipal();
			break;
			
			case 9:
				printf("Ainda não implementada\n\n");
				menuPrincipal();
			break;
			
			default:
				printf("ERRO!\nDigite somente o numero da opção desejada\n\n");
		}
	}
	
	else if(menu == 3){
		printf("Escolha uma das opções abaixo para executa-la\n");
		printf("1.Excluir filme pelo ID\n2.Visualizar lista de filmes\n9.Voltar ao menu Principal\n");
		printf("\nResposta: ");
		scanf("%i",&opcao);
		printf("\n\n");
		
		switch(opcao){
			case 1:
				printf("Ainda não implementada\n\n");
				menuPrincipal();
			break;
			
			case 2:
				printf("Ainda não implementada\n\n");
				menuPrincipal();
			break;
			
			case 9:
				printf("Ainda não implementada\n\n");
				menuPrincipal();
			break;
			
			default:
				printf("ERRO!\nDigite somente o numero da opção desejada\n\n");
		}
	}
	
	else if(menu == 9){ //Pronto
		exit(0);
	}
	
	else{ //Pronto
		printf("ERRO!\nDigite somente o numero da opção desejada.\n");
		printf("\n\n");
		menuPrincipal();
	}
	
}

int input(char * str, int size) {    

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

int readfield(FILE* fd, char* str, int size){
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

    if ((fd = fopen("filmes.txt", "r")) == NULL) {
       printf("Erro na abertura do arquivo --- programa abortado\n");
       exit(1);
    }
    
    	/* loop do programa principal -- chama a função 'readfield'
	   enquanto a função tiver sucesso (retorno > 0) */
    fld_count = 0;
	field_length = readfield(fd, str, 30);
	printf("ID      Nome do filme    Genero    Data de Lançamento   Tempo    Avaliação\n\n");
    while (field_length > 0) {
        printf("\t%s",str);
		field_length = readfield(fd, str, 30);
	}
    fclose(fd);
}
