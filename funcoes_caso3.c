/*
   FAC - 2021/1
   Data: 13/05/2021
   
   Fun��es
   
   Exemplo: calcular o valor de S = 1! + 2! + 3! + ... + 10!
      				
   	Caso 3: com fun��es (com par�metros e com retorno)
*/

//importa��o de bibliotecas
#include <stdio.h>

int fatorial (int n)    
{
	//declara��o de vari�veis
	int i, fat;
	
/*	//lendo o valor de n
	printf ("Entre com um numero: ");
	scanf ("%d", &n);*/
	
	//calculando o fatorial
	for (fat=1, i=2; i<=n; i++)			//fat: 1x2x3x4x5x...x10
	{	
	 								    //fat: 10x9x8x7x6x5...x1
		fat *= i;
	}
	
/*	//exibindo o resultado
	printf ("\n%d! = %d\n\n", n, fat);	*/
	
	return fat;
}

//main
void main ()
{
	//declara��o de vari�veis
	int i, /*f,*/ s = 0;

	for (i=1;i<=10;i++)
	{
		//f = fatorial (i);
		//s += f;
		
		s += fatorial(i);
	}
	
	//exibindo o valor do somat�rio
	printf ("\nSoma = %d", s);
}
