/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Lista de Exerc�cios III
	
	QUEST�O 01: Fa�a um programa que leia um n�mero inteiro positivo N 
	e exiba todos os m�ltiplos de Y inferiores a N, onde N e Y s�o 
	fornecidos pelo usu�rio.
	
	Exemplos:
	
	1)	N = 10 e Y = 3
		Resultado: 0, 3, 6, 9
		
	2)  N = 20 e Y = 5
	    Resultado: 0, 5, 10, 15	
*/
//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int n, y, i;
	
	//lendo os valores de entrada
	printf ("Entre com o limite: ");
	scanf ("%d", &n);
	
	printf ("Entre com o valor cujos multiplos serao exibidos: ");
	scanf ("%d", &y);
	
	//variando os valores de 0 a n-1
	for (i=0;i<n;i=i+y)
	{
		printf ("%d ", i);
	}
}
