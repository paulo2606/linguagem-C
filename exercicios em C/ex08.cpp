#include <stdio.h> 
#include <Math.h>

int main(){
	
	int numero, result, potencia;
	
	printf("Digite um valor: ");
	scanf("%d", &numero);
	
	printf("Digite a potencia para aplicar ao valor: ");
	scanf("%d", &potencia);
	
	result = pow(numero, potencia);
	
	printf("A potencia do valor e igual a %d", result);
	
	return 0;
}
