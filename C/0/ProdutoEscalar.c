#include <stdio.h>
#include <stdlib.h>

int main()
{
int x1,x2,y1,y2,pe;

    printf("Vamos calcular o produto escala de dois vetores?\n");
    printf("Diga as coordenadas do primeiro vetor:\n");
    scanf("%d" "%d",&x1,&y1);
    printf("Diga as coordenadas do segundo vetor:\n");
    scanf("%d" "%d",&x2,&y2);

    pe = (x1*x2)+(y1*y2);

    printf("O produto escalar e dado por: %d \n",pe);

    return 0;
}
