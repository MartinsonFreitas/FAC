/*Lista IV - Exerc�cio 1

QUEST�O 01: Dado um n�mero inteiro N, fazer um programa que exiba os n�meros pares iguais ou inferiores a N.  
*/

#include <stdio.h>

void main ()
{
	//Declara��o de vari�veis
	int i, n;
	
	//Leitura do valor de N	
	printf ("Entre com o valor de N: ");
	scanf ("%d", &n);
	
	//exibindo os n�meros pares iguais ou inferiores a N
	for (i=2;i<=n;i+=2)
	{
		printf ("%d ", i);
	}
}
