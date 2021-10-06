/*
	FAC - Professor Leonardo Vianna
	Data: 15/04/2021
	
	Lista de Exerc�cios 1
	
	QUEST�O 04:
	Um banco conceder� um cr�dito especial aos seus clientes, 
	vari�vel com o saldo m�dio no �ltimo ano. Fa�a um algoritmo 
	que calcule o valor do cr�dito de acordo com a tabela abaixo.

			Saldo M�dio 				Percentual
			Inferior a R$ 1000,00 		nenhum cr�dito
			De R$ 1000,00 a R$ 1499,99	20% do saldo m�dio
			De R$ 1500,00 a R$ 2499,99	30% do saldo m�dio
			R$ 2500,00 ou mais 			40% do saldo m�dio*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	float saldo, credito;

	//lendo o saldo m�dio do cliente
	printf ("Entre com o saldo medio: ");
	scanf ("%f", &saldo);
	
	//determinando o cr�dito do cliente
	if (saldo < 1000)
	{
		credito = 0;
	}
	else
	{
		//if ((saldo >= 1000) && (saldo < 1500))
		if (saldo < 1500)
		// ou if (saldo <= 1499.99)
		{
			credito = 0.2 * saldo;			
		}
		else
		{
			if (saldo < 2500)
			//ou if (saldo <= 2499.99)
			{
				credito = 0.3 * saldo;
			} 
			else
			{
				credito = 0.4 * saldo;
			}
		}
	}
	
	//exibindo o cr�dito do cliente
	printf ("\nCredito = R$ %.2f", credito);
}
