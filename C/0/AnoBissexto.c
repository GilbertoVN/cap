#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int ano;

    printf("Vamos calcular se o ano e bissexto ou nao\n");
    printf("Digite o ano:\n");
    scanf("%d", &ano);

    if ((ano%4==0) && (ano%100!=0))
    {
    printf("O ano %d e bissexto!", ano);
    }
    else
    {
            if (ano%400==0)
            {
                printf("O ano %d e bissexto!", ano);
            }
            else
            {
                printf("O ano nao e bissexto");
            }
    }
    return 0;
}
