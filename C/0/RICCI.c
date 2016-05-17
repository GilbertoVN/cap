#include <stdio.h>

int main()
{
	int termo,base,serie,a,b,c,primeiro,segundo;
	
	printf("Uma serie muito famosa na matematica e a serie de FIBONACCI\n\nUma serie parecida e a serie de RICCI\nDigite o termo que voce quer encontrar dessa serie:\n");
	scanf("%d",&termo);
	printf("Digite tambem os dois primeiros termos dela:\n\n");
	scanf("%d" "%d",&primeiro,&segundo);
	
	printf("\n\nSua Serie de Ricci:\n\n");
	printf("Termo 0: %d\n",primeiro);
	printf("Termo 1: %d\n",segundo);
	
	a = primeiro;
	b = segundo;
	
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
