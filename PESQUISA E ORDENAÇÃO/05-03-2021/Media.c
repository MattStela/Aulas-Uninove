//Calcula a m�dia de 3 notas

#include<stdio.h> // para os printf e scanf
#include<stdlib.h> // para o comando pause, entre outros

main(){ // (fun��o principal, obrigat�ria)

//declara��o das vari�veis
float nota1,nota2,nota3,media; //(declara��o das vari�veis para uso depois)

//processamento dos dados
printf("Digite a nota 1: "); //imprime no programa a frase "Digite a nota 1: "
scanf("%f",&nota1); // - %f (float, pois a declara��o em cima foi em float) - %d (int) - & (identificador da mem�ria)

printf("Digite a nota 2: ");
scanf("%f",&nota2);

printf("Digite a nota 3: ");
scanf("%f",&nota3);

media = (nota1+nota2+nota3)/3;

//mostra o resultado
printf("A media das notas e %.2f",media); // %.2f (2 casas decimais depois da v�rgula)
}
