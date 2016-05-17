#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nome1[40],nome2[40],copia[40];
	int tamanho1,tamanho2,igualdade;
	
	printf("Digite o nome do aluno 1\n");
	gets(nome1);
	printf("Digite o nome do aluno 2\n");
	gets(nome2);
	
	printf("\n\n%s\n%s\n",nome1,nome2);
	
	tamanho1 = strlen(nome1);
	tamanho2 = strlen(nome2);
	
	printf("\nO primeiro nome tem %d caracteres, enquanto que o segundo tem %d caracteres\n\n",tamanho1,tamanho2);
	
	if (tamanho1 > tamanho2)
	{
		strcpy(copia,nome1);
	}
	else
	{
		strcpy(copia,nome2);	
	}
	
	printf("\nO maior nome e o %s\n\n",copia);
	
	if (tamanho1 > tamanho2)
	{
		strcat(copia,nome2);
	}
	else
	{
		strcat(copia,nome1);	
	}
	
	igualdade = strcmp(nome1,nome2);
	
	if(igualdade == 0)
	{
		printf("\nOs nomes inseridos sao iguais!\n");
	}
	else
	{
		printf("Os nomes inseridos sao diferentes!");
	}
	
	printf("\nOs nomes concatenados ficam: %s\n",copia);
	
	return 0;
}
