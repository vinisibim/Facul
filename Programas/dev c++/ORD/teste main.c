#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv) {
	
	
	
    if (argc < 3) {
        fprintf(stderr, "Numero incorreto de argumentos!\n");
        fprintf(stderr, "Modo de uso:\n");
        fprintf(stderr, "$ %s (-i|-e) nome_arquivo\n", argv[0]);
        exit(1);
    }

    if (strcmp(argv[1], "-i") == 0) {
        printf("Modo de importacao ativado ... nome_arq_importacao = %s\n", argv[2]);
		// chame a função de importacao passando o nome_arq_importacao por parametro
		
    } else if (strcmp(argv[1], "-e") == 0) {
        printf("Modo de execucao de operacoes ativado ...nome_arq_comandos = %s\n", argv[2]);
		//chame a funcao de execucao de comandos passando o nome_arq_comandos por parametro
		
    } else {
        fprintf(stderr, "Opcao \"%s\" nao suportada!\n", argv[1]);
    }

    return 0;
}

