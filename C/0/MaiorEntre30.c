#include <stdio.h>

int main()
{
	int dados[30];
	int maior,contador,ordem;
	
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
		}
	}
	
	printf("O maior numero dado e o: %d",maior);
		
	getch();
	return 0;
}
