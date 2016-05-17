/*   Escreva um programa que solicite ao usuário um número inteiro. Imprima este
    número com os dígitos invertidos. Por exemplo:
    > Entrada:
    > 123
    >
    > Saída:
    > 321
    
	Aprimore o exercício anterior. Após inverter os números, diga se o número é
    palíndromo, isto é, pode ser lido da mesma forma da esquerda para a direita,
    e da direita para a esquerda. Por exemplo, 1, 11, 12321 são números
    palíndromos.
	
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
 
 int main()
 { 	
 
 	int numero,clone,ordem,invertido;
 
 	invertido = 0;
 
 	printf("Vamos inverter numeros!\nDigite um numero INTEIRO POSITIVO, diferente de 0, de ate 10 casas, que eu irei inverter ele:\n");
 	scanf("%d",&numero);
 	
 	while (numero<=0)
 	{
 	printf("O numero deve ser INTEIRO POSITIVO e diferente de 0, digite outro numero:");
 	scanf("%d",&numero);
 	}
 	
 	clone = numero; 	
 	
 	while((clone)!=0)
 	{
 		invertido = invertido*10 + clone%10; 		
 		clone = clone/10;
 		
 	}
 	
 	printf("O inverso do numero e %d\n",invertido);
 	
 	if (invertido == numero)
 	{
		printf("O numero fornecido e um PALINDROMO!");
	}
 	
	/*
 	ordem0 = 1;
 	while (invertido * ordem0 < numero) 
 	{
 		ordem *= 10;					// Verificar a multiplicidade por 10, 100 (número de 0's finais)
	}
	if (invertido == numero)
	//
	 
	 (invertido * pow(10,ordem0)) == numero
 	
 	
 	/*
	0
	1
	   10   10
	    /   %
	12  1   2 -> 2
	1   0   1 -> 20 + 1
	0

	     10   10
	      /   %	
	345   34   5 ->       5
	34     3   4 -> 4, 5  54
	3      0   3 -> 543
	
	 
	 
	 
	1230	10	10
			 /	 %
	1230	123	 0	-> 0
	 
	 
	  
 	// 123   321
 	// 
 	
 	ler o número
 	digitos -> ordem
 	
 	1234 -> ordem = 4
 	
 	for (ordem=ordem;ordem-1>=0;ordem--)
 	{
 	 invertido += numero/pow(10,ordem-1);
 	}
 	
 	
 	
 	
 	
 	*/
 	
 	
 	
 	
 	
 	
 	
 	getch();
 	return 0;
 }
