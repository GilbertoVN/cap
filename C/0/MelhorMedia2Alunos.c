#include <stdio.h>

int main()
{
    int n1,n2,p1,p2,m1,m2;
    char nome1[21],nome2[21];

    printf("Quem foi melhor na escola?\nDigite o nome de duas pessoas que terao suas notas comparadas:\n");
    scanf("%s" "%s",&nome1,&nome2);
    printf("Digite agora as duas notas do %s\n",nome1);
    scanf("%d" "%d",&n1,&n2);
    printf("Digite agora as duas notas do %s\n",nome2);
    scanf("%d" "%d",&p1,&p2);

    m1 = (n1+n2)/2;
    m2 = (p1+p2)/2;

    if (m1 > m2)
    {
        printf("O aluno %s teve media superior a do aluno %s\n",nome1,nome2);
    }
    else
    {
        printf("O aluno %s teve media superior a do aluno %s\n",nome2,nome1);
    }

    return 0;
}
