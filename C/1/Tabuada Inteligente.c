#include <stdio.h>

int main ()
{
	int valor,mult;
	int alcance = 0;
	
	printf("[[[Tabuada Inteligente]]]\nDigite um numero que sera a nossa base (BASE):\n");
	scanf("%d",&valor);
	printf("Agora digite ate qual numero esse numero seja multiplicado (ALCANCE):\n");
	scanf("%d",&mult);

	while(valor <= 0)
	{
		printf("Valor para BASE invalido, digite outro!\n");
		scanf("%d",&valor);
	}
	while(mult <= 0)
	{
		printf("Valor para ALCANCE invalido, digite outro!\n");
		scanf("%d",&mult);
	}
	while(alcance <= mult)
	{
		printf("%d x %d = %d\n",alcance,valor,alcance*valor);
		alcance++;
	}
	
	getch();

return 0;
}
