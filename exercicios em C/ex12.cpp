#include <stdio.h> 
#include <Math.h>

int main(){
	
	int A, B, C, quadA, quadB, quadC, result;
	
	printf("Digite o valor A:");
	scanf("%d", &A);
	
	printf("Digite o valor B:");
	scanf("%d", &B);
	
	printf("Digite o valor C:");
	scanf("%d", &C);
	
	quadA = pow(A, 2);
	quadB = pow(B, 2);
	quadC = pow(C, 2);
	
	result = quadA + quadB + quadC;
	
	printf("O resultado da soma dos quadrados é de: %d", result);
}
