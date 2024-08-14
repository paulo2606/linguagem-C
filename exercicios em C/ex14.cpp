#include <stdio.h>
#include <Math.h>

int main(){
	
	int valor1, valor2, valor3, valor4, produto, soma; 
	
	printf("Valor 1: ");
	scanf("%d", &valor1);
	
	printf("Valor 2: ");
	scanf("%d", &valor2);
	
	printf("Valor 3: ");
	scanf("%d", &valor3);
	
	printf("Valor 4: ");
	scanf("%d", &valor4);
	
	produto = valor1 * valor3;
	soma = valor2 + valor4;
	
	printf("A soma do Valor 2 e Valor 4 e = %d\n", soma);
	printf("O produto do Valor 1 e Valor 3 e = %d", produto);
	
	return 0;
}
