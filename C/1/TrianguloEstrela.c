#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numero,linhas,colunas;
	
	printf("Ola, me chamo Desenhador, eu gosto de desenhar!\nHoje eu quero desenhar um triangulo, me ajuda?\nDigite um numero NATURAL entre 2 e 10\ne eu desenharei um triangulo especial para voce!\nBrinca comigo!!!\n\n");
	scanf("%d",&numero);
	
	while ((numero<2) || (numero>10))
	{
		printf("Ei, eu te disse que o numero tem que ser NATUAL\ne entre DOIS (2) e DEZ (10)\ne nao vale trapacear!\nDigite um numero valido desta vez, por favor!\n");
		scanf("%d",&numero);
	}
	
	for(linhas=1;linhas<=numero;linhas++)
	{
		for(colunas=1;colunas<=linhas;colunas++)
		{
			printf("*");
		}
		printf("\n");		
	}
		
	getch();
	return 0;
}
