/*
	FAC - Professor Leonardo Vianna
	Data: 22/04/2021
	
	Exerc�cio: Calcular o valor de S = 1 + 2 + 3 + ... + (n-1) + n
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int n, i, s=0;
	
	//leitura do valor de n
	printf ("Entre com o valor de n: ");
	scanf ("%d", &n);
	
	//variando de 1 at� n
	for (i=1;i<=n;i++)
	{
		s = s + i; //atualiza��o / s � um acumulador
	}
	
	//exibindo o resultado
	printf ("Soma = %d", s);
}


/*
n = 5

i: 6
s: 0+1=1+2=3+3=6+4=10+5=15

*/


