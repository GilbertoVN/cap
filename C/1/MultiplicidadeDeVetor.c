#include <stdio.h>

int main()
{
	
	int escolha,x1,x2,y1,y2,z1,z2;
	
	printf("Produto Escalar de Dois Vetores!\nO seu vetor possui 1, 2 ou 3 coordenadas?\n");
	scanf("%d",&escolha);
	
	while((escolha!=2) && (escolha!=3) && (escolha!=1))
	{
		printf("Numero de coordenadas invalida\nO seu vetor possui UMA (1), DUAS (2) ou TRES (3) coordenadas?\n");
		scanf("%d",&escolha);
	}
		
	switch(escolha)
	{
	case 1:
	printf("Seu vetor possui 2 coordenadas, digite a coordenada X do primeiro vetor!\n");
	scanf("%d",&x1);
	printf("Digite a coordenada X do segundo vetor!\n");
	scanf("%d",&x2);
	
	printf("O produto escalar do seu vetor é: %d",((x1*x2)));
	
	break;	
		
	case 2:
	printf("Seu vetor possui 2 coordenadas, digite as coordenadas X e Y do primeiro vetor!\n");
	scanf("%d" "%d",&x1,&y1);
	printf("Digite as coordenadas X e Y do segundo vetor!\n");
	scanf("%d" "%d",&x2,&y2);
	
	printf("O produto escalar do seu vetor é: %d",((x1*x2)+(y1*y2)));
	
	break;
	case 3:
	printf("Seu vetor possui 3 coordenadas, digite as coordenadas X, Y e Z do primeiro vetor!\n");
	scanf("%d" "%d" "%d",&x1,&y1,&z1);
	printf("Digite as coordenadas X, Y e Z do segundo vetor!\n");
	scanf("%d" "%d",&x2,&y2,&z2);
	
	printf("O produto escalar do seu vetor é: %d",((x1*x2)+(y1*y2)+(z1*z2)));	
			
	break;
	}	
		
	getch();
	return 0;
}
