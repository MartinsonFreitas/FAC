/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Estruturas de repeti��o - do..while	
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define QUANT 50

//main
void main ()
{
	//declara��o de vari�veis
	int i = 1;
	
	//variando todos os valores do intervalo de 1 a QUANT
	do
	{		
		printf ("%d ", i);
		i++;
	} 
	while (i<=QUANT);
}
