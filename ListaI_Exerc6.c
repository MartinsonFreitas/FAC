/*
	FAC - Professor Leonardo Vianna
	Data: 15/04/2021
	
	Lista de Exerc�cios 1
	
	QUEST�O 06:
	Fazer um algoritmo que determine a ordem de uma data (dia e 
	m�s) no ano.
		Exemplos:
			01/01 - 1� dia do ano
			03/02 - 34� dia do ano
			
	vers�o 1: considerando que todos os meses possuem 30 dias
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int dia, mes, totalDias;
	
	//Entrar com a data (dia e m�s)
	printf ("Entre com a data (DD MM): ");
	scanf ("%d %d", &dia, &mes);
	
	//calculando o total de dias
	totalDias = 30*(mes-1) + dia;
	
	//exibindo o resultado
	printf ("\n%d/%d: %do. do ano", dia, mes, totalDias);
}
