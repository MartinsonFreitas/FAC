/*
	FAC - Professor Leonardo Vianna
	Data: 08/04/2021
	
	Exemplo: uso dos operadores ++ e --
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int a = 10, b;
	
	//atualizando a e b
	b = a++;
	
	//b = a;		b = 10
	//a++;			a = 11
	
	//exibindo os valores
	printf ("a = %d e b = %d\n", a, b);
}
