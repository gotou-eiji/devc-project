#include <stdio.h>
#include <stdlib.h>

double calculadora(double num1, double num2, int op);

main(){
	double num1, num2, resultado;
	int operacao;
	do{
		system("cls");
		resultado = 0;
		printf("\nDigite o primeiro numero: ");
		scanf("%lf", &num1);
		printf("\nDigite o segundo numero: ");
		scanf("%lf", &num2);
		printf("\nDigite a operacao\n1 - soma\n2 - subtracao\n3 - divisao\n4 - multiplicacao\n");
		scanf("%d", &operacao);
		resultado = calculadora(num1, num2, operacao);
		printf("\nO resultado e: %0.2lf", resultado);
		system("pause");
	}while(operacao!=0);
	return 0;
}
