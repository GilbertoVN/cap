#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 10
#define COLUNAS 10

int main()
{
	int campominado[LINHAS][COLUNAS];
	int jogadas[LINHAS][COLUNAS];
	int codigo, bombas,i,j,rodadas,rodada,vidas,sorteiobombas,a,b;
	
	srand(time(NULL));
	rodadas = 1;
	
	for(j=0;j<COLUNAS;j++)
	{
		for(i=0;i<LINHAS;i++)
		{
			campominado[i][j] = 0;
			jogadas[i][j] = 0;	
		}
	}
	
	printf("===========================================\n\tHabilitar Trapaca?\n\t|- Digite 1 para ATIVAR\n\t|- Digite 0 para CONTINUAR\n===========================================\n");
	scanf("%d",&codigo);
	
	while((codigo != 1) && (codigo != 0))
	{
		printf("\n[ATENCAO]\tOpcao invalida!\n\t|- Digite 1 para ATIVAR\n\t|- Digite 0 para CONTINUAR\n");
		scanf("%d",&codigo);
	}
	
	printf("Vamos jogar campo minado em um campo 10x10?\nDigite quantas bombas terao [De 1 (Facil) ate 99 (Impossivel)]:\n");
	scanf("%d",&bombas);
	
	sorteiobombas = 1;
	
	while(bombas < 1)
	{	
		printf("Tem que ter pelo menos uma bomba, se nao nao e um Campo Minado!\nDigite um valor de bombas valido (ate 99)\n");
		scanf("%d",&bombas);
	}
	
	while(bombas > 99)
	{	
		printf("O campo tem 100 quadrados, voce nao quer ganhar?\nDigite um numero menor que 99 e maior que 1 para as bombas\n");
		scanf("%d",&bombas);
	}
	
	if((bombas <=99) && (bombas >= 75))
		{
			rodada = 100 - bombas;
			printf("Voce escolheu %d bombas e acaba de entrar no MODO DIFICIL!\nVoce tera %d rodadas para completar o jogo.\n(Sem choro!)\n",bombas,rodada);
		}
	else
		{
		printf("Voce escolheu %d bombas e entrou no MODO FACIL do jogo!\nDigite quantas rodadas voce deseja para completar o jogo.\n",bombas);
		scanf("%d",&rodada);
		}
			
		
	printf("Quantas vidas voce deseja ter?\n");
	scanf("%d",&vidas);
	
	if(vidas == 1)
		{
			printf("Desculpa ai Senhor Perfeito!\nBoa sorte com sua unica vida.\n");
		}
		
	printf("\n\n");
	printf("Voce esta preparado?!\n Vamos JOGAR!\n\n");
	
	while(sorteiobombas <= bombas)
	{
		i = rand() % 10;
		j = rand() % 10;

		if(campominado[i][j] == 0)
		{
			campominado[i][j] = 1;
			sorteiobombas++;
		}
	}
			
	while(vidas > 0 && rodada > 0)
	{
		printf("Digite uma linha [De 0 a 9]\n");
		scanf("%d",&a);
		
		while((a<0) || (a>9))
		{
			printf("Digite um valor valido para a linha [De 0 a 9]\n");
			scanf("%d",&a);
		}
		
		printf("Digite uma coluna [De 0 a 9]\n");
		scanf("%d",&b);
		
		while((b<0) || (b>9))
		{
			printf("Digite um valor valido para a coluna [De 0 a 9]\n");
			scanf("%d",&b);
		}
		
		while (jogadas[a][b] == 1)
		{
			printf("\n[ATENCAO]\tVoce ja fez essa jogada!\n");
			
			printf("Digite uma linha [De 0 a 9]\n");
			scanf("%d",&a);
		
			while((a<0) || (a>9))
			{
				printf("Digite um valor valido para a linha [De 0 a 9]\n\n");
				scanf("%d",&a);
			}
		
			printf("Digite uma coluna [De 0 a 9]\n");
			scanf("%d",&b);
		
			while((b<0) || (b>9))
			{
				printf("Digite um valor valido para a coluna [De 0 a 9]\n");
				scanf("%d",&b);
			}
				
		}
		
		if (campominado[a][b] == 1)
		{
			campominado[a][b] = 2;
			vidas--;
		}
		else
		{
			campominado[a][b] = 3;	
		}
		
		jogadas[a][b] = 1;
		
		printf("\n\n----- Rodada: %d -----\n",rodadas);
		
		for(i=0;i<LINHAS;i++)
		{
			for(j=0;j<COLUNAS;j++)
			{
				if(codigo && campominado[i][j] == 1)
				{
					printf("[B]\t");
				}
				else if(campominado[i][j] == 2)
				{
					printf("[X]\t");
				}
				else if(campominado[i][j] == 3)
				{
					printf("[O]\t");
				}
				else
				{
					printf("[ ]\t");
				}
			}
			printf("\n");
		}
		
		rodada = rodada - 1;
		
		if(campominado[a][b] == 2)
		{			
			printf("Voce acertou uma BOMBA! [-1 VIDA]\nVoce ainda tem: %d vidas\nLhe restam %d jogadas\n\n",vidas,rodada);
		}
		else
		{
			printf("UFA, ali nao tinha bomba!\nContinue assim por mais %d jogadas que voce ganha!\n\n",rodada);
		}
		rodadas++;
	}
	
	if(vidas == 0)
	{
		printf("Que pena, suas vidas acabaram!\nTente novamente outra hora.\[Tente diminuir a dificuldade tambem]\n");
	}
	else if(rodada == 0)
	{
		printf("AE! Parabens! Voce ganhou!!! (Musica de vitoria)\nObrigado por jogar.\t~~~~\n");
	}
	
	getch();					
	return 0;
}
