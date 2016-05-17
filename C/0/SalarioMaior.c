#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome1[256], nome2[256];
    int sal1,sal2;

    printf("Quem do casal ganha mais?\n");
    printf("Digite o nome da primeira pessoa e seu salario\n");
    scanf("%s",&nome1,&sal1);
    printf("Digite o nome da segunda pessoa e seu salario\n");
    scanf("%s" "%d",&nome2,&sal2);

    if (sal1 > sal2)
    {
        printf("Quem ganha mais e o %s e quem ganha menos recebe %d",nome1,sal2);
    }
    else
    {
        printf("Quem ganha mais e o %s e quem ganha menos recebe %d",nome2,sal1);
    }

    return 0;
}
