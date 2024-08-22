#include <stdio.h>
#include <math.h>

int main(){
	
	float A, B, C, x1, x2;
	
	printf("Digite o valor A: ");
	scanf("%f", &A);	
	
	printf("\nDigite o valor B: ");
	scanf("%f", &B);
	
	printf("\nDigite o valor C: ");
	scanf("%f", &C);
	
	float delta = pow(B, 2) - 4 * A * C;
	
	if(A == 0 || B == 0 || C == 0){
		printf("Os valores não podem ser zero");
	}else if(delta < 0){
		printf("Nao ha raizes reais");
	}else if(delta == 0){
		x1 = -B / (2 * A);
        printf("Delta = 0, uma raiz real (raiz dupla):\n");
        printf("x = %.2f\n", x1);
	}else{
		x1 = B + sqrt(delta)/2 * A;
		x2 = B - sqrt(delta)/2 * A;
		printf("X1: %.2f, X2: %.2f", x1, x2);
	}
	
	return 0;
}
