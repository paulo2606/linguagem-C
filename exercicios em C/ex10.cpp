#include <stdio.h>
#include <Math.h>

int main(){
	
	float dolar, convert, result;
	 
	printf("Digite o valor do dolar: ");
	scanf("%f", &dolar);	
	
	printf("Digite o valor a ser convertido para U$: R$");
	scanf("%f", &convert);
	
	result = dolar * convert;
	
	printf("Valor de conversão: %.2f", result);
	
	return 0;
}
