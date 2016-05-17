#include <stdio.h>

int main ()
{

getch();

	int base = 0;
	int mult = 0;
	
	while(base <= 10)
{
	while(mult <= 10)
	{
	printf("%d x %d = %d\n",mult,base,mult*base);
	mult++;
	}
	
	printf("\n\n");
	mult = 0;
	base++;
}

getch();

return 0;
}
