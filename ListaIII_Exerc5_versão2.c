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
	int i, j;
	
	//variando todos os valores do intervalo de 1 a QUANT
	for (i=1, j=-2;i<=QUANT;i+=2,j-=2)
	{
		printf ("%d %d ", i, j);
	} 
}
