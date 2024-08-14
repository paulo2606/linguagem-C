#include <stdio.h>

int main(){
	
	float a, v, r;
	
	printf("Digite o valor do Raio: ");
	scanf("%f", &r);
	
	printf("Digite a altura da lata: ");
	scanf("%f", &a);
	
	v = 3.14 * (r * r)* a;
	
	printf("O volume da lata é = %.2f", v);
	
	return 0;
	
}
