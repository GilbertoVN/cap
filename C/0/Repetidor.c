	/*Declaração de bibliotecas*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
	/*Declaração de variáveis*/
	int numeros[20];											/*Declarado vetor[] do tipo int(inteiro)*/
	int i;														/*Declarado contador para ser utilizado*/
	int ordem;													/*Declarado contador para ser utilizado*/
	
	ordem = 1;													/*Declaração de valor inicial para contador*/
	
	/*Corpo do código - Execução*/
	for (i=0;i<20;i++)											/*Inicio de condicional - critério de parada: quando i for maior que 19*/
	{
		scanf("%d",&numeros[i]); 								/*Enquanto o condicional for válido, executará uma leitura*/
	}															/*Ao chegar aqui, ele incrementa, testa e, se i<20, executa novamente*/
	
	for (i=0;i<20;i++)											/*Inicio de condicional - critério de parada: quando i for maior que 19*/
	{
		printf("Numero %d: %d \n",ordem,numeros[i]); 			/*Enquanto o condicional for válido, executará uma impressão*/
		ordem++;												/*Incremento ao contador de ordenação de impressão*/
	}															/*Ao chegar aqui, ele incrementa, testa e, se i<20, executa novamente*/

	/*Finalização do Programa*/
	getch();													/*Indicador de finalização - qualquer tecla finaliza*/
	return 0;
}
