#include <stdio.h>

int main()
{
	int idade;
	
	printf("A qual classe eleitoral voce pertence?\nDigite sua idade para descobrir!\n\n");
	scanf("%d",&idade);
	
	if(idade<16)
	{
		printf("Voce e NAO VOTANTE\n");
		idade = 0;
	}
	
	if((idade>=18) && (idade<=65))
	{
		printf("Voce e ELEITOR OBRIGATORIO\n");
		idade = 0;
	}
	
	if(((idade>=16) && (idade<18)) || (idade>65))
	{
		printf("Voce e ELEITOR OPCIONAL\n");
		idade = 0;		
	}
		
	getch();
	return 0;
}
