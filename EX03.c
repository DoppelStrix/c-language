#define ex5

#include "stdio.h"
#include "locale.h"

//OBS.: Todos os programa devem ser finalizados pelo usuario.

/** 1 - Escreva um programa que receba uma letra via teclado. Escreva uma funcao que
    pesquise esta letra dentro do vetor abaixo. Imprima o resultado da pesquisa
    no video na funcao main(). Passe como informacao para a funcao a letra
    digitada.(utilize o comando return). O vetor deve ser uma variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
*/
#ifdef ex1
int i=0,e=0,sair=0;
char s,v[13]={'b','d','f','h','j','k','m','o','q','s','u','w','y'};

void letra(char s){

for(i=0;i<=12;i++)
{
  if(s==v[i])
   {
       printf("\nvalor encontrado em posi��o %d\n",i);
   }
   else{
    printf("\nvalor n�o encontrado\n");
   }
}
}

main()
{
    setlocale(LC_ALL,"Portuguese");
    printf("Programa procura uma letra dentro de um vetor:\n\n");
    do{
    printf("Digite o valor a ser procurado\n");
    scanf("%c",&s);
    letra(s);
    printf("\nPara sair do programa digite 1");
    printf(" ou 0 para repetir: \n");
    scanf("%d",&sair);

 }while(sair==0);

}
#endif
/** 2 - Fa�a um programa receba dois n�meros inteiros e execute as seguintes fun��es:
    - Verificar se o n�mero digitado � positivo ou negativo. Sendo que o valor de
      retorno ser� 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 n�meros s�o positivos, retorne a soma dos N n�meros existentes entre
      eles.
    - Se os 2 n�meros s�o negativos, retorne a multiplica��o dos N n�meros existente
      entre eles.
*/
#ifdef ex2
int sair=0;

int Verifica(int a)
{ if (a<0){
    return 0;
};
if (a==0){
    return -1;
};
if (a>0){
    return 1;
};

}

int SomaP(int x,int y,int a,int b)
{
    if (x==1 && y==1){
    printf("N�meros positivos, a soma �:\n");
    int c;
    c=a+b;
    return (printf("%d",c));
    }

    else{
        return;
    }
}

int MultN(int x,int y,int a,int b)
{
  if (x==0 && y==0){
  printf("N�meros negativos, a multiplica��o �:\n");
  int c;
  c=a*b;
  return (printf("%d",c));
  }

  else{
        return;
    }
}

main()
{

 setlocale(LC_ALL,"Portuguese");
 printf("Programa recebe 2 n�meros inteiros; Se positivos faz a soma, se negativos ");
 printf("a multiplica��o:\n");

 do{
 int x,y;

 printf("Primeiro n�mero:\n");
 scanf("%d",&x);
 printf("Segundo n�mero:\n");
 scanf("%d",&y);
 SomaP(Verifica(x),Verifica(y),x,y);
 MultN(Verifica(x),Verifica(y),x,y);
 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);

 }while(sair==0);
}
#endif
/** 3 - Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
    return e imprima-os no video na funcao main().
*/
#ifdef ex3
int sair=0;

int Soma(int a, int b){
  int c;
  c=a+b;
  return (c);
}

int Mult(int a, int b){
  int c;
  c=a*b;
  return (c);
}

int Sub(int a, int b){
  int c;
  c=a-b;
  return (c);
}

int Div(int a, int b){
  int c;
  if (b!=0){
  c=a/b;
  return (c);}
  else{
    printf("N�o h� divis�o por zero\n");
    return;
  }
}

main()
{
 setlocale(LC_ALL,"Portuguese");
 printf("Programa recebe 2 n�meros inteiros e retorna o resultado das;");
 printf("opera��es aritim�ticas:\n ");

 do{
 int x,y;

 printf("Primeiro n�mero:\n");
 scanf("%d",&x);
 printf("Segundo n�mero:\n");
 scanf("%d",&y);

 printf("Resultdo da soma: %d \n",Soma(x,y));
 printf("Resultdo da subtra��o: %d \n",Sub(x,y));
 printf("Resultdo da multiplica��o: %d \n",Mult(x,y));
 if(y!=0){
 printf("Resultdo da divis�o: %d \n",Div(x,y));
 }
 else{
    Div(x,y);
 }
 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);

 }while(sair==0);
}
#endif
/** 4 - Aproveitando o programa anterior inclua a selecao das operacoes aritmeticas
    para transforma-lo em uma calculadora. (utilize o comando switch). As operacoes
    aritmeticas devem estar em funcoes. O resultado deve ser mostrado na
    funcao main()
*/
#ifdef ex4
int sair=0;


int Soma(int a, int b){
  int c;
  c=a+b;
  return (c);
}

int Mult(int a, int b){
  int c;
  c=a*b;
  return (c);
}

int Sub(int a, int b){
  int c;
  c=a-b;
  return (c);
}

int Div(int a, int b){
  int c;
  if (b!=0){
  c=a/b;
  return (c);}
  else{
    printf("N�o h� divis�o por zero\n");
    return;
  }
}


main()
{
 setlocale(LC_ALL,"Portuguese");
 printf("Programa recebe 2 n�meros inteiros e retorna o resultado das;");
 printf("opera��es aritim�ticas:\n ");
 do{
     int x,y,c;

     printf("Primeiro n�mero:\n");
     scanf("%d",&x);
     printf("Segundo n�mero:\n");
     scanf("%d",&y);

     printf(" 1 - Soma  \n");
     printf(" 2 - Subtra��o \n");
     printf(" 3 - Multiplica��o  \n");
     printf(" 4 - Divis�o  \n");
     scanf("%d",&c);

     switch (c){

     case 1:
         Soma(x,y);

     case 2:
         Sub(x,y);

     case 3:
         Mult(x,y);

     case 4:
         Div(x,y);
     }

 setlocale(LC_ALL,"Portuguese");
 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);

 }while(sair==0);

}
#endif
/** 5 - Escreva um programa que receba um numero N. Escreva uma fun��o que
    retorne a soma dos algarismos de N!. O resultado deve ser mostrado na funcao
    main().
    Ex: se N = 4, N! = 24. Logo, a soma de seus algarismos �e 2 + 4 = 6.
*/
#ifdef ex5

int fatori(int x);
int somaAlg(int x);

int fatori(int x){
   int N=1,i=1;
   do
   {N*=i;
    i++;
   }while(i<=x);
   return N;

}

int somaAlg(int x)
{
    int N,soma=0;
    N=x;
    while (N!=0)
	{
		soma+=N%10;
		N/=10;
	}
    return soma;


}


int sair=0;
main()
{
 setlocale(LC_ALL,"Portuguese");
 printf("\nPrograma recebe um n�mero e retorna a");
 printf("soma dos algarismos de seu fatorial: \n\n");
 do{

 int N=0,soma=0;
 printf("Insira um n�mero natural:\n\n");
 scanf("%d",&N);

if (N>=2)
{
    soma = fatori(N);
    //printf("\n\nteste do resultado fatorial %d\n\n",soma);//teste
    soma = somaAlg(soma);
}

else

{
   soma=1;

}

 printf("\n\nO valor da soma dos algarismo �:%d",soma);
 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);

 }while(sair==0);

}
#endif
