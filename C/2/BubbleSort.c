#include <stdio.h>
#include <stdlib.h>

#define num 8

int main()
{
    int vet[num],clone[num];
    int i,j;
    int menor;

    printf("Ordenacao de Vetores - Estilo Bubble Sort\nDigite %d valores para serem ordenados:\n",num);

    for (i=0;i<num;i++)
    {
        scanf("%d",&vet[i]);
        clone[i] = vet[i];
    }

    for(j=(num-1);j>0;j--)
    {
        for(i=0;i<j;i++)
        {
            if(vet[i]>vet[i+1])
            {
                menor = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = menor;
            }
        }
    }

    printf("\n\nVetor Original:\n");
    for(i=0;i<num;i++)
    {
        printf("%d ",clone[i]);
    }

    printf("\n\nVetor Ordenado:\n");
    for(i=0;i<num;i++)
    {
        printf("%d ",vet[i]);
    }

    printf("\n\nVetor Inverso:\n");
    for(i=num-1
        ;i>=0;i--)
    {
        printf("%d ",vet[i]);
    }

    return 0;
}
