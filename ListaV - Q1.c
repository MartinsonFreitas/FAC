/*

QUEST�O 01: Fa�a um programa que leia
um n�mero inteiro x e, em seguida, solicite
ao usu�rio outros 50 valores inteiros. Ao
final, o programa deve exibir o total de
m�ltiplos de x fornecidos.

*/

#include <stdio.h> 

#define QUANT 5

int main() { 

int i, x, num, soma=0; 

	printf("Informe um numero inteiro: "); 
	scanf("%d", &x);
	
	for (i=1; i<=QUANT; i++) { 
	
		printf("Informe um numero inteiro: "); 
		scanf("%d", &num); 
		
		if (num % x == 0) {
		
			soma++; 
			
		}
	
	} 
	
	printf("O total de multiplos de %d e %d\n", x, soma); 
	 
} 
