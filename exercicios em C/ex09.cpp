#include <stdio.h>
#include <Math.h>

int main(){
	
	int numeroA, numeroB, result, diferenca, potencia;
	
	printf("Digite o valor A: ");
	scanf("%d", &numeroA);
	
	printf("Digite o valor B: ");
	scanf("%d", &numeroB);
	
	printf("Digite a potencia para aplicar na diferenca do valor A - valor B: ");
	scanf("%d", &potencia);
	
	diferenca = numeroA - numeroB;
	result = pow(diferenca, potencia);
	
	printf("O valor da potencia é de: %d", result);	
	return 0;
}
