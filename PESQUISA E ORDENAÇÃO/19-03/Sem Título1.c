#include<stdio.h>
#include<stdlib.h>
main(){
	float n1,n2,r;
	int op;
	do{
		system("cls");
		printf("### Calculadora ###\n\n");
		printf("1 - Somar\n");
		printf("2 - Subtrair\n");
		printf("3 - Dividir\n");
		printf("4 - Multiplicar\n");
		printf("5 - sair\n\n");
		
		printf("Opcao: ");
		scanf("%d",&op);
		
		if (op==5){
			printf("Tchau!!!!\n");
			system("pause");
			break;
		}if (op<1 || op>5){
			printf("Opcao invalida!\n");
			system("pause");
		}else{
			printf("Digite o primeiro numero: ");
			scanf("%f",&n1);
			
			printf("Digite o segundo  numero: ");
			scanf("%f",&n2);
			
			if (op==1) { r = n1 + n2; }
			else if (op==2) { r = n1 - n2; }
			else if (op==3) { r = n1 / n2; }
			else if (op==4) { r = n1 * n2; }
		
			printf("O resultado e %.2f\n",r);
			system("pause");
		}
    }while(1);
}


