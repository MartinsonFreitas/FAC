/*
	FAC - 2021/1
	Data: 17/06/2021
	
	Exemplo de uso de par�metro por refer�ncia.
	
	obs: o que n�o � par�metro por refer�ncia (par�metro de sa�da), � par�metro 
	por valor (par�metro de entrada).
	
	ATEN��O: suponha que o programador desejasse que o par�metro fosse de sa�da (ou
	seja, por refer�ncia), por�m esqueceu de colocar o * junto ao par�metro.
	
	NESSA NOVA IMPLEMENTA��O, O ALUNO CORRIGIU O PROBLEMA; OU SEJA, TORNOU O 
	PAR�METRO B COMO POR REFER�NCIA!
*/

//importa��o de bibliotecas
#include<stdio.h>

//prot�tipos das fun��es
void funcao (int a, float *b);

//main
void main()
{
	//declara��o de vari�veis
	int x = 10;
	float y = 3.2;
	
	//exibindo os valores de x e y antes da chamada � fun��o
	printf ("x = %d e y = %.1f\n", x, y);
	
	//chamando a fun��o
	funcao (x, &y);        //x no lugar do par�metro a; y no lugar do par�metro b

	//exibindo os valores de x e y ap�s a chamada � fun��o
	printf ("x = %d e y = %.1f\n", x, y);
}

//implementa��o das fun��es
void funcao (int a, float *b)
{
	a++;
	*b = (*b-a)/2;    //b:  endere�o de mem�ria onde encontra-se um float
					  //*b: o float que est� no endere�o armazenado por b; 
					  //em outras palavras, o conte�do de b.		
}
