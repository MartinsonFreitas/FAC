/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Lista de Exerc�cios III
	
	QUEST�O 05: Fa�a um programa que exiba na tela os 50 primeiros 
	termos da seguinte s�rie: 1, -2, 3, -4, 5, -6 ...*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define QUANT 50

//main
void main ()
{
	//declara��o de vari�veis
	int i;
	
	//variando todos os valores do intervalo de 1 a QUANT
	for (i=1;i<=QUANT;i++)
	{
		//verificando se 'i' � �mpar
		if (i%2==1)
		{
			printf ("%d ", i);
		}
		else //'i' � par
		{
			printf ("%d ", -i);
		}
	} 
}
