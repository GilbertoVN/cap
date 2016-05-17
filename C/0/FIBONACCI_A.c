#include <stdio.h>

int main()
{
	int termo,base,serie,a,b,c,n;
	
	printf("Uma serie muito famosa na matematica e a serie de FIBONACCI\n\nAqui vamos te mostrar o n-esimo termo da serie de FIBONACCI\nVeja abaixo:\n\n");
	
	printf("\n\nSerie de Fibonacci:\n\n");
	printf("Termo 0: 1\n");
	printf("Termo 1: 1\n");
	
	for (termo=3;termo<= 10;termo++)
	{
		a = 1;
		b = 1;
			
		for(base=2;base<termo;base++)
		{	
		c = a + b;
		a = b;
		b = c;
		}
		printf("Termo %d: %d\n",base,c);	
	}
	getch();
	return 0;
}
