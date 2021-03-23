/*
Escreva um programa que leia 3 notas de um aluno e a média das notas dos
exercícios realizados por ele. Calcular a média de aproveitamento, usando a
fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o
conceito de acordo com a tabela:

maior ou igual a 9	A
maior ou igual a 7.5 e menor que 9	B
maior ou igual a 6 e menor que 7.5	C
maior ou igual a 4 e menor que 6	D
menor que 4	E
*/

#include<stdio.h> // para os printf e scanf
#include<stdlib.h> // para o comando pause, entre outros

main(){
	
	float
	
	p1exercicio1,
	p1exercicio2,
	p1exercicio3,
	
	p1media,
	
	p2exercicio1,
	p2exercicio2,
	p2exercicio3,
	
	p2media,
	
	p3exercicio1,
	p3exercicio2,
	p3exercicio3,
	
	p3media,
	
	geralmedia,
	MA;

//========================= PROVA 1 ===============================

printf("prova 1\n");
printf("exercicio 1: ");
scanf("%f",&p1exercicio1);


printf("exercicio 2: ");
scanf("%f",&p1exercicio2);

printf("exercicio 3: ");
scanf("%f",&p1exercicio3);

p1media = (p1exercicio1+p1exercicio2+p1exercicio3)/3;
printf("a nota da prova 1 foi %.2f\n\n",p1media);

//========================= PROVA 2 ===============================

printf("prova 2\n");
printf("exercicio 1: ");
scanf("%f",&p2exercicio1);

printf("exercicio 2: ");
scanf("%f",&p2exercicio2);

printf("exercicio 3: ");
scanf("%f",&p2exercicio3);

p2media = (p2exercicio1+p2exercicio2+p2exercicio3)/3;
printf("a nota da prova 2 foi %.2f\n\n",p2media);

//========================= PROVA 3 ===============================

printf("prova 3\n");
printf("exercicio 1: ");
scanf("%f",&p3exercicio1);

printf("exercicio 2: ");
scanf("%f",&p3exercicio2);

printf("exercicio 3: ");
scanf("%f",&p3exercicio3);

p3media = (p3exercicio1+p3exercicio2+p3exercicio3)/3;
printf("a nota da prova 3 foi %.2f\n\n",p3media);

//================ MEDIA DE APROVEITAMENTO (MA) ===================

geralmedia = (p1media+p2media+p3media)/3;
MA = (p1media + p2media*2 + p3media*3 + geralmedia)/7;
//maior ou igual a 9                              A
 if (MA >= 9){
    printf("A sua media de aproveitamento: A");
}
//maior ou igual a 7.5 e menor que 9              B
else if(MA>=7.5){
	printf("A sua media de aproveitamento: B");
}
//maior ou igual a 6 e menor que 7.5              C
else if(MA>=6){
	printf("A sua media de aproveitamento: C");
}
//maior ou igual a 4 e menor que 6                D
else if(MA>=4){
	printf("A sua media de aproveitamento: D");
}
//menor que 4                                     E
else if(MA>=6){
	printf("A sua media de aproveitamento: E");
}
}
