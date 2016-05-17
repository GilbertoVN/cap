#include <stdio.h>

int main()
{
	int numero,divisores,contador;
	
	printf("Vamos ver se o numero e primo!\nDigite um numero para que possamos verifica-lo:\n");
	scanf("%d",&numero);
	
	divisores = 0;
	contador = 1;
	
	while (contador <= numero)
	{
		
		if (numero%contador == 0)
		{
			printf("Divisor: %d\n",contador);
			divisores++;
		}
		contador++;
	}

	if (divisores == 2)
	{
		printf("O numero e PRIMO!\n");
	}	
	else
	{
		printf("O numero NAO e PRIMO!\n");	
	}
	
	getch();	
	return 0;
}
