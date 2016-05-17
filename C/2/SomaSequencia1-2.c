#include <stdio.h>

int main()
{
	float dividendo,divisor,soma;
	
	printf("Vamos calcular uma sequencia legal!\n\n(Sequencia do Tipo: 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50)\n\n");
	
	soma = 0.0;
	
	getch();
	
	dividendo=1;
	for(divisor=1;divisor<=50;divisor++)
	{
		soma = soma + (dividendo/divisor);
		dividendo+=2;
	}
	
	printf("A soma e: %.4f\n",soma);	
	
	getch();
	return 0;
}
