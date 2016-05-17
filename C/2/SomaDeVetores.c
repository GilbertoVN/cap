#include <stdio.h>

int main()
{
	int vetor1[5],vetor2[5],vetorsoma[5];
	int i,ordem;
	
	i = 0;
	ordem = 0;
	
	printf("Soma de Vetores(De programacao): Digite os dados do primeiro vetor (5 ao todo):\n");
	
	while (i<5)
	{
		scanf("%d",&vetor1[i]);
		i++;		
	}	
	
	i = 0;
	
	printf("Digite os dados do segundo vetor (5 ao todo):\n");
	
	while (i<5)
	{
		scanf("%d",&vetor2[i]);
		i++;	
	}
	
	i = 0;
		
	while (i<5)
	{
		vetorsoma[i] = vetor1[i] + vetor2[i];
		printf("Campo %d = %d\n",ordem,vetorsoma[i]);
		i++;
		ordem++;
	}
	
	getch();
	return 0;
}
