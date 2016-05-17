#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia um distância em metros, e converta-a para
    centímetros, polegadas, pés, jardas, e milhas. Mostre os valores obtidos
    acompanhados de suas respectivas unidades de medida. */

int main()
{
    float metro,cm,pol,pes,jardas,milhas;

    printf("Vamos converter Metros em outras unidades de medida?\nDigite quantos metros voce quer que eu converta em:\n 1- Centimetros 2- Polegadas\n3- Pes 4- Jardas 5- Milhas\n");
    scanf("%f",&metro);

    cm = metro*100;
    pol = metro*39.3701;
    pes = metro*3.28084;
    jardas = metro*1.09361;
    milhas = metro*0.000621371;

    printf("Voce me deu %f\n",metro);
    printf("O que equivale a:\n%.2f centimetros\n%.2f polegadas\n%.2f pes\n%.2f jardas\n%.4f milhas",cm,pol,pes,jardas,milhas);

    return 0;
}
