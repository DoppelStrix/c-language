#define ex3
#include "stdio.h"
#include "locale.h"



/*OBS.: Fa�a um loop infinito e defina uma saida em todos os exerc�cios.

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
printf("Escreva n�meros positivos, ao digitar um negativo a m�dia dos valores ");
printf("digitados ser� mostrada:\n\n ");

do{
scanf("%d",&n);

m=m+n;
i++;
}while(n>=0);
i--;
n=n*(-1);
m=m+n;
m=m/i;
printf("A m�dia �: %d", m);
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
    printf("O programa usa >,< e = para advinhar um n�mero entre 1 e 99\n");
    printf("N�mero � maior,menor ou igual a 50?\n");
    cc= getchar();
    int i=1;
    int j=99;
    if(cc!='=')
    {
      while(c!='='){
      if(cc=='<'){

       printf("O n�mero � > que %d ou =?\n",i);
       c=getchar();
       if (c=='>'){
       i++;
       }
      }

      if(cc=='<' && c=='='){
         printf("O n�mero � %d",i);
      }

      if(cc=='>')
      {
       printf("O n�mero � < que %d ou =?\n",j);
       c=getchar();
        if (c=='<'){
       j--;
        }
       }
       if(cc=='>' && c=='='){ if (c=='>'){
        printf("O n�mero � %d",j);
       }

      }

    }
    }
    else
        {
        printf("O n�mero � 50");
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
    printf("O programa usa >,< e = para advinhar um n�mero entre 1 e 99\n");
    printf("N�mero � maior,menor ou igual a 50?\n");
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
       printf("O n�mero � > que %d ou =?\n",i);
       cc=getchar();
       i++;
       t++;
       }while(cc!='=');


      case'>':
       do{
       printf("O n�mero � < que %d ou =?\n",j);

       j--;
       t++;
       }while(cc!='=');

       }

      printf("O n�mero � %d\n",j);

    }

    else
        {
        printf("O n�mero � 50\n");
    }

   printf("\nforam %d tentativas",t);
   printf("\nPara sair do programa digite 1");
   printf(" ou 0 para repetir: \n");
   scanf("%d",&sair);

   }while(sair==0);


}
#endif


/*4 - As ligacoes telefonicas s�o cobradas pela sua duracao. O sistema registra os
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

printf("\nO programa c�lcula a dura��o de uma chamada, informe dois instantes ");
printf(" em horas, minuos e segundos\n");

printf("\nDigite as horas do momento inicial da liga��o: ");
scanf("%d",&ho);

printf("\nDigite os minutos do momento inicial da liga��o: ");
scanf("%d",&mo);

printf("\nDigite os segundos do momento final da liga��o: ");
scanf("%d",&so);

printf("\n\nDigite as horas do momento final da liga��o: ");
scanf("%d",&h);

printf("\nDigite os minutos do momento final da liga��o: ");
scanf("%d",&m);

printf("\nDigite os segundos do momento final da liga��o: ");
scanf("%d",&s);

h-=ho;
m-=mo;
s-=so;

printf("\nO tempo decorrido � %dh %dm %ds\n\n\n",h,m,s);
    printf("\nPara sair do programa digite 1");
    printf(" ou 0 para repetir: \n");
    scanf("%d",&sair);

    }while(sair==0);


}

#endif


/*5 - Um posto est� vendendo combust�veis com a seguinte tabela de descontos:
     �lcool
         at� 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          at� 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o n�mero de litros vendidos e o tipo de
     combust�vel (codificado da seguinte forma: A-�lcool, G-gasolina). Calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do litro da
     gasolina � R$ 5,88 e o pre�o do litro do �lcool � R$ 4,18.*/

#ifdef ex5
int sair=0;
float l,v;
char c;
main()
{
 do{

 setlocale(LC_ALL,"Portuguese");
 printf("Digite se � �lcool ou gasolina(A/G)\n ");
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
 printf("O valor a ser cobrado �: %g\n",v);
 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);

 }while(sair==0);


}

#endif
