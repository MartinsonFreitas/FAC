/*Lista IV - Exerc�cio 3

QUEST�O 03: Fazer um programa que exiba todos os divisores de um n�mero fornecido pelo usu�rio. 
*/

#include <stdio.h>

void main ()
{
	//Declara��o de vari�veis
	int i, n;
	
	//Leitura do valor de N	
	printf ("Entre com o valor de N: ");
	scanf ("%d", &n);
	
	//verificando os divisores de N
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			printf ("%d ", i);
		}
	}	
}
