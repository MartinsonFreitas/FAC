/*
	FAC - 2021/1
	Data: 17/06/2021
	
	Vetores - Exemplo 1 (zerando todas as posi��es do vetor)
*/

//importa��o de bibliotecas
#include<stdio.h>

//main
void main()
{
	//declara��o de vari�veis
	int valores[10];			
	int i;						
	
	//ou declarar da seguinte forma:
	//int valores[10], i;
	
	//zerando o vetor
	
	/*
	N�o faremos dessa forma, pois � invi�vel!!!
	valores[0] = 0;
	valores[1] = 0;
	valores[2] = 0;
	valores[3] = 0;
	valores[4] = 0;
	valores[5] = 0;
	valores[6] = 0;
	valores[7] = 0;
	valores[8] = 0;
	valores[9] = 0;
	//valores[10] = 0; ATEN��O!!! A POSI��O 10 N�O PERTENCE AO VETOR!!!*/
	
	//for (i=0;i<=9;i++)
	for (i=0;i<10;i++)
	{
		valores[i] = 0;
	}	
	
	
	//exibindo o vetor
	printf ("\nElementos do vetor: ");
	for (i=0;i<10;i++)
	{
		printf ("%d ", valores[i]);
	}
}
