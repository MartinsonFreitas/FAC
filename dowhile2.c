/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Estruturas de repeti��o - do .. while
	
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define QUANT 50

//main
void main ()
{
	//declara��o de vari�veis
	int numero;
	
	do
	{		
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
	}
	while (numero != 0);
}
