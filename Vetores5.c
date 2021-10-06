/*
	FAC - 2021/1
	Data: 17/06/2021
	
	Vetores - Exemplo 5 (preenchendo o vetor com n�meros aleat�rios)
*/

//importa��o de bibliotecas
#include<stdio.h>

//declara��o de constantes
#define TAMANHO 100

//main
void main()
{
	//declara��o de vari�veis
	int valores[TAMANHO];			
	int i;						
	
	//garantindo que cada sequ�ncia de valores gerados ser� diferente
	srand(time(NULL));
	
	//gerando n�meros aleat�rios com a fun��o 'rand'
	for (i=0;i<TAMANHO;i++)
	{
		//valores[i] = rand();	//gera n�meros inteiros aleat�rios: uns pequenos, outros nem tanto
		//valores[i] = rand()%100;//gerando n�meros aleat�rios de 0 a 99	
		valores[i] = (rand()%10)+1;//gerando n�meros aleat�rios de 1 a 10
	}		
	
	//exibindo o vetor
	printf ("\nElementos do vetor: ");
	for (i=0;i<TAMANHO;i++)
	{
		printf ("%d ", valores[i]);
	}
}
