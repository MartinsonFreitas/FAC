/*
	FAC - Professor Leonardo Vianna
	Data: 29/04/2021
	
	Lista de Exerc�cios III
	
	QUEST�O 07: Uma determinada empresa fez uma pesquisa de mercado 
	para saber se as pessoas gostaram ou n�o de um novo produto que 
	foi lan�ado. Para cada pessoa entrevistada foram coletados os 
	seguintes dados: g�nero (M ou F) e resposta (G [Gostou] ou N 
	[N�o Gostou]). Sabendo-se que foram entrevistadas X pessoas, fa�a
	um programa que forne�a:

		a) N�mero de pessoas que gostaram do produto;
		b) N�mero de pessoas que n�o gostaram do produto;
		c) Informa��o dizendo em que g�nero o produto teve uma melhor
		aceita��o.
		
	VERS�O 2: nesta vers�o, n�o perguntamos a quantidade de entrevistados.
	Ao inv�s, perguntamos ao final de cada entrevistado se o usu�rio 
	deseja continuar. Assim, utilizamos a estrutura do..while.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, numPessoas=0, contG, contNG, contF=0, contM=0, contFG=0, contMG=0;
	char genero, opiniao, resposta;
	float percF, percM;
	
	//lendo os dados de cada entrevistado
	do
	{
		//lendo o g�nero (M/F)
		fflush (stdin);
		printf ("\nEntre com o genero (M/F): ");
		scanf ("%c", &genero);
		//genero = getche();
		
		//lendo a opini�o (G/N)
		fflush (stdin);
		printf ("Entre com a sua opiniao ([G]ostou / [N]ao gostou): ");
		scanf ("%c", &opiniao);
		//opiniao = getche();
		
		//atualizando o n�mero de entrevistados
		numPessoas++;
		
		//verificando o generop do entrevistado
		if ((genero == 'F') || (genero == 'f'))
		{
			contF++;
			
			//verificando se a mulher gostou do produto
			if ((opiniao == 'G') || (opiniao == 'g'))
			{
				contFG++;
			}
		}
		else
		{
			contM++;
			
			//verificando se o homem gostou do produto
			if ((opiniao == 'G') || (opiniao == 'g'))
			{
				contMG++;
			}
		}	
		
		//verificando se deseja continuar a leitura
		fflush (stdin);
		printf ("\nDeseja continuar (S/N)? ");
		scanf ("%c", &resposta);	
	}
	while ((resposta == 's') || (resposta == 'S'));
	
	//determinando o n�mero de pessoas que gostaram e que n�o
	//gostaram do produto
	contG = contFG + contMG;
	contNG = numPessoas - contG;
	
	//calculando pos percentuais de aceita��o por genero
	percF = (float)contFG/contF;  //percentual no intervalo de 0 a 1
	percM = (float)contMG/contM;  //percentual no intervalo de 0 a 1

	//exibindo os resultados
	printf ("\n\nNumero de pessoas que gostaram do produto: %d\n", contG);
	printf ("Numero de pessoas que n�o gostaram do produto: %d\n", contNG);

	if (percF > percM)
	{
		printf ("Maior aceitacao entre o publico feminino");
	}
	else
	{
		if (percM > percF)
		{
			printf ("Maior aceitacao entre o publico masculino");
		}
		else
		{
			printf ("Mesma aceitacao para os dois generos");
		}
	}
}
