	/*Declara��o de bibliotecas*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
	/*Declara��o de vari�veis*/
	int numeros[20];											/*Declarado vetor[] do tipo int(inteiro)*/
	int i;														/*Declarado contador para ser utilizado*/
	int ordem;													/*Declarado contador para ser utilizado*/
	
	ordem = 1;													/*Declara��o de valor inicial para contador*/
	
	/*Corpo do c�digo - Execu��o*/
	for (i=0;i<20;i++)											/*Inicio de condicional - crit�rio de parada: quando i for maior que 19*/
	{
		scanf("%d",&numeros[i]); 								/*Enquanto o condicional for v�lido, executar� uma leitura*/
	}															/*Ao chegar aqui, ele incrementa, testa e, se i<20, executa novamente*/
	
	for (i=0;i<20;i++)											/*Inicio de condicional - crit�rio de parada: quando i for maior que 19*/
	{
		printf("Numero %d: %d \n",ordem,numeros[i]); 			/*Enquanto o condicional for v�lido, executar� uma impress�o*/
		ordem++;												/*Incremento ao contador de ordena��o de impress�o*/
	}															/*Ao chegar aqui, ele incrementa, testa e, se i<20, executa novamente*/

	/*Finaliza��o do Programa*/
	getch();													/*Indicador de finaliza��o - qualquer tecla finaliza*/
	return 0;
}
