/*Lista IV - Exerc�cio 2

QUEST�O 02: Desenvolver um programa que calcule a soma dos n�meros de 1 a N, sendo N um n�mero inteiro 
fornecido pelo usu�rio. 
*/

#include <stdio.h>

void main ()
{
	//Declara��o de vari�veis
	int i, n, soma = 0;
	
	//Leitura do valor de N	
	printf ("Entre com o valor de N: ");
	scanf ("%d", &n);
	
	//somando os valores de 1 a N
	for (i=1;i<=n;i++)
	{
		soma = soma + i;  //soma += i;
	}	
	
	//exibindo o resultado
	printf ("Soma =%d", soma);
}
