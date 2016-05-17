#include <stdio.h>

int main()
{
	int a,b,c,serie,sequencia;
		
	
	printf("Olha o Febonacci ai, ole ole ola!\nDigite qual termo da serie desse cara voce quer que eu te dou!\nEficiente nao?\n");
	scanf("%d",&serie);
	
	a = 0;
	b = 1;
	
	for(sequencia=0;(sequencia+2)<=serie;sequencia++)
	{
	c = b + a;
	a = b;
	b = c;
	}	
	
	printf("O termo procurado e o: %d\n",c);
	
	getch();
	return 0;
}
