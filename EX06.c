#define ex1

#include "stdio.h"
#include "locale.h"


/*OBS.: Faça um loop infinito e defina uma saida em todos os exercícios.

/*1 - Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual.
*/
#ifdef ex1
main()
{
    // usando ano comercial 360 dias,mês 30 dias.
    int A,M,D,a,m,d;
    setlocale(LC_ALL,"Portuguese");
    printf("\nDigite a data (dia, mês e ano) do nascimento\n");
    scanf("%d",&d);
    scanf("%d",&m);
    scanf("%d",&a);
    printf("\nDigite a data (dia, mês e ano) atual\n");
    scanf("%d",&D);
    scanf("%d",&M);
    scanf("%d",&A);

    if(D>d)
    {
      D-=d;
    }

    if(D<d)
    {
       M--;
       D+=30;
       D-=d;
    }

    if(M>m)
    {
       M-=m;
    }

    if(M<m)
    {
       A--;
       M+=12;
       M-=m;
    }

    if(A>a)
    {
        A-=a;
    }

    else
        {
        printf("Data inválida");

        }
        printf("A idade é: %d anos,%d meses e %d dias.",A,M,D);
}

#endif // ex1

/*2 - Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.
*/
#ifdef ex2
main()
{
    int a,b;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o valor de dois inteiros, a e b\n");
    scanf("%d",&a);
    printf("\n");
    scanf("%d",&b);
    printf("\nO valor de a+b é: %d",a+b);
    printf("\nOs valores de a-b e b-a são: %d e %d",a-b,b-a);
    printf("\nO valor de a*b é: %d",a*b);
    printf("\nOs valores de a/b e b/a são: %d e %d\n\n ",a/b,b/a);
}

#endif // ex2

/*3 - Reescreva o exercicio anterior utilizando operadores de atribuicao
    composta.
*/
#ifdef ex3

main()
{int a,b,x,y;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o valor de dois inteiros, a e b\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\n");
    x=a;
    y=b;

    printf("\nO valor de a+b é: %d",a+=b);
    a=x;
    printf("\nOs valores de a-b e b-a são: %d e %d",a-=b,a=x,b-=a);
    a=x;
    b=y;
    printf("\nO valor de a*b é: %d",a*=b);
    a=x;
    printf("\nOs valores de a/b e b/a são: %d e %d\n\n ",a/=b,b/=a);
}

#endif // ex3

/*4 - Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.
*/
#ifdef ex4
main()
{int a,b,c;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite o valor de dois inteiros, a e b\n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("\nDecimais\n:");
    printf("\nO valor de a AND b é: %d",a&b);
    printf("\nOs valores de a OU b é: %d",b | a);
    printf("\nO valor de a OU EXCLUSIVO b é: %d",a^b);

    printf("\nHexadecimais\n:");
    printf("\nO valor de a AND b é: %x",a&b);
    printf("\nOs valores de a OU b é: %x",b|a);
    printf("\nO valor de a OU EXCLUSIVO b é: %x",a^b);

}

#endif // ex4

/*5 - Escreva um programa que tenha o menu abaixo.
       1 - transforma graus Celsius em Fahrenheit e Kelvin
       2 - transforma graus Fahrenheit em Celsius e Kelvin
       3 - transforma graus Kelvin em Celsius e Fahrenheit
    Cada opcao de menu deve chamar uma funcao que retorna o resultado da
    conversao. O resultado deve ser mostrado na funcao main().
*/
#ifdef ex5
main()
{
    int F,t;
    setlocale(LC_ALL,"Portuguese");
    do{

        printf("\n1 - transforma graus Celsius em Fahrenheit e Kelvin");
        printf("\n2 - transforma graus Fahrenheit e Celsius e Kelvin");
        printf("\n3 - transforma graus Kelvin e Celsius e Fahrenheit");
        printf("\n4- sair");

        scanf("%d",&F);
        switch (F){

        case (1):
        printf("Digite a temperatura em Celsius:\n");
        scanf("%d",&t);
        printf("\nO valor em Fahrenheit: %d",1.8*t + 32);
        printf("\nO valor em Kelvin: %d",t+273);
        break;

        case (2):
        printf("Digite a temperatura Fahrenheit:\n");
        scanf("%d",&t);
        printf("\nO valor em Celsius: %d",(t-32)/1.8);
        printf("\nO valor em Kelvin: %d",(((t-32)/9)*5)-273);
        break;

        case (3):
        printf("Digite a temperatura em Kelvin:\n");
        scanf("%d",&t);
        printf("\nO valor em Celsius: %d",t-273);
        printf("\nO valor em Fahrenheit: %d",(((t-273)/5)*9)+32);
        break;

        case (4):
        printf("Fin");
        break;


        default:
            printf("opcao invalida");

        }

    }while(F!=4);

}

#endif // ex5
