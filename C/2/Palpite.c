#include <stdio.h>
#include <stdlib.h>

int main()
{

srand(time(NULL));
int num = rand() % 101;
int palpite,tentativas;

	tentativas = 0;

	printf("Sera que voce consegue acertar o numero que eu pensei?\nDigite um numero:\n\n");
	scanf("%d",&palpite);
	
	while(palpite != num)
	{
		if (palpite > num)
		{
			printf("O seu palpite e MAIOR que o numero que eu pensei, tente outro!\n");
			scanf("%d",&palpite);
		}	
		else
		{
			printf("O seu palpite e MENOR que o numero que eu pensei, tente outro!\n");
			scanf("%d",&palpite);
		}
		tentativas++;
	}
	printf("Parabens, voce acertou! O numero sorteado foi o: %d\nVoce acertou ele apos: %d tentativas.\n",num,tentativas);
	
	getch();
	return 0;	

}

