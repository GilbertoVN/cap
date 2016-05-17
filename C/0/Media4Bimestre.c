#include <stdio.h>

int main()
{
    int n1,n2,n3,n4,media,mediaesc;


    printf("Qual foi sua media no ano?\n");
    printf("Digite a media de sua escola.\n\n");
    scanf("%d",&mediaesc);
    printf("Digite as notas dos 4 bimestres.\n\n");
    scanf("%d" "%d" "%d" "%d",&n1,&n2,&n3,&n4);

    media = (n1+n2+n3+n4)/4;

    printf("Sua media foi %d\n",media);

    if (media < mediaesc)
    {
        printf("Voce repetiu de ano.\n");
    }
    else
    {
        printf("Voce passou de ano!\n");
    }

    return 0;
}
