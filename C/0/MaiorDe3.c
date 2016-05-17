#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,M,m;
    printf("Me diga tres numeros e eu digo o menor e maior\n");
    scanf("%d" "%d" "%d",&n1,&n2,&n3);
    if (n1 > n2)
    {
        M = n1;
        m = n2;
    }
    else
    {
        M = n2;
        m = n1;
    }
    if (n3 > M)
    {
        M = n3;
    }
    if (n3 < m)
    {
        m = n3;
    }
    printf("O maior numero e o %d e o menor e o %d", M, m);

    return 0;
}
