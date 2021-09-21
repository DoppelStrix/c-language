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

char empresa[3][30], telefone[3][12];

void escreverArq();
void lerArq();

FILE *arquivo;

void inserirDados();
void listarDados();
void pesquisarNome();
void pesquisarLetra();
void alterarDados();
void excluirDados();

void main()
{ int sair=0;

  short menu;

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
  scanf("%d",&menu);

  switch(menu)
  { case 1:
         inserirDados();
      break;

    case 2:
         listarDados();
      break;

    case 3:
         pesquisarNome();
      break;

    case 4:
         pesquisarLetra();
      break;

    case 5:
         alterarDados();
      break;

    case 6:
         excluirDados();
      break;

    case 7:

      break;

  }

  }while(menu!=7);
}

void inserirDados(){
    for (i=0;i<3;i++)
    {getchar();
     printf("\nInsira o nome da empresa n %d", i+1);
     gets(empresa[i]);
     getchar();
     printf("\nInsira o telefone n %d", i+1);
     gets(telefone[i]);

    }

}

void listarDados(){
    for(i=0;i<3;i++){
        printf("\nO nome da empresa n %d ", i+1);
        puts(empresa[i]);

        printf("\nO telefone n %d ", i+1);
        puts(telefone[i]);

    }

}

void pesquisarNome(){
    int status = lerArq();

    if (status == 0) {
        int i=0, j=0, cont=0;
        char procura_produto[30];
        printf("\n Digite o nome que deseja pesquisar:");

        getchar();
        gets(search_produto);

        for (i = 0; i < 3; i++){

            for (j = 0; procura_produto[j] != '\0'; j++){
                if(procura_produto[j] != produto[i][j]){
                    break;
                }
            }

            if(procura_produto[j] == '\0' && produto[i][j] == '\0' && produto[i][0] != '*'){
                printf("\nNome: %s\nQuantidade: %d\n", produto[i], quantidade[i]);
                cont++;
                return i;
            }

        }
        if(cont == 0){
            printf("\nNenhum produto com o nome digitado foi encontrado!\n");
            return -1;
        }
    }
    else {
        printf("\nProdutos não foram cadastrados. Entre com os dados antes de consultar.\n");
    }

    fclose(arquivo);

    }


}

void pesquisarLetra(){
    int status = lerArq();

    if (status == 0) {

        int i=0, cont=0;
        char search_letra;


        do{
            printf("Digite a primeira letra do produto que deseja pesquisar: ");
            getchar();
            search_letra = getchar();
            if (search_letra == '*')
                printf("\nNome do produto não pode começar com o caracter '*' - reservado pelo sistema!\n\n");
        }while(search_letra == '*');

        for (i = 0; i < 3; i++) {
            if(search_letra == produto[i][0] && produto[i][0] != '*') {
                printf("\nNome: %s\nQuantidade: %d\n", produto[i], quantidade[i]);
                cont++;
            }
        }
        if(cont == 0) {
            printf("\nNenhum produto com a letra digitada foi encontrado!\n\n");
        }
    }
    else {
        printf("\nProdutos não foram cadastrados. Entre com os dados antes de consultar.\n");
    }

    fclose(arquivo);



}
void alterarDados(){
    int getid = pesquisarNome();
    int getposicao;

    if(getid != -1) {
        printf("\nO registro %d será alterado...\n",getid+1);

        arquivo = fopen("c05","r+");

        getposicao = sizeof(produto[0]) * getid;
        fseek(arquivo, getposicao, 0);
        fread(&produto, sizeof(produto),1,arquivo);

        getposicao = sizeof(produto[0])*3 + sizeof(quantidade[0])* getid;
        fseek(arquivo, getposicao, 0);
        fread(&quantidade, sizeof(quantidade),1,arquivo);

        printf("\nDigite novo produto: ");
        scanf("%s",&produto);

        printf("Digite nova quantidade: ");
        scanf("%d",&quantidade);

        getposicao = sizeof(produto[0]) * getid;
        fseek(arquivo, getposicao, 0);
        fwrite(produto, sizeof(produto),1,arquivo);

        getposicao = sizeof(produto[0])*3 + sizeof(quantidade[0])* getid;
        fseek(arquivo, getposicao, 0);
        fwrite(quantidade, sizeof(quantidade),1,arquivo);

        fclose(arquivo);

        printf("Registro alterado com sucesso!\n");

    }
    else{
        printf("Registro não encontrado, não é possível executar alteração\n");
    }




}
void excluirDados(){
    int getid = pesquisarNome();
    int getposicao;

    if(getid != -1) {
        printf("\nO registro %d será excluído...\n",getid+1);

        arquivo = fopen("c05","r+");

        getposicao = sizeof(produto[0]) * getid;
        fseek(arquivo, getposicao, 0);
        fread(&produto, sizeof(produto),1,arquivo);

        getposicao = sizeof(produto[0])*3 + sizeof(quantidade[0])* getid;
        fseek(arquivo, getposicao, 0);
        fread(&quantidade, sizeof(quantidade),1,arquivo);

        produto[0][0] = '*';

        getposicao = sizeof(produto[0]) * getid;
        fseek(arquivo, getposicao, 0);
        fwrite(produto, sizeof(produto),1,arquivo);

        fclose(arquivo);

        printf("Registro excluído com sucesso!\n");

    }
    else{
        printf("Registro não encontrado, não é possível executar exclusão\n");
    }

}

