/*
	FAC - Professor Leonardo Vianna
	Data: 22/04/2021
	
	Exemplo: funcionamento de dois fors aninhados
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, j;

	for (i=1;i<=10;i++)
	{
		for (j=10;j>=1;j--)
		{
			printf ("%d %d\n", i, j);
		}
	}
}
