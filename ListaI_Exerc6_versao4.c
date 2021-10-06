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
			
	vers�o 4: considerando o real n�mero de dias em cada m�s
	          e verificando se o ano � bissexto.
	          Introduzindo a estrutura switch
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int dia, mes, ano, totalDias;
	
	//Entrar com a data (dia, m�s e ano)
	printf ("Entre com a data (DD MM AAAA): ");
	scanf ("%d %d %d", &dia, &mes, &ano);
	
	//calculando o total de dias
	switch (mes)
	{
		case 1: totalDias = dia;
		        break;
	
		case 2: totalDias = 31 + dia;
		        break;
		
		case 3: //totalDias = 31 + 28 + dia;
				totalDias = 59 + dia;
				break;
				
		case 4: //totalDias = 31 + 28 + 31 + dia;
				totalDias = 90 + dia;
				break;
				
		case 5: //totalDias = 31 + 28 + 31 + 30 + dia;
				totalDias = 120 + dia;
				break;
				
		case 6: //totalDias = 31 + 28 + 31 + 30 + 31 + dia;
				totalDias = 151 + dia;
				break;
				
		case 7: //totalDias = 31 + 28 + 31 + 30 + 31 + 30 + dia;
				totalDias = 181 + dia;
				break;
				
		case 8: //totalDias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + dia;
				totalDias = 212 + dia;
				break;
				
		case 9: //totalDias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + dia;
				totalDias = 243 + dia;
				break;
				
		case 10://totalDias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dia;
				totalDias = 273 + dia;
				break;
				
		case 11://totalDias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dia;
				totalDias = 304 + dia;
				break;
				
		case 12://totalDias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia;
				totalDias = 334 + dia;			
	}	
	
	//testando se o ano � bissexto
	if ((ano % 4 == 0) && (mes > 2))
	{
		totalDias++;
	}
	
	//exibindo o resultado
	printf ("\n%d/%d: %do. do ano", dia, mes, totalDias);
}
