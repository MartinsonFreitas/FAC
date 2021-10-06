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
			
	vers�o 3: considerando o real n�mero de dias em cada m�s
	          e verificando se o ano � bissexto
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
	if (mes == 1)
	{
		totalDias = dia;
	}
	else
	{
		if (mes == 2)
		{
			totalDias = 31 + dia;
		}
		else
		{
			if (mes == 3)
			{
				//totalDias = 31 + 28 + dia;
				totalDias = 59 + dia;
			}
			else
			{
				if (mes == 4)
				{
					//totalDias = 31 + 28 + 31 + dia;
					totalDias = 90 + dia;
				}
				else
				{
					if (mes == 5)
					{
						//totalDias = 31 + 28 + 31 + 30 + dia;
						totalDias = 120 + dia;
					}
					else
					{
						if (mes == 6)
						{
							//totalDias = 31 + 28 + 31 + 30 + 31 + dia;
							totalDias = 151 + dia;
						}
						else
						{
							if (mes == 7)
							{
								//totalDias = 31 + 28 + 31 + 30 + 31 + 30 + dia;
								totalDias = 181 + dia;
							}
							else
							{
								if (mes == 8)
								{
									//totalDias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + dia;
									totalDias = 212 + dia;
								}
								else
								{
									if (mes == 9)
									{
										//totalDias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + dia;
										totalDias = 243 + dia;
									}
									else
									{
										if (mes == 10)
										{
											//totalDias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dia;
											totalDias = 273 + dia;
										}
										else
										{
											if (mes == 11)
											{
												//totalDias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dia;
												totalDias = 304 + dia;
											}
											else
											{
												//totalDias = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia;
												totalDias = 334 + dia;	
											}											
										}
									}
								}								
							}
						}
					}	
				}
			}
		}
	}
	
	//testando se o ano � bissexto
	if ((ano % 4 == 0) && (mes > 2))
	{
		totalDias++;
	}
	
	//exibindo o resultado
	printf ("\n%d/%d: %do. do ano", dia, mes, totalDias);
}
