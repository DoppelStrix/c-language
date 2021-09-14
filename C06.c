#include "stdio.h"
#include "stdlib.h"
#include "locale.h"

/*
1 – Pesquise as funções de biblioteca abaixo que manipulam arquivos.
 	fopen();
  	fclose();
	fwrite();  cuidado com esta função
	fread();  cuidado com esta função
    fseek();
    exit(0);

2 - Escreva  um  programa  que  tem 1 vetores bidimensional empresa[3][30] e
1 vetores telefone[3][12] declaradas como variáveis globais.

Na função main()  faça um menu com as seguintes funções:

   1 – entrada de dados.
   2 – lista todos os dados na tela.
   3 – pesquisa uma empresa com o nome completo e mostra na tela
   4 – pesquisa as empresas pela 1. letra e mostra todos na tela.
   5 – altera dados. Com pesquisa pela empresa com o nome completo.
   6 – exclui dados. Com pesquisa pela empresa com o nome completo.
   7 - saída

OBS: Os 2 vetores devem ser escritos e lidos de um arquivo.


*/
char empresa[3][30];
int telefone[3][12]

void main()
{ int sair=0;
  setlocale(LC_ALL, "portuguese");
  do{
  printf("1 – entrada de dados.\n");
  printf("2 – lista todos os dados na tela.\n");
  printf("3 – pesquisa uma empresa com o nome completo e mostra na tela\n");
  printf("4 – pesquisa as empresas pela 1. letra e mostra todos na tela.\n");
  printf("5 – altera dados. Com pesquisa pela empresa com o nome completo.\n");
  printf("6 – exclui dados. Com pesquisa pela empresa com o nome completo.\n");
  printf("7 - saída\n");
  printf("Escolha a opção:\n");
  scanf("%d",sair);
  }while(sair==0);
}
