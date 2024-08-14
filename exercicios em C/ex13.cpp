#include <stdio.h> 
#include <Math.h>

int main(){
	
	int A, B, C, quadSoma, soma;
	
	printf("Digite o valor A:");
	scanf("%d", &A);
	
	printf("Digite o valor B:");
	scanf("%d", &B);
	
	printf("Digite o valor C:");
	scanf("%d", &C);
	
	soma = A + B + C;	
	quadSoma = pow(soma, 2);
	

	
	printf("O resultado do quadrado das soma de A, B e C é de: %d", quadSoma);
}
