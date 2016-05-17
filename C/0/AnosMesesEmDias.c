#include <stdio.h>

int main()
{
    int ano,dia,mes;


        printf("Quantos dias tem em...?\nDigite, primeiro, um numero qualquer de anos\nDepois, digite um numero qualquer de dias\nApos isso irei te dizer quanto isso equivale em dias!\n");
        scanf("%d" "%d",&ano,&mes);

        mes = mes + ano*12;
        dia = mes*30;

        printf("Voce me deu um total de %d dias\n",dia);

        return 0;
}
