#include <stdio.h>

int main()
{
	int vetor1[5],vetorproduto[5];
	int i,ordem,mult;
	
	i = 0;
	ordem = 0;
	
	printf("Soma de Vetores(De programacao): Digite os dados de um vetor (5 ao todo):\n");
	
	while (i<5)
	{
		scanf("%d",&vetor1[i]);
		i++;		
	}	
	
	i = 0;
	
	printf("Digite por quanto ele sera multiplicado:\n");
	scanf("%d",&mult);
		
	while (i<5)
	{
		vetorproduto[i] = vetor1[i]*mult;
		printf("Campo %d = %d\n",ordem,vetorproduto[i]);
		i++;
		ordem++;
	}
	
	getch();
	return 0;
}
