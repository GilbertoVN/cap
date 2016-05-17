#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float X1,Y1,Z1,X2,Y2,Z2,dist;
    printf("Vamos calcular a distânia de dois pontos no R3\n");
    printf("Digite as coordenadas do primeiro ponto\n");
        scanf("%f" "%f" "%f",&X1,&Y1,&Z1);

    printf("Digite as coordenadas do segundo ponto\n");
        scanf("%f" "%f" "%f",&X2,&Y2,&Z2);

    dist = sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1)+(Z2-Z1)*(Z2-Z1));

    printf("A distância entre os pontos e de %f", dist);

    return 0;
}
