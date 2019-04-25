#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
/*
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
}*/


#define DELIM_CHR ';'

//cabeçalhos
int readfield(FILE*, char*, int);
int input (char*, int);

int listaFilmes(FILE* fd) {
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
    char str[30];
    char filename[15];
    int fld_count;
    int field_length;

    printf("Entre com o nome do arquivo a ser lido: ");
    input(filename, 15);
	
    if ((fd = fopen("filmes.txt", "r")) == NULL) {
       printf("Erro na abertura do arquivo --- programa abortado\n");
       exit(1);
    }
    
    	/* loop do programa principal -- chama a função 'readfield'
	   enqto a função tiver sucesso (retorno > 0) */
    fld_count = 0;
	field_length = readfield(fd, str, 30);
	printf("ID      Nome do filme    Genero    Data de Lançamento   Tempo    Avaliação\n\n");
    while (field_length > 0) {
        printf("\t%s",str);
		field_length = readfield(fd, str, 30);
	}
    fclose(fd);
    return 0;
}
    
    
    
/* função que lê um campo na string s
   e retorna o tamanho da string lida 
*/
int readfield(FILE* fd, char* str, int size){

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

/* função que lê uma linha do stdin para a string str 
*/

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
	
