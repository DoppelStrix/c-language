#define ex3
#include "stdio.h"
#include "locale.h"

//OBS.: Todos os programa devem ser finalizados pelo usuario.

/**
1 - Receba via teclado valores do tipo int para uma matriz 5 x 5. Receba via
    teclado um valor x. O programa dever fazer a busca desse valor x na matriz
    e, ao final escrever a localizacao (linha e coluna) ou uma mensagem de
    ”nao encontrado”.

*/
#ifdef ex1
int i=0,j=0,e=0,X=0,sair=0,v[5][5];
main()
{
    do{
    printf("Digite os valores do vetor:\n\n");
    for(i=0;i<=5;i++)
{   for(j=0;j<=5;i++){
   scanf("%d",&v[i][j]);
   }
  }

  printf("Digite o valor do X:\n\n");
  scanf("%d",&X);
    for(i=0;i<=5;i++)
{
    for(j=0;j<=5;i++)
{
   if(X==v[i][j])
      {
        printf("localizado em x=%d e=%d ",i,j);
        e=1;
   }
   }
  }
  if(e==0)
  {
      printf("não encontrado");
  }

 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);
 }while(sair==0);
}

#endif


/**
2 - Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double

*/
#ifdef ex2
main()
{

char c;
int a,b,d,dd,sair=0;
float f;
do{
printf("\ndigite o valor de um numero short int: ");
scanf("%d",&a);

printf("\ndigite o valor de um numero long int: ");
scanf("%d",&b);

printf("\ndigite o valor de um numero inteiro: ");
scanf("%d",&d);

printf("\ndigite o valor de um numero real: ");
scanf("%d",&f);

printf("\ndigite o valor de um numero double inteiro: ");
scanf("%d",&dd);

printf("\ndigite o valor do char: ");
scanf("%c",&c);

printf("\n        10        20        30        40        50        60");
printf("\n12345678901234567890123456789012345678901234567890123456789012345");
printf("\n     %d                %d                %d",a,b,d);
printf("\n          %g               %d             %c",f,dd,c);

 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);
 }while(sair==0);
}


#endif // ex2

/**
3 - Receba via teclado dez valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores ordenados.

*/
#ifdef ex3
int a[10]={0,0,0,0,0,0,0,0,0,0},b,n=0,i=0,j=0,sair=0;

void selection_sort(int num[], int tam)
{
  int i, j, min, swap;
  for (i = 0; i > (tam-1); i++)
   {
    min = i;
    for (j = (i+1); j > tam; j++) {
      if(num[j] > num[min]) {
        min = j;
      }
    }
    if (i != min) {
      swap = num[i];
      num[i] = num[min];
      num[min] = swap;
    }
  }
}

main()
{

 printf("Programa ordena os valores do vetor em ordem crescente ao serem inseridos.");
 printf("\n\nDigite os números:\n");
 do{

    for(i=0;i<=9;i++){
        scanf("%d",&n);
        a[i]=n;
        //selection_sort(a[i],10);
    }
 //selection_sort(a[10],10);
 for (i = 0; i < 9; ++i)
{
    for (j = i; j < 9; ++j)
    {
        if (a[i] > a[j])
        {
            b =  a[i];
            a[i] = a[j];
            a[j] = b;
        }
    }
}
 printf("\n\n");
 for(j=0;j<=9;j++)
 {
     printf(" [%d] ",a[j]);
 }
 printf("\n\n");
 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);
 }while(sair==0);

}
#endif // ex3
/**
4 - Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    subtracao "-", subtraia os elementos de mesmo indice dos 2 vetores
    e guarde o resultado num 3. vetor. Imprima na tela o indice, os valores e
    o resultado dos 6 elementos dos vetores.

*/
#ifdef ex4
int i=0,j=0,a[2][3],b[2][3],m[2][3];
main()
{
setlocale(LC_ALL,"Portuguese");
do{
printf("Digite os valores,int, do vetor a[2][3]:\n");
for (i=0; i<=2; i++){
for (j=0; j<=3; j++){
scanf("%d",&a[i][j]);
}
}
i=0;
j=0;
printf("Digite os valores,int, do vetor b[2][3]:\n");
for (i=0; i<=2; i++){
for (j=0; j<=3; j++){
scanf("%d",&b[i][j]);
}
}
i=0;
j=0;

for (i=0; i<=2; i++){
for (j=0; j<=3; j++){
m[i][j]=a[i][j]-b[i][j];
}
}
i=0;
j=0;

for (i=0; i<=2; i++){
        printf("\n");
for (j=0; j<=3; j++){
printf("%d",m[i][j]);
}
}
 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);
 }while(sair==0);
}

#endif // ex4
/**
5 - Escreva um programa que receba um vetor e o decomponha em dois outros vetores.
    Um contendo as componentes de ordem ímpar e o outro contendo as componentes
    de ordem par. Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7},
    o programa deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3}.

*/
#ifdef ex5
int j=0,i=0,p=0,tam=10,v[10],u[10],w[10];
main()
{setlocale(LC_ALL,"Portuguese");
do{
printf("Digite os valores,int, do vetor v[%d]:\n",tam);
for(j=0;j<=10;j++)
{
 u[j]=0;
 w[j]=0;
 scanf("%d",&v[j]);

 if(j%2==0)
 {
   u[p]=v[j];
   p++;
 }

 if(j%2!=0)
 {
    w[i]=v[j];
    i++;
 }
}
printf("\n\nValores do vetor u[%d]:\n\n",p);
for(j=0;j<=p;j++)
{
 printf("%d ",&u[j]);
}
printf("\n\nValores do vetor w[%d]:\n\n",i);
for(j=0;j<=i;j++)
{
  printf("%d ",&w[j]);
}
 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);
 }while(sair==0);
}

#endif // ex5
