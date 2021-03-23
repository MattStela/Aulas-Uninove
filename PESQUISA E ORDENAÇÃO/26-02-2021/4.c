#include<stdio.h> //entrada e saida de dados - printf, scanf
#include<stdlib.h> //Para usar o comando system("pause")

float somar(float a, float b);

main(){
	float peso1, peso2, soma;

	printf("Este programa soma pesos\n\n");
	printf("-------------------------\n\n");	
	
	printf("Digite o peso da primeira pessoa: ");
	scanf("%f",&peso1);
	
	printf("Digite a idade da segunda pessoa: ");
	scanf("%f",&peso2);

    soma = somar(peso1,peso2);
	printf("\n O peso de %.2f quilos com %.2f quilos e igual a %.2f quilos\n",peso1,peso2,soma);
    printf("\n");
    system("pause");
}

float somar(float a, float b){
	return a + b;
}
