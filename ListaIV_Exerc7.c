/*Lista IV - Exerc�cio 7

QUEST�O 07: Desenvolver um programa no qual o usu�rio entre com v�rios n�meros inteiros e positivos e 
imprima o produto dos n�meros �mpares e a soma dos n�meros pares. 

*/

#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	char resp;
	int num, prod = 1, soma = 0;
	
	//Leitura dos dados de entrada
	do
	{
		//leitura do valor
		printf ("Entre com um numero: ");
		scanf ("%d", &num);
		
		if (num%2==1)  //testando se � �mpar
		{
			prod = prod*num;	
		}
		else //� par
		{
			soma = soma+num;
		}
		
		//verificando se o usu�rio deseja continuar		
		do
		{
			printf ("Deseja continuar (S/N)?");
			fflush (stdin);
			scanf ("%c", &resp);
			resp = toupper (resp);
			
			if ((resp != 'S') && (resp != 'N'))
			{
				printf ("Opcao invalida! Tente novamente.\n");
			}
			
		} while ((resp != 'S') && (resp != 'N'));
	}
	while (resp == 'S');
	
	//exibindo os resultados
	printf ("Produto dos impares = %d\n", prod);
	printf ("Soma dos pares = %d\n", soma);
}
