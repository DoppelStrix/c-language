/*OBS.: Todos os programa devem ser finalizados pelo usuario.


/*
1 - Receba 2 string de ate 10 caracteres via teclado na funcao main() e noutra
    funcao compare-as mostrando como resultado se são IGUAIS ou DIFERENTES na funcao
    main(). (Declare os vetores como variavel global)
*/

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
 int i=0;
 char c1[10],c2[10];
 setlocale(LC_ALL,"Portuguese");

 printf("digita uma string via teclado(até 10 caracteres) : ");
 gets(c1);
 printf("a string digitada e': %s",c1);


}


#endif // ex3

/*4 - Receba via teclado uma cadeia de caracteres (10) e converta todos os caracteres
    para letras minusculas.
*/
#ifdef ex4
main()
{
 int i=0;
 char c1[10],c2[10];
 setlocale(LC_ALL,"Portuguese");

 printf("digita uma string via teclado(até 10 caracteres) : ");
 gets(c1);
 printf("a string digitada e': %s",c1);
}


#endif // ex4
/*5 - Faca um programa que leia uma palavra (maximo de 20 letras) em uma funcao
    e some 1 no valor ASCII de cada caractere da palavra em outra funcao. Na sua
    funcao main() imprima a string resultante. (Declare o vetor como variavel
    global)
*/
