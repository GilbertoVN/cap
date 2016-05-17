#include <stdio.h>

int main()
{
	int termo,base,serie,a,b,c;
	
	printf("Uma serie muito famosa na matematica e a serie de FIBONACCI\n\nAqui vamos te mostrar o n-esimo termo da serie de FIBONACCI\nDigite o termo que voce quer encontrar:\n\n");
	scanf("%d",&termo);
	
	printf("\n\nSerie de Fibonacci:\n\n");
	printf("Termo 0: 0\n");
	printf("Termo 1: 1\n");
	
	a = 0;
	b = 1;
	
		for(base=2;(base-1)<termo;base++)
		{
		 	
		c = a + b;
		a = b;
		b = c;	
		
		printf("Termo %d: %d\n",base,c);
		
		}
	
	getch();
	return 0;
}
