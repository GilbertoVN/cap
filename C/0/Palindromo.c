#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,du,dd,dc,res;

    printf("Sera que os numeros formam um palindromo?\n");
    printf("Digite dois numeros que eu te digo se sao palindromos ou nao.\n");
    scanf("%d" "%d",&n1,&n2);

    dc = (n2/100);
    dd = (n2 - dc*100)/10;
    du = (n2 - dd*10 - dc*100);
    res = (du*100 + dd*10 + dc*1);

    if (res == n1)
    {
        printf("E um palindromo!\n");
    }
    else
    {
        printf("Nao e um palindromo!\n");
    }

    return 0;
}
