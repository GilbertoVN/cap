#include <stdio.h>

int main()
{
	int notas[50];
	int contador,ordem,soma;
	
	ordem = 1;
	
	for (contador=0;contador<50;contador++)
	{
		printf("Digite a nota do aluno %d (entre 0 e 10)\n",ordem);	
		scanf("%d",&notas[contador]);
		while ((notas[contador]<0) || (notas[contador]>10))
		{
			printf("Digite uma nota valida, entre 0 e 10, para o aluno %d\n",ordem);
			scanf("%d",&notas[contador]);
		}
		ordem++;
		soma = soma + notas[contador];		
	}	
	
	printf("A media da sala de %d alunos foi: %d",ordem-1,(soma/ordem));	
	
	getch();
	return 0;
}
