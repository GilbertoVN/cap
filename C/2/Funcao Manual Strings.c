#include <stdlib.h>
#include <stdio.h>

int main()
{
	char nome1[50],nome2[50],clone[50],concatenado[100];
	int i,j,tamanho1,tamanho2,igualdade,maior;
/*LER NOMES E ESCREVER*/	
	printf("Digite o nome do aluno 1\n");
	gets(nome1);
	printf("Digite o nome do aluno 2\n");
	gets(nome2);
	
	printf("\n\n%s\n%s\n",nome1,nome2);
/*TAMANHO DOS NOMES*/	
	tamanho1 = 0;
	tamanho2 = 0;
	i = 0;
	igualdade = 0;
	
	while(nome1[i] != '\0')
	{
		tamanho1++;
		i++;
	}
	i = 0;
	
	while(nome2[i] != '\0')
	{
		tamanho2++;
		i++;
	}

	printf("\nO primeiro nome tem %d caracteres enquanto que o segundo tem %d caracteres.\n",tamanho1,tamanho2);
/*IGUALDADE DE NOMES*/	
	if(tamanho1 == tamanho2)
	{
		for(i=0;i<tamanho1;i++)
		{
			if(nome1[i] == nome2[i])
			{
				igualdade++;
			}
		}
	}
	
	if(igualdade == tamanho1)
	{
		printf("\nOs nomes sao iguais!\n");
	}
	else
	{
		printf("\nOs nomes sao diferentes!\n");
	}
/*COPIAR O MAIOR NOME*/	
	i = 0;
	
	if(tamanho1 > tamanho2)
	{
		while(nome1[i] != '\0')
		{
			clone[i] = nome1[i];
			i++;
		}
		clone[i] = '\0';
	}
	else
	{		
		while(nome2[i] != '\0')
		{
			clone[i] = nome2[i];
			i++;
		}
		clone[i] = '\0';
	}
	
	printf("\nO maior nome e o: %s.\n",clone);
/*CONCATENAR*/
		i = 0;
		while(nome1[i] != '\0')
		{
			concatenado[i] = nome1[i];
			i++;
		}
		
		j = 0;
		
		while(nome2[j] != '\0')
		{
			concatenado[i] = nome2[j];
			j++;
			i++;
		}
		concatenado[i] = '\0';
	
	
	printf("Os nomes concatenados ficam: %s",concatenado);
	
	return 0;
}
