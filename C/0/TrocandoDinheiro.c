#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n5,n10,n20,n50,n100,dinheiro;

    printf("Caixa eletronico inteligente. Procura troco? Voce esta no lugar certo\n");
    printf("Digite quantos reais voce possui (nao trabalho com centavos) para eu te dar ele trocado\n");
    scanf("%d",&dinheiro);

    n100 = dinheiro/100;
    dinheiro = dinheiro - n100*100;
    n50 = dinheiro/50;
    dinheiro = dinheiro - n50*50;
    n20 = dinheiro/20;
    dinheiro = dinheiro - n20*20;
    n10 = dinheiro/10;
    dinheiro = dinheiro - n10*10;
    n5 = dinheiro/5;
    dinheiro = dinheiro - n5*5;
    n1 = dinheiro;

    printf("Com o que voce me deu, eu consigo te dar:\n %d notas de 100, %d notas de 50, %d notas de 20\n %d notas de 10, %d notas de 5 e %d notas de 1",n100,n50,n20,n10,n5,n1);

    return 0;
}
