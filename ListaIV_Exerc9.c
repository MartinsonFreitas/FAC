/*Lista IV - Exerc�cio 9

QUEST�O 09: Escrever um programa que encontre o quinto n�mero maior que 1000, cuja divis�o por 11 tenha 
resto 5.  
*/

#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	int cont = 0, num = 1000;	
	
	while (cont < 5) //cont != 5
	{
		num++;
		
		if (num % 11 == 5)
		{
			cont++;
		}		
	}

	//Exibindo o quinto elemento maior do que 1000 que dividido por 11 apresenta resto 5
	printf ("Valor = %d", num);
}
