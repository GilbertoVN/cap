#include <stdio.h>

int main()
{
	int dados[30];
	int maior,contador,ordem,posicao;
	
	maior = 0;
	ordem = 1;
	
	printf("Qual o maior numero que voce me dara?\nDigite 30 que eu te falarei!\n");
	
	for(contador=0;contador<30;contador++)
	{
		printf("Numero %d:  ",ordem);
		scanf("%d",&dados[contador]);
		
		ordem++;
		
		if(dados[contador]>maior)
		{
			maior = dados[contador];
			posicao = contador;
		}
	}
	
	printf("O maior numero dado e o: %d, que foi o %d numero digitado.",maior,posicao+1);
		
	getch();
	return 0;
}
