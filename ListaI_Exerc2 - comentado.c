/*Lista I - Exerc�cio 2

QUEST�O 02: Dados dois n�meros inteiros A e B, exibir todos os valores pares existentes no intervalo definido por A e B.

		==>	Acrescentar o c�lculo da m�dia dos valores exibidos.  

*/

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
	int i, a, b, soma=0, cont=0, media;
	
	//Leitura do valor de A	
	printf ("Entre com o primeiro valor do Intervalo: ");
	scanf ("%d", &a);
	
	//Leitura do valor de B	
	printf ("Entre com o segundo valor do Intervalo: ");
	scanf ("%d", &b);
	
	//exibindo os n�meros pares do intervalo A - B
	
	// Se os numeros forem iguais... 
	
	if(a==b){
			printf ("Numeros iguais... Tente novamente!");
			}
			
	// Se...
	else {
		
		if(a<b){
		for (i=a;i<=b;i++)
		{
			if (i%2==0)
			{
				printf (" %d", i);
				soma += i;
				cont++;
			}
		}					
	} 
	
	// ou... Tentei colocar o ELSE e o programa imprime o �ltimo n�mero		
	else {
			for (i=b;i<=a;i++)
			{
				if (i%2==0)
				{
					printf (" %d ", i);
					soma += i;
					cont++;
				}
			}				
		} 		
	}
	
		//	printf ("\n %d ", soma);	
		//	printf ("\n %d ", cont);
		media = soma/cont;
		
		printf ("\n Media dos numeros = %d", media);
}	

/*
	LEONARDO:
	
	aqui se aplicam as observa��es que fiz no exerc�cio 1, uma vez que este � continua��o
	daquele. 
	
	Em rela��o ao c�lculo da m�dia, tem um pequeno detalhe (que se torna desnecess�rio
	falar sobre ele na primeira aula rs). � que a soma e o cont s�o inteiros. Consequentemente,
	ao tentar dividir um pelo outro, o resultado tamb�m ser� inteiro; mas n�o deveria, pois
	m�dia �, por natureza, um n�mero real. Nesse caso, dever�amos recorrer ao 'casting'.
	Lembra disso? rs
*/

/* Martinson:

	Fiz as altera��es conforme sugerido, mas acho que n�o vi essa quest�o do 'casting'... Pelo menos n�o me lembro!

*/
