#include<stdio.h> //entrada e saida de dados - printf, scanf
#include<stdlib.h> //Para usar o comando system("pause")

float med(float a, float b, float c);

main(){
	float nota1, nota2, nota3, media;

	printf("Este programa faz a média somando três notas\n\n");
	printf("-------------------------\n\n");
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nota2);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nota3);

    media = med(nota1,nota2,nota3);
	printf("\n a soma de %.2f + %.2f + %.2f e igual a %.2f \n",nota1,nota2,nota3,media);
    printf("\n");
    system("pause");
}

float med(float a, float b, float c){
    return (a + b + c)/3;
}
