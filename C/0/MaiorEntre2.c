#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que solicite dois números e exiba qual é o maior dos dois
    valores */

int main()
{
    int n1,n2;

    printf("Qual numero e maior?\nMe diga dois numeros que eu te falo!\n");
    scanf("%d" "%d",&n1,&n2);

    if (n1 > n2)
    {
        printf("O maior e o %d (primeiro).\n",n1);
    }
    else
    {
        printf("O maior e o %d (segundo).\n",n2);
    }

    return 0;
}
