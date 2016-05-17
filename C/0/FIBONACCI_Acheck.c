#include <stdio.h>

int main()
{
	int termo,base,serie,a,b,c,n;
	
	printf("Uma serie muito famosa na matematica e a serie de FIBONACCI\n\nAqui vamos te mostrar o n-esimo termo da serie de FIBONACCI\nVeja abaixo:\n\n");
	
	printf("\n\nSerie de Fibonacci:\n\n");
	printf("Termo 0: 1\n");
	printf("Termo 1: 1\n");
	
	for (termo=0;termo<=26;++termo)
	{
		a = 1;
		b = 1;	
		c = -1;	
		for(base=2;base<termo;base++)
		{
		 	
		c = a + b;
		a = b;
		b = c;	
		
		
		}
		if (c != -1)
		{
			printf("Termo %d: %d\n",base-1,c);				
		}
		
	}
	getch();
	return 0;
}
