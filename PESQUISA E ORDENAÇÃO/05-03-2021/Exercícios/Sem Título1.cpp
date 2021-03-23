/*
1)	Faça um  programa para converter dólares em reais.
O usuário digita quantos reais (R$) custa U$ 1,00 (dólar),
depois ele informa quanto dólares ele possui.
O sistema deve informar quantos reais ele tem.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	float real, dolar, cotacao_dolar;
	printf("Insira o valor em dolares a ser convertido para reais: ");
	scanf("%f",&dolar);
	printf("Insira a cotacao atual do dolar: ");
	scanf("%f",&cotacao_dolar);
	real = dolar*cotacao_dolar;
	printf("Voce tem %.2f dolares que valem %.2f reais",dolar,real);
}
