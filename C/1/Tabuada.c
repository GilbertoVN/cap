#include <stdio.h>

int main ()
{

	int menu,mult;
	int cont = 0;

	printf("Tabuada Amiga do 1 ao 10\nEscolhe o numero para conhecer sua tabuada (De 1 a 10)!\n");
	
	scanf("%d",&menu);

	while((menu <= 0) || (menu > 10))
	{
		printf("Esta nao e uma opcao valida\n Digite uma opcao valida\n");
		scanf("%d",&menu);
	}


	
	switch(menu)
	{
		case 1:
		while(cont <= 10)
		{
			mult = cont*1;
			printf("%d x 1 = %d\n",cont,mult);
			cont++;
		}
		case 2:
		while(cont <= 10)
		{
			mult = cont*2;
			printf("%d x 2 = %d\n",cont,mult);
			cont++;
		}
		break;
		case 3:
		while(cont <= 10)
		{
			mult = cont*3;
			printf("%d x 3 = %d\n",cont,mult);
			cont++;
		}
		break;
		case 4:
		while(cont <= 10)
		{
			mult = cont*4;
			printf("%d x 4 = %d\n",cont,mult);
			cont++;
		}
		break;
		case 5:
		while(cont <= 10)
		{
			mult = cont*5;
			printf("%d x 5 = %d\n",cont,mult);
			cont++;
		}
		break;
		case 6:
		while(cont <= 10)
		{
			mult = cont*6;
			printf("%d x 6 = %d\n",cont,mult);
			cont++;
		}
		break;
		case 7:
		while(cont <= 10)
		{
			mult = cont*7;
			printf("%d x 7 = %d\n",cont,mult);
			cont++;
		}
		break;
		case 8:
		while(cont <= 10)
		{
			mult = cont*8;
			printf("%d x 8 = %d\n",cont,mult);
			cont++;
		}
		break;
		case 9:
		while(cont <= 10)
		{
			mult = cont*9;
			printf("%d x 9 = %d\n",cont,mult);
			cont++;
		}
		break;
		case 10:
		while(cont <= 10)
		{
			mult = cont*10;
			printf("%d x 10 = %d\n",cont,mult);
			cont++;
		}
		break;
	}
	getch();

return 0;
}
