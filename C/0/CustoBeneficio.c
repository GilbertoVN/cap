#include <stdio.h>
#include <stdlib.h>

typedef int bool;
#define true 1
#define false 0

int main()
{
    bool cb;
    int p1,p2,g1,g2;
    float cb1,cb2;
    printf("Seja bem vindo ao modulo de custo benefício!\n");
    printf("Vamos comparar dois produtos:\n");
    printf("Digite o valor (em reais) e a massa (em gramas) do primeiro produto:\n");
    scanf("%f" "%d",&p1,&g1);
    printf("Digite o valor (em reais) e a massa (em gramas) do segundo produto:\n");
    scanf("%f" "%d",&p2,&g2);

    cb1 = (p1 / g1);
    cb2 = (p2 / g2);
    cb = (cb2 > cb1);

    if (cb2 > cb1)
    {
        printf("O que possui o melhor custo x beneficio e o primeiro? %d \n",cb);
        printf("Exato, o primeiro produto possui o melhor custo x beneficio!");
    }
    else
    {
        printf("O que possui o melhor custo x beneficio e o primeiro? %d \n",cb);
        printf("Errado, quem possui o melhor custo x beneficio e o segundo!");
    }

    return 0;
}
