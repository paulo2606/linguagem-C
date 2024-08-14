#include<stdio.h>
#include<Math.h>

int main(){

	float a, b, c;
		
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	
	c = a;
	a = b;
	b = c;
	
	printf("O valor de A = %.0f e o valor de B = %.0f", a, b);
	
	return 0;
}
