#define ex3
#include "stdio.h"
#include "locale.h"



/*OBS.: Faça um loop infinito e defina uma saida em todos os exercícios.

1 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados.*/
#ifdef ex1
int sair=0;
main()
{
    do{

    int i=0,n=0,m=0;
    setlocale(LC_ALL,"Portuguese");
printf("Escreva números positivos, ao digitar um negativo a média dos valores ");
printf("digitados será mostrada:\n\n ");

do{
scanf("%d",&n);

m=m+n;
i++;
}while(n>=0);
i--;
n=n*(-1);
m=m+n;
m=m/i;
printf("A média é: %d", m);
printf("\nPara sair do programa digite 1");
printf(" ou 0 para repetir: \n");
scanf("%d",&sair);

    }while(sair==0);


}
#endif


/*2 - Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
    comando if-else.*/
#ifdef ex2

char c,cc;
int i,j, sair=0;
float main()

{
    do{

    setlocale(LC_ALL,"Portuguese");
    printf("O programa usa >,< e = para advinhar um número entre 1 e 99\n");
    printf("Número é maior,menor ou igual a 50?\n");
    cc= getchar();
    int i=1;
    int j=99;
    if(cc!='=')
    {
      while(c!='='){
      if(cc=='<'){

       printf("O número é > que %d ou =?\n",i);
       c=getchar();
       if (c=='>'){
       i++;
       }
      }

      if(cc=='<' && c=='='){
         printf("O número é %d",i);
      }

      if(cc=='>')
      {
       printf("O número é < que %d ou =?\n",j);
       c=getchar();
        if (c=='<'){
       j--;
        }
       }
       if(cc=='>' && c=='='){ if (c=='>'){
        printf("O número é %d",j);
       }

      }

    }
    }
    else
        {
        printf("O número é 50");
    }
   c='.';
   cc='.';
   printf("\nPara sair do programa digite 1");
   printf(" ou 0 para repetir: \n");
   scanf("%d",&sair);

   }while(sair==0);


}

#endif


/*3 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.*/
#ifdef ex3
char c,cc;
sair=0;
float main()

{
    do{

    setlocale(LC_ALL,"Portuguese");
    printf("O programa usa >,< e = para advinhar um número entre 1 e 99\n");
    printf("Número é maior,menor ou igual a 50?\n");
    cc=getchar();
    int i=1;
    int j=99;
    int t=1;
    c=cc;
    if(cc!='=')
    {

    switch(c){
      case'<':
       do{
       printf("O número é > que %d ou =?\n",i);
       cc=getchar();
       i++;
       t++;
       }while(cc!='=');


      case'>':
       do{
       printf("O número é < que %d ou =?\n",j);

       j--;
       t++;
       }while(cc!='=');

       }

      printf("O número é %d\n",j);

    }

    else
        {
        printf("O número é 50\n");
    }

   printf("\nforam %d tentativas",t);
   printf("\nPara sair do programa digite 1");
   printf(" ou 0 para repetir: \n");
   scanf("%d",&sair);

   }while(sair==0);


}
#endif


/*4 - As ligacoes telefonicas são cobradas pela sua duracao. O sistema registra os
    instantes em que a ligacao foi iniciada e concluida.
    Escreva um programa que recebe via teclado dois instantes dados em
    horas, minutos e segundo e determina o intervalo de tempo
    (em horas, minutos e segundos) decorrido entre eles.*/
#ifdef ex4
int sair=0;
main()
{
do{

int ho=0,mo=0,so=0,h=0,m=0,s=0;
setlocale(LC_ALL,"Portuguese");

printf("\nO programa cálcula a duração de uma chamada, informe dois instantes ");
printf(" em horas, minuos e segundos\n");

printf("\nDigite as horas do momento inicial da ligação: ");
scanf("%d",&ho);

printf("\nDigite os minutos do momento inicial da ligação: ");
scanf("%d",&mo);

printf("\nDigite os segundos do momento final da ligação: ");
scanf("%d",&so);

printf("\n\nDigite as horas do momento final da ligação: ");
scanf("%d",&h);

printf("\nDigite os minutos do momento final da ligação: ");
scanf("%d",&m);

printf("\nDigite os segundos do momento final da ligação: ");
scanf("%d",&s);

h-=ho;
m-=mo;
s-=so;

printf("\nO tempo decorrido é %dh %dm %ds\n\n\n",h,m,s);
    printf("\nPara sair do programa digite 1");
    printf(" ou 0 para repetir: \n");
    scanf("%d",&sair);

    }while(sair==0);


}

#endif


/*5 - Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina). Calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
     gasolina é R$ 5,88 e o preço do litro do álcool é R$ 4,18.*/

#ifdef ex5
int sair=0;
float l,v;
char c;
main()
{
 do{

 setlocale(LC_ALL,"Portuguese");
 printf("Digite se é álcool ou gasolina(A/G)\n ");
 scanf("%c",&c);

 printf("Digite a quantidade de litros:\n ");
 scanf("%f",&l);



 if(l<=20)
 {
    if(c=='A')
    {
       v=0.97*l*4.18;
    }
    else
    {
        v=0.96*l*5.88;
    }
 }

 if(l>20)
 {
     if(c=='A')
    {
       v=0.95*l*4.18;
    }
    else
    {
      v=0.94*l*5.88;
    }
 }
 printf("O valor a ser cobrado é: %g\n",v);
 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);

 }while(sair==0);


}

#endif
