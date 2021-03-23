#include<stdio.h> //entrada e saida de dados - printf, scanf
#include<stdlib.h> //Para usar o comando system("pause")

int somar(int a, int b);

main(){
	int idade1, idade2, soma;

	printf("Este programa soma idades\n\n");
	printf("-------------------------\n\n");	
	
	printf("Digite a idade da primeira pessoa: ");
	scanf("%d",&idade1);
	
	printf("Digite a idade da segunda pessoa: ");
	scanf("%d",&idade2);

    soma = somar(idade1+idade2)
	printf("\n A soma de %d anos com %d anos e igual a %d anos\n",idade1,idade2,soma);
}

int somar(int a, int b){
	return a+b;
}
