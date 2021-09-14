#define ex1

#include "stdio.h"
#include "locale.h"


/*OBS.: Todos os programa devem ser finalizados pelo usuario.

/*
1 - Receba 2 string de ate 10 caracteres via teclado na funcao main() e noutra
    funcao compare-as mostrando como resultado se são IGUAIS ou DIFERENTES na funcao
    main(). (Declare os vetores como variavel global)
*/

#ifdef ex1

char A[11], B[11];
int sair=0;

int compara(char x[11],char y[11])
{   int z=0,i=0;
    for(i=0;i<=10;i++)
    { if (A[i]==B[i])
        {
            z=0;// 0 é "igual".
        }
      else
      {
       i=10;
       z=1;// 1 é "diferente"..
       }
      }
 return z;
}

main()
{
    do{

    printf("Insira 2 strings de ateh 10 caracteres.");
    gets(A);
    gets(B);
    if (compara(A,B)==0)
    {
        printf("Strings iguais.");
    }

    else
    {
       printf("Strings diferentes");
    }

    printf("\nPara sair do programa digite 1");
    printf(" ou 0 para repetir: \n");
    scanf("%d",&sair);
    }while(sair==0);

}
#endif // ex1

/*2 - Escreva um programa para receber 5 nomes, com até 7 caracteres, via teclado
    e imprima-os no video no seguinte formato:(Declare os vetores como variavel
    global)

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      nome1                                   nome5
                nome2               nome4
                          nome3
*/
#ifdef ex2
main()
{

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
scanf("%d",&f);

printf("\ndigite o valor de um numero double inteiro: ");
scanf("%d",&dd);

printf("\ndigite o valor do char: ");
scanf("%c",&c);

printf("\n        10        20        30        40        50        60");
printf("\n12345678901234567890123456789012345678901234567890123456789012345");
printf("\n     %d                %d                %d",a,b,d);
printf("\n          %g               %d             %c",f,dd,c);
}

#endif // ex2

/*3 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras maiusculas.
*/
#ifdef ex3
main()
{
 int i=0,sair=0;
 char c1[10],c2[10];
 setlocale(LC_ALL,"Portuguese");
 do{
 printf("digita uma string via teclado(até 10 caracteres) : ");
 gets(c1);
 printf("a string digitada e': %s",c1);

 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);
 }while(sair==0);

}


#endif // ex3

/*4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.
*/
#ifdef ex4
void strncase (char* s)
{
   char notcase (char c)
   {
       if((c >= 'a') && (c <= 'z'))
           return 'A' + (c - 'a');
       if((c >= 'A') && (c <= 'Z'))
           return 'a' + (c - 'A');
       return c;
   }
   while(*s != '\0')
   {
       *s = notcase(*s);
       s++;
   }
}

int sair=0;

main()
{
 int i=0;
 char c1[10],c2[10];
 setlocale(LC_ALL,"Portuguese");

do{
 printf("digita uma string via teclado(até 10 caracteres) : ");
 gets(c1);
 printf("a string digitada e': %s",c1);


 printf("\nPara sair do programa digite 1");
 printf(" ou 0 para repetir: \n");
 scanf("%d",&sair);
  }while(sair==0);
}



#endif // ex4
/*5 - Faca um programa que leia uma palavra (maximo de 20 letras) em uma funcao
    e some 1 no valor ASCII de cada caractere da palavra em outra funcao. Na sua
    funcao main() imprima a string resultante. (Declare o vetor como variavel
    global)
*/

#ifdef ex5

int sair=0;
main()
{
    do{
    printf("\nPara sair do programa digite 1");
    printf(" ou 0 para repetir: \n");
    scanf("%d",&sair);

}while(sair==0);

}
}
#endif // ex5
