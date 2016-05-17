#include <stdio.h>
#include <stdlib.h>

#define LINHAS 4
#define COLUNAS 5

int main()
{
	int numero[LINHAS][COLUNAS];
	int i,j,maior,menor,menori,menorj,maiori,maiorj,negativos = 0,col3 = 0;
		
	printf("Vamos analisar uma matriz 4x5!\nForneca os valores dela, ao todo 20.\n(A matriz sera orientada por Linhas)\n");		

	for(j=0;j<COLUNAS;j++)
	{
		for(i=0;i<LINHAS;i++)
		{
			scanf("%d",&numero[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<LINHAS;i++)
	{
		printf("Linha %d:  ",(i+1));
		
		for(j=0;j<COLUNAS;j++)
		{
			printf("%d ",numero[i][j]);	
		}	
		printf("\n");
	}
	
	printf("\n\nMatriz dos Dados:\n");
	
	for(i=0;i<LINHAS;i++)
	{
		for(j=0;j<COLUNAS;j++)
		{
			printf("[%d]\t",numero[i][j]);
		}
		printf("\n");
	}
	
	maior = numero[0][0];
	menor = numero[0][0];
	maiori = 0;
	maiorj = 0;
	menori = 0;
	menorj = 0;
	
	for(j=0;j<COLUNAS;j++)
	{
		for(i=0;i<LINHAS;i++)
		{
			if(numero[i][j] > maior)
			{
				maior = numero[i][j];
				maiori = i;
				maiorj = j;
			}
			else if(numero[i][j] < menor)
			{
				menor = numero[i][j];
				menori = i;
				menorj = j;
			}
			
			if(numero[i][j] < 0)
			{
				negativos++;
			}
			
			if(j == 2)
			{
				col3 = col3 + numero[i][j];
			}
		}
	}
	
	printf("\n\nO maior numero digitado e o: %d [Pos: %d %d]\n e o menor numero digitado e o: %d [Pos: %d %d]\n\n",maior,maiori,maiorj,menor,menori,menorj);
	printf("A soma dos elementos da terceira coluna e: %d\n\n",col3);
	printf("Foram inseridos %d numeros negativos e %d numeros positivos.\n",negativos,(20-negativos));
	
	return 0;
}
