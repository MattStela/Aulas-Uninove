/*
4)	Fa�a um programa para calcular bhaskara
(equa��o segundo grau). O usu�rio deve informar
o valor de A, B e C, o programa deve informar o
valor de X1 e X2.
Obs: Utilize a biblioteca <math.h> e as fun��o
pow() e sqrt() para calcular a pot�ncia e a raiz quadrada.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	float x1,x2,delta,a,b,c;
	
	printf("Insira a, b e c\n\na: ");
	scanf("%f",&a);
	
	printf("b: ");
	scanf("%f",&b);
	
	printf("c: ");
	scanf("%f",&c);
	
	//delta=b�-4ac
	delta = pow(b,2)-(4 * a * c);
	
	x1=(-b+sqrt(delta))/(2 * a);
	x2=(-b-sqrt(delta))/(2 * a);
	
	printf("DELTA = %.2f\n",delta);
	printf("x1: %.2f\n",x1);
	printf("x2: %.2f",x2);
	system("pause");
}
