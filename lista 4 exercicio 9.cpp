/*
Escrever um programa que encontre o
quinto n�mero maior que 1000, cuja
divis�o por 11 tenha resto 5.
*/

#include<stdio.h>

int main () {

//DECLARAR AS VARIAVEIS

int cont, num, i;

	i=1001;
	cont=0;
	
do
	{
		if(i%11==5)
		{
			cont++;
			num=i;
		}
		
		i++;
		
	}
		while(cont<5);
		printf("%d ", num);
	
}

