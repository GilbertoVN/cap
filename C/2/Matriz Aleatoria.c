#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 8
#define COLUNAS 8

int main()
{

	int matriz[LINHAS][COLUNAS];
	int i,j,diagonal,somatrianguloinferior;

	srand(time(NULL));
	diagonal = 0;
	somatrianguloinferior = 0;
	
	printf("Matriz 8x8 com numero aleatorios? Aqui nos temos!\n\n\n");
	
	for (i=0;i<LINHAS;i++)
	{
		for(j=0;j<COLUNAS;j++)
		{
			matriz[i][j] = rand() % 101;		
		}
	}
	
	printf("----- Matriz -----\t\n\n");
	
	for (i=0;i<LINHAS;i++)
	{
		for(j=0;j<COLUNAS;j++)
		{
			printf("[%d]\t",matriz[i][j]);
			
			if(i == j)
			{
				diagonal = diagonal + matriz[i][j];
			}
			
			if(i > j)
			{
			somatrianguloinferior = somatrianguloinferior + matriz[i][j];	
			}
		}
	printf("\n\n");
	}
	
	printf("A soma da Diagonal Principal e: %d\n",diagonal);
	printf("A soma de todos os numeros abaixo da Diagonal Principal e: %d\n",somatrianguloinferior);
	
	getch();
	return 0;
}
