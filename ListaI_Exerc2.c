/*Lista I - Exerc�cio 2

QUEST�O 02: Dados dois n�meros inteiros A e B, exibir todos os valores pares existentes no intervalo definido por A e B.

		==>	Acrescentar o c�lculo da m�dia dos valores exibidos.  

*/

#include <stdio.h>

int main ()
{
	//Declara��o de vari�veis
	int i, a, b, soma=0, cont=0;
	float media;
	
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
	if(b<a){
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


		//	printf ("\n %d ", soma);	
		//	printf ("\n %d ", cont);
		media = soma/cont;
		
		printf ("\n Media dos numeros = %.1f", media);

}	

