#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que solicite um n�mero ao usu�rio. Em seguida, informe se (i)
    o n�mero � par ou �mpar, e (ii) se o n�mero � positivo, negativo, ou nulo. */

int main()

{
    int numero;

    printf("Me diga um numero e eu te direi o que ele e!\n");
    scanf("%d",&numero);

    printf("O numero informado e par ou impar?\n");
    if ((numero%2) == 0)
    {
        printf("Ele e par!\n");
    }
    else
    {
        printf("Ele e impar!\n");
    }

    printf("O numero e positivo, negativo ou neutro?\n");
    if (numero > 0)
    {
        printf("O numero e positivo!\n");
    }
    else
    {
        if (numero < 0)
       {
            printf("O numero e negativo!\n");
       }
        else
        {
            printf("Ele e neutro!\n");
        }
    }
    return 0;
}
