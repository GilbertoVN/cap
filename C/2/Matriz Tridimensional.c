#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 5
#define COLUNAS 5
#define FACES 5

int main()
{
	int base[LINHAS][COLUNAS][FACES];
	int opcao,i,negativos;
	int x,y,z,xn,yn,zn;
	int negativo;
	int xneg[256],yneg[256],zneg[256];
	
	srand(time(NULL));
	
	i = 1;
	negativos = 0;
	xn = 0;
	yn = 0;
	zn = 0;
	
	printf("Escolha a opcao:\n1 - Matriz Povoada com 0\n2 - Matriz Povoada Aleatoriamente [+ Num Negativos]\n");
	scanf("%d",&opcao);
	
	while((opcao != 1) && (opcao != 2))
	{
		printf("Opcao invalida, digite 1 ou 2.");
		scanf("%d",&opcao);
	}
	
	switch(opcao)
	{
		case 1:
			
		for(z=0;z<FACES;z++)
		{
			for(y=0;y<COLUNAS;y++)
			{
				for(x=0;x<LINHAS;x++)
				{
					base[x][y][z] = 0;
				}
			}
		}	
			
		
		for(z=0;z<FACES;z++)
		{
			printf("\n => Face %d:\n",i);
			for(y=0;y<COLUNAS;y++)
			{
				for(x=0;x<LINHAS;x++)
				{
					printf("%d\t",base[x][y][z]);
				}
				printf("\n");
			}
			i++;
			printf("\n");
		}
		
		
		
		break;
		
		case 2:
			
		for(z=0;z<FACES;z++)
		{
			for(y=0;y<COLUNAS;y++)
			{
				for(x=0;x<LINHAS;x++)
				{
					negativo = rand() % 50;
					base[x][y][z] = (rand() % 101) - negativo;

					
					if(base[x][y][z] < 0)
					{
						negativos++;
						xneg[xn] = x;
						xn++;
						yneg[yn] = y;
						yn++;
						zneg[zn] = z;
						zn++;
					}
				}
			}
		}
		
		for(z=0;z<FACES;z++)
		{
			printf("\n => Face %d:\n",i);
			for(y=0;y<COLUNAS;y++)
			{
				for(x=0;x<LINHAS;x++)
				{
					printf("%d\t",base[x][y][z]);
				}
				printf("\n");
			}
			i++;
			printf("\n");
		}
		
		printf("Ha %d numeros negativos nessa matriz.\nEles estao ocupando as posicoes:\n",negativos);


		for(x=0;x<xn;x++)
		{
			printf("|[%d]\t [%d]\t [%d]|\n",xneg[x],xneg[x],xneg[x]);
		}

								
		break;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
	return 0;
}
