/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Lista de Exerc�cios III
	
	QUEST�O 04: Fa�a um programa que leia 300 n�meros reais. Ao final, 
	devem ser exibidas as seguintes informa��es:
	
	a) A quantidade de valores negativos digitados;
	b) A m�dia dos valores positivos.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define QUANT 300

//main
void main ()
{
	//declara��o de vari�veis
	int i, quantNeg=0, quantPos=0;
	float numero, somaPos=0, mediaPos;
	
	//lendo os valores
	for (i=1;i<=QUANT;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%f", &numero);
		
		//verificando se o n�mero � negativo
		if (numero < 0)
		{
			quantNeg++; //quantNeg = quantNeg + 1;  ou quantNeg += 1;
		}
		else
		{
			//testando se � positivo (afinal, pode ser zero tamb�m)
			if (numero > 0)
			{
				somaPos = somaPos + numero; //somaPos += numero;
				quantPos++;
			}
		}
	}
	
	//calculando a m�dia dos n�meros positivos
	mediaPos = somaPos/quantPos;
	
	//exibindo os resultados 	
	printf ("\nQuantidade de valores negativos digitados: %d", quantNeg);
	printf ("\nMedia dos valores positivos: %.1f", mediaPos);
}
