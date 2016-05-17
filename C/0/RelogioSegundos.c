#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo1,hh,mm,ss;

    printf("Sou um relogio inteligente, converto de segundos para hora, minuto e segundos \n");
    printf("Digite quantos segundos eu tenho e vamos brincar!\n");
    scanf("%i",&tempo1);

    hh = tempo1/3600;
    tempo1 = tempo1 - hh*3600;
    mm = tempo1/60;
    tempo1 = tempo1 - mm*60;
    ss = tempo1;

    printf("Voce me deu %d horas, %d minutos e %d segundos",hh,mm,ss);

    return 0;
}
