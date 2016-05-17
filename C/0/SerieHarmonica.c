#include <stdio.h>

int main()
{

	int numero;
	double soma,divisor;

	soma = 0.0;
	
	printf("Quer saber mais sobre a serie Harmonica?\nDigite um numero e te daremos o valor da soma da sequencia\n\nLembrando que a Sequencia Harmonica e dada por 1/1 + 1/2 + 1/3 + ... + 1/N\nSendo N o numero fornecido por voce!\n\n");	
	scanf("%d",&numero);
	
	while(numero<=0)\
	{
		printf("Digite um numero valido (maior que 0)!");
		scanf("%d",&numero);
	}

	for(divisor=1;divisor<=numero;divisor++)
	{
		soma = soma + (1/divisor);
	}
	
	printf("A soma e %f",soma);
	
	getch();
	return 0;
}
