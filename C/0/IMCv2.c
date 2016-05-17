#include <stdio.h>
#include <math.h>

int main()
{
    float altura,massa,imc,perda,massaideal;

    printf("Calculadora de IMC avancada\nDigite sua massa (em Kg):\n");
    scanf("%f",&massa);
    printf("Digite sua altura em Metros (utilize . [ponto] como separador):\n");
    scanf("%f",&altura);

    imc = massa/pow(altura,2);

    printf("Seu IMC e %f \n",imc);

    if (imc <= 20.2)
    {
        printf("Voce esta abaixo do Peso.\n");
        massaideal = 26*(pow(altura,2));
        perda = massaideal - massa;
        printf("Voce pode engordar %.2f Kg",perda);

    }
    if ((imc <= 26.2) && (imc > 20.2))
    {
        printf("Voce esta no peso normal.\n");
    }
    if ((imc <= 27.6) && (imc > 26.2))
    {
        printf("Voce esta um pouco acima do peso.\n");
        massaideal = 26*(pow(altura,2));
        perda = massa - massaideal;
        printf("Voce precisa perder %.2f Kg",perda);
    }
    if ((imc <= 31) && (imc > 27.6))
    {
        printf("Voce esta acima do peso ideal.\n");
        massaideal = 26*pow(altura,2);
        perda = massa - massaideal;
        printf("Voce precisa perder %.2f Kg",perda);
    }
    if (imc > 31)
    {
        printf("Voce esta obeso.\n");
        massaideal = 26*pow(altura,2);
        perda = massa - massaideal;
        printf("Voce precisa perder %.2f Kg",perda);
    }


    getch();


    return 0;
}
