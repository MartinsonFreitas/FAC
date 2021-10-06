/*Lista IV - Exerc�cio 5

QUEST�O 05: Criar um programa que exiba os N primeiros termos da seguinte s�rie:  
 
	1,2,4,8,16,32,... 
	
*/

#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	int n, i, termo;
	
	//Leitura dos dados de entrada
	printf ("Entre com a quantidade de termos: ");
	scanf ("%d", &n);
	
	termo = 1;
	
	//exibindo os termos
	for (i=1;i<=n;i++)
	{
		printf ("%d ", termo);
		
		termo *= 2;
	}
	
	/*
	OU:
	
	//exibindo os termos
	for (termo = 1,i=1;i<=n;i++,termo *= 2)
	{
		printf ("%d ", termo);		
		
	}*/
}
