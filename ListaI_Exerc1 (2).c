/*
	FAC - Professor Leonardo Vianna
	Data: 08/04/2021
	
	Lista de Exerc�cios 1
	
	QUEST�O 01: O custo ao consumidor de um carro novo � a
	soma do custo de f�brica com a porcentagem do distribuidor 
	e dos impostos (aplicados ao custo de f�brica). Desenvolver 
	um algoritmo que calcule o custo ao consumidor de
	determinado carro.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	float custoFabrica, custoCons, percentualDist, percentualImp;
	
	//solicitar  custo da fabrica
	printf ("Entre com o custo de fabrica do carro: ");
	scanf ("%f", &custoFabrica);
	
	//solicitar percentual do distribuidor
	printf ("Entre com o %% do distribuidor (0-100): ");
	scanf ("%f", &percentualDist);
	
	//solicitar percentual dos impostos
	printf ("Entre com o %% de impostos (0-100): ");
	scanf ("%f", &percentualImp);
	
	//custo do consumidor = CF + PDx CF + PI x CF
	custoCons = custoFabrica + (percentualDist/100)*custoFabrica + 
	            (percentualImp/100)*custoFabrica;
	
	//Exibir o valor do custo do consumidor
	printf ("\nCusto ao consumidor = R$ %.2f\n", custoCons);
}
