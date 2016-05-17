#include <stdio.h>
#include <stdlib.h>

int main()
{
	
int base,mult;

	printf("Tabuada Amiga - Do 1 ao 10!\n Vamos começar?\n\n\n");

	for(base=0;base<=10;base++)
	{
	for(mult=0;mult<=10;mult++)
	{
		printf("%d x %d = %d\n\n",base,mult,base*mult);
	}
    }
    	getch();
    	return 0;

}
