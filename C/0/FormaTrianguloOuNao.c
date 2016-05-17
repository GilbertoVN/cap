#include <stdio.h>
#include <stdlib.h>

/* Solicite ao usuário três medidas de lados. Informe se, com as medidas
    informadas, é possível construir um triângulo. Se for possível, indique se o
    triângulo formado é equilátero, isósceles, ou escaleno. */

int main()
{
    int lado1,lado2,lado3;

    printf("Sera que vamos conseguir formar um triangulo?\nInforme tres coordenadas e eu digo se forma um triangulo!\n");
    scanf("%d" "%d" "%d",&lado1,&lado2,&lado3);

    if ((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2));
        {
            if (lado1 == lado2 == lado3)
            {
                printf("Nao so e um triangulo como e um triangulo equilatero!\n");
            }
            else
            {
                if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3))
                {
                    printf("Nao so e um triangulo como e um triangulo isosceles!\n");
                }
                else
                {
                    if ((lado1 >= lado2 + lado3) || (lado2 >= lado1 + lado3) || (lado3 >= lado1 + lado2))
                        {
                            printf("Nao e um triangulo!");
                        }
                    else
                    {
                        printf("E um triangulo!");
                    }
                }
            }
        }

    return 0;
}
