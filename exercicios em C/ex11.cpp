#include <stdio.h>
#include <Math.h>

int main(){
	
	float real, convert, result;
	 
	printf("Digite o valor do real: ");
	scanf("%f", &real);	
	
	printf("Digite o valor a ser convertido para R$: U$");
	scanf("%f", &convert);
	
	result = real * convert;
	
	printf("Valor de conversão: %.2f", result);
	
	return 0;
}
