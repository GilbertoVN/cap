#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,x3,res;

    printf("Ola, eu sou amigo da Quimica!\nVamos fazer regra de 3?\nDigite um numero\n");
    scanf("%d",&x1);
    printf("Digite o valor a que ele equivale:\n");
    scanf("%d",&x2);
    printf("Digite agora o valor para acharmos o seu equivalente\npela nossa regrinha de 3\n");
    scanf("%d",&x3);

    res = (x2*x3)/x1;

    printf("O numero que voce procura e o %d\n",res);

    return 0;
}
