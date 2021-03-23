/*
2)	Faça um programa para converter graus celsius
em graus Fahrenheit. O usuário informa os graus celsius
e o programa informa o equivalente em fahrenheit.
*/

#include<stdio.h>
#include<stdlib.h>

main(){
	
	float cels, fahr;
	
	printf("Digite a temperatura em celsius a ser convertida para fahrenheit: ");
	scanf("%f",&cels);
	
	fahr = 1.8*cels+32; 
	printf("a temperatura convertida em fahrenheit e de %f",fahr);
	system("pause");
}
