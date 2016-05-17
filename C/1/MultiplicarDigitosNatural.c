#include <stdlib.h>
#include <stdio.h>

int main()
{
	int numero,mult,clone;
	
	printf("Vamos brincar com os numeros!\nMe diga um numero NATURAL que eu irei lhe dizer\nqual a multiplicacao de todos os seus numeros\nEx: Se voce me dar 123, eu te darei 6, pois 6 = 1 x 2 x 3\n");
	scanf("%d",&numero);
	
	clone = numero;
	mult = 1;
	
	while ((clone)!=0)
	{
		if ((clone%10)==0)
		{
		mult = mult;
		clone = clone/10;
		}
		else
		{
		mult = mult*(clone%10);
		clone = clone/10;
		}
	}		
	
	printf("O numero dado e o: %d\nO multiplo de seus digitos e: %d",numero,mult);	
	
	getch();
	return 0;
}



/*
154

154 /10 = 15 % 4
15 / 10 =  1 % 5
1 / 10  =  0 % 1
*/
