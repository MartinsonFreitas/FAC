/*Lista I - Exerc�cio 3

QUEST�O 03: Dado um n�mero inteiro N, exibi um TRI�NGULO como representados nos exemplos abaixo:

Exemplo 1: 
	N=3
	
	Sa�da:
			1
			2 2
			3 3 3
			
Exemplo 2: 
	N=6
	
	Sa�da:
			1
			2 2
			3 3 3
			4 4 4 4
			5 5 5 5 5
			6 6 6 6 6 6

*/

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
	int i, N, cont=0;
		
	//Leitura do valor de N	
	printf ("Entre com o valor de N: ");
	scanf ("%d", &N);
		
	do {
		
		for (i=1;i<=cont;i++)
		
			{
				printf (" %d", cont);
			}
			
			cont++;
			printf ("\n ");
		}
	
	while (cont<=N);

}	

