/*
3)	Calcular a área de uma circunferência. O usuário
informa o valor do Raio e o programa informa o valor
da área. Utilize a fórmula: Area = ? * raio² (PI * raio ao quadrado)
*/

#include<stdio.h> // para os printf e scanf
#include<stdlib.h> // para o comando pause, entre outros
#include<math.h>

main(){

    float PI, raio, area;
    
    printf("Informe o valor do raio: ");
    scanf("%f",&raio);
    
    PI = 3.141592653589793238462643383279502884;
    area = (raio * raio)*PI;
    printf("A area da circunferencia e de: %.3f \n", area);
    system("pause");

}

