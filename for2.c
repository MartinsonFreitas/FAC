/*
	FAC - Professor Leonardo Vianna
	Data: 15/04/2021
	
	Estruturas de Repeti��o - FOR
	
	Exemplo 2: escrever na tela os n�meros �mpares no intervalo de 1 a 3000
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i;
	
	//for (inicializa��o;crit�rio/condi��o de perman�ncia;atualiza��o)
	for (i=1;i<=3000;i=i+2)
	{
		printf ("%d\n", i);
	}
}
