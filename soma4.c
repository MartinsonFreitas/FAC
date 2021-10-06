/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Exerc�cio: Calcular o valor de S = 1/n - 2/(n-1) + 3/(n-2) - ... n/1
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int n, i, j;
	float s=0;
	
	//leitura do valor de n
	printf ("Entre com o valor de n: ");
	scanf ("%d", &n);	
		
	for (i=1,j=n;(i<=n)/*&&(j>=1)*/;i++,j--)
	{
		//verificando se o 'i' � par
		if (i%2 == 0)
		{
			s = s - (float)i/j;     //casting - coer��o
		}
		else // ou seja, 'i' � �mpar
		{
			s = s + (float)i/j;     //casting - coer��o
		}
	}
		
	//exibindo o resultado
	printf ("Soma = %.2f", s);
}

/*
n = 4
i: 1 2 3 4 5
j: 4 3 2 1 0
*/
