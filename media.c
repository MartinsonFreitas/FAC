/*
   FAC - 2021/1
   Data: 13/05/2021
   
   Fun��es
   
   Exemplo: calcular a m�dia de aum aluno de FAC da FAETERJ-Rio
*/

//importa��o de bibliotecas
#include <stdio.h>

//fun��o m�dia
/*
	caso 3: com par�metro e retorno
	
		par�metros: os dados que a fun��o precisa para fazer o que � proposto
			neste caso: av1, av2
			
		retorno: resultado, caso exista
			neste caso, a m�dia das notas
*/
float media (float av1, float av2)
{
/*	float m;
	
	m = (av1 + av2)/2;
	
	return m;*/
	
	return (av1 + av2)/2;
}

//main
void main ()
{
	//declara��o de vari�veis
	int i;
	float n1, n2, m;
	
	//calculando a m�dia de 5 alunos
	for (i=1;i<=5;i++)
	{
		printf ("\nEntre com a primeira nota: ");
		scanf ("%f", &n1);

		printf ("Entre com a segunda nota: ");
		scanf ("%f", &n2);

		/*m = media(n1,n2);
		printf ("\nNota1: %.1f, Nota2: %.1f, Media: %.1f\n", n1, n2, m);*/

		printf ("\nNota1: %.1f, Nota2: %.1f, Media: %.1f\n", n1, n2, media(n1,n2));
	}
}
