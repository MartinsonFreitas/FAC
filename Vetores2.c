/*
	FAC - 2021/1
	Data: 17/06/2021
	
	Vetores - Exemplo 2 (armazenar no vetor os n�meros de 1 ao tamnho do vetor (TAMANHO))
*/

//importa��o de bibliotecas
#include<stdio.h>

//declara��o de constantes
#define TAMANHO 10

//main
void main()
{
	//declara��o de vari�veis
	int valores[TAMANHO];			
	int i;						
	
	for (i=0;i<TAMANHO;i++)
	{
		valores[i] = i+1;
	}		
	
	//exibindo o vetor
	printf ("\nElementos do vetor: ");
	for (i=0;i<TAMANHO;i++)
	{
		printf ("%d ", valores[i]);
	}
}
