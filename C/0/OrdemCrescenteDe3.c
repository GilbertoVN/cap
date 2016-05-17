#include <stdio.h>

int main()
{
    int n1,n2,n3,up,down,mid;

    printf("Ola, eu trabalho e colocar numeros em ordem crescente. Vamos comecar?\n Escreva tres numeros...\n");
    scanf("%d" "%d" "%d",&n1,&n2,&n3);

    if (n1 > n2)
    {
        up = n1;
        down = n2;
    }
    else
    {
        up = n2;
        down = n1;
    }
    if ((n3 > down) || (n3 < up))
    {
        mid = n3;
    }
    if (n3 > up)
    {
        mid = up;
        up = n3;
    }
    if (n3 < down)
    {
           mid = down;
           down = n3;
    }
    printf("Os numeros, em ordem crescente, sao: %d %d %d\n",down,mid,up);

    return 0;
}
