#include <stdio.h>

int main()
{
	int dia,mes;
	
	printf("Qual o seu Signo?\nDigite o dia e depois o mes para saber seu signo\n");
	scanf("%d" "%d",&dia,&mes);
	
	while((dia<1) || (dia>31))
	{
		printf("O dia digitado e invalido, digite um dia valido\n");
		scanf("%d",&dia);
	}
	
		while((mes<1) || (mes>12))
	{
		printf("O mes digitado e invalido, digite um mes valido\n");
		scanf("%d",&mes);
	}
	
	if (((dia >= 21) && (mes == 3)) || ((dia <= 20) && (mes == 4)))
	{
		printf("Seu Signo e Aries\n");
	}
	
	if (((dia >= 21) && (mes == 4)) || ((dia <= 21) && (mes == 5)))
	{
		printf("Seu Signo e Touro\n");
	}
	
	if (((dia >= 22) && (mes == 5)) || ((dia <= 21) && (mes == 6)))
	{
		printf("Seu Signo e Gemeos\n");
	}
	
	if (((dia >= 21) && (mes == 6)) || ((dia <= 23) && (mes == 7)))
	{
		printf("Seu Signo e Cancer\n");
	}
	
	if (((dia >= 24) && (mes == 7)) || ((dia <= 23) && (mes == 8)))
	{
		printf("Seu Signo e Leao\n");
	}
	
	if (((dia >= 24) && (mes == 8)) || ((dia <= 23) && (mes == 9)))
	{
		printf("Seu Signo e Virgem\n");
	}
	
	if (((dia >= 24) && (mes == 9)) || ((dia <= 23) && (mes == 10)))
	{
		printf("Seu Signo e Libra\n");
	}
	
	if (((dia >= 24) && (mes == 10)) || ((dia <= 22) && (mes == 11)))
	{
		printf("Seu Signo e Escorpiao\n");
	}
	
	if (((dia >= 23) && (mes == 11)) || ((dia <= 21) && (mes == 12)))
	{
		printf("Seu Signo e Sagitario\n");
	}
	
	if (((dia >= 21) && (mes == 12)) || ((dia <= 20) && (mes == 1)))
	{
		printf("Seu Signo e Capricornio\n");
	}

	if (((dia >= 21) && (mes == 1)) || ((dia <= 19) && (mes == 2)))
	{
		printf("Seu Signo e Aquario\n");
	}
	
	if (((dia >= 20) && (mes == 2)) || ((dia <= 20) && (mes == 3)))
	{
		printf("Seu Signo e Peixes\n");
	}

	getch();
	return 0;
}
	
