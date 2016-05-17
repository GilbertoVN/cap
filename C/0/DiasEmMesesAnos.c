#include <stdio.h>

int main()
{
    int ano,mes,dia;

    printf("Me diga uma quantidade qualquer de dias e eu converto isso em anos, meses e o resto que sobrar em dias\n");
    scanf("%d",&dia);

    ano = dia/365;
    dia = dia - ano*365;
    mes = dia/30;
    dia = dia - mes*30;

    printf("Voce me deu %d anos, %d meses e %d dias!\n",ano,mes,dia);

    return 0;
}
