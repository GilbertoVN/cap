#include <stdio.h>

int main()
{
	int termo,serie,base,c,b,a;
	
	printf("Uma serie muito famosa na matematica e a serie de FIBONACCI\n\nAqui vamos te mostrar o n-esimo termo da serie de FETUCCINE\nQue ao contrario de somar igual a FIBONACCI, ela subtrai nos termos pares\nDigite o termo que voce quer encontrar:\n\n");
	scanf("%d",&termo);
	
	printf("\n\nSerie de Fetuccine [Fibonacci]:\n\n");
	printf("Termo 1: 1\n");
	printf("Termo 2: 1\n");
	
	a = 1;
	b = 1;
	
		for(base=3;base<=termo;base++)
		{
	
		if (base%2==0)
		{
			c = b - a;
			a = b;
			b = c;
		}
		else
		{ 	
			c = b + a;
			a = b;
			b = c;
		}
			
		printf("Termo %d: %d\n",base,c);
		
		}
	
	getch();
	return 0;
}
