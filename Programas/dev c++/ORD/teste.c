#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void main()
{
  FILE *arq;
  char Linha[100];
  char *result;
  int i;

  clrscr();

  // Abre um arquivo TEXTO para LEITURA
  arq = fopen("filmes.txt", "rt");
  if (arq == NULL)  // Se houve erro na abertura
  {
     printf("Problemas na abertura do arquivo\n");
     return;
  }
  i = 1;
  while (!feof(arq))
  {
	// L� uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arq);  // o 'fgets' l� at� 99 caracteres ou at� o '\n'
      if (result)  // Se foi poss�vel ler
	  printf("Linha %d : %s",i,Linha);
      i++;
  }
  fclose(arq);
}
