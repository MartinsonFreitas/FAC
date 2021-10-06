/*
   FAC - 2021/1
   Data: 13/05/2021
   
   Fun��es
   
   Exemplos: calcular o fatorial (n!) de um n�mero n.
   
   				Exemplo: 5! = 1x2x3x4x5 = 120
   				
   	Caso 0: sem fun��es
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, n, fat;
	
	//lendo o valor de n
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	//calculando o fatorial
	for (fat=1, i=2; i<=n; i++)			//fat: 1x2x3x4x5x...x10
	{									//fat: 10x9x8x7x6x5...x1
		fat *= i;
	}
	
	//exibindo o resultado
	printf ("\n%d! = %d", n, fat);
}
