//Calcula a média de 3 notas

#include<stdio.h> // para os printf e scanf
#include<stdlib.h> // para o comando pause, entre outros

main(){ // (função principal, obrigatória)

//declaração das variáveis
float nota1,nota2,nota3,media; //(declaração das variáveis para uso depois)

//processamento dos dados
printf("Digite a nota 1: "); //imprime no programa a frase "Digite a nota 1: "
scanf("%f",&nota1); // - %f (float, pois a declaração em cima foi em float) - %d (int) - & (identificador da memória)

printf("Digite a nota 2: ");
scanf("%f",&nota2);

printf("Digite a nota 3: ");
scanf("%f",&nota3);

media = (nota1+nota2+nota3)/3;

//mostra o resultado
printf("A media das notas e %.2f",media); // %.2f (2 casas decimais depois da vírgula)
}
