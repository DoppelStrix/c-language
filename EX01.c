#define ex1
#include "stdio.h"
#include "locale.h"

/**
1 - Escreva um programa que permute o conteúdo de duas variáveis sem utilizar uma
    variável auxiliar.

*/

#ifdef ex1
int sair=0;
main()
{
do{

setlocale(LC_ALL,"Portuguese");
int a=0, b=1;

printf("\ndigite o valor de um numero inteiro a: ");
scanf("%d",&a);

printf("\ndigite o valor de um numero inteiro b: ");
scanf("%d",&b);

if (a>=0 && b>=0 )
{
   a=a-b;
   b=b+a;
   a=b-a;

}

if (a>=0 && b<=0)
{
   b=-1*b;
   a=a-b;
   b=b+a;
   a=b-a;
   a=-1*a;

}

if (b>=0 && a<=0)
{
   a=-1*a;
   a=a-b;
   b=b+a;
   a=b-a;
   b=-1*b;
}

if (a<=0 && b<=0)
{
   a=-1*a;
   b=-1*b;
   a=a-b;
   b=b+a;
   a=b-a;
   a=-1*a;
   b=-1*b;
}


printf("\no caracter a é: %d",a);
printf("\no caracter b é: %d\n",b);
printf("\nPara sair do programa digite 1");
printf(" ou 0 para repetir: \n");
scanf("%d",&sair);
}while(sair==0);

}

#endif // ex1

/**
2 - Escreva um programa que receba dados via teclado para variaveis do tipo short,
    long, int, float, double e um char e imprima-os no video no seguinte
    formato:

             10        20        30        40        50        60
     12345678901234567890123456789012345678901234567890123456789012345
         short               long                int
                   float               double              char
*/
int sair=0;
main()
{
do{

char c;
int a,b,d,dd;
float f;

printf("\ndigite o valor de um numero short int: ");
scanf("%d",&a);

printf("\ndigite o valor de um numero long int: ");
scanf("%d",&b);

printf("\ndigite o valor de um numero inteiro: ");
scanf("%d",&d);

printf("\ndigite o valor de um numero real: ");
scanf("%f",&f);

printf("\ndigite o valor de um numero double inteiro: ");
scanf("%d",&dd);

printf("\ndigite o valor do char: ");
scanf("%c",&c);

printf("\n        10        20        30        40        50        60");
printf("\n12345678901234567890123456789012345678901234567890123456789012345");
printf("\n     %-6d                %-6d                %-6d",a,b,d);
printf("\n          %-15.2f               %d             %c",f,dd,c);

printf("\nPara sair do programa digite 1");
printf(" ou 0 para repetir: \n");
scanf("%d",&sair);

}while(sair==0);

}

/**
3 - Escreva um programa que receba via teclado um tempo em segundos e converta
    para horas, minutos e segundos.
    Ex.: recebe 3850 segundos que converte para 1h 4min 10s.

*/

#ifdef ex3
int sair=0;
main()
{
do{

setlocale(LC_ALL,"Portuguese");
int t=0, h=0,m=0,s=0;

printf("\n\nO programa receba via teclado um tempo em segundos e converta um ");
printf(" para horas, minutos e segundos.");

printf("\n\nDigite o valor do tempo em segundos : ");
scanf("%d",&t);

s=t;

if(t>=60)
{
  m=t/60;
  s=s%60;
}

if (m>=60)

{
 h=m/60;
 m=m%60;
 s=s%60;

}



printf("\nO tempo convertido é: %dh %dm %ds \n",h,m,s);
printf("\nPara sair do programa digite 1");
printf(" ou 0 para repetir: \n");
scanf("%d",&sair);


}while(sair==0);

}


#endif

/**
4 - Escreva um programa que determine o menor multiplo de um numero inteiro. Este
    multiplo deve ser maior que o limite minimo recebido. Recebe os 2 numeros via
    teclado.
    Ex: menor multiplo de 13 maior que 100. Resultado: 104.

*/
#ifdef ex4
int sair=0;

main()
{

setlocale(LC_ALL,"Portuguese");
int d=0, l=0,i=1,r=1;
do{
printf("\n\nO programa determina o menor múltiplo de um número inteiro.\nEste ");
printf("múltiplo deve ser maior que o limite mínimo recebido.");

printf("\n\nDigite o valor de um número inteiro : ");
scanf("%d",&d);

printf("\nDigite o valor do limite mínimo: ");
scanf("%d",&l);
r=d;

while (r<=l)
{
  r=d*i;
  i++;
}

printf("\nMenor múltiplo de %d maior que %d. Resultado: %d. \n\n",d,l,r);
printf("\nPara sair do programa digite 1");
printf(" ou 0 para repetir: \n");
scanf("%d",&sair);


}while(sair==0);

}

#endif // ex4

/**
5 - Escreva um programa que lê um valor em reais e calcula qual o menor número
    possível de notas de $100, $50, $20, $10, $5, $2 e $1 em que o valor lido pode
    ser decomposto. Escrever o valor lido e a relação de notas necessárias.

*/

#ifdef ex5

int sair=0;
main()
{
do{

setlocale(LC_ALL,"Portuguese");
int nota=0, c=0,d=0,n=0;

printf("\n\nO programa determina o menor número possível de notas de $100,");
printf("$50, $10 e $1 em que o valor lido pode ser decomposto.\n ");
printf("Este múltiplo deve ser maior que o limite mínimo recebido.");

printf("\n\nDigite o valor: ");
scanf("%d",&nota);
c=nota/100;
d=(nota%100)/10;
n=(nota%100)%10;
printf("\nNotas de 100: %d; de 10: %d e de 1: %d. \n\n",c,d,n);
printf("\nPara sair do programa digite 1");
printf(" ou 0 para repetir: \n");
scanf("%d",&sair);

}while(sair==0);


}

#endif

