#include<stdio.h>

int main(){
	
	float C, F;
	printf ("Digite a temperatura em Fº: ");
	scanf ("%f", &F);
	
	C = (F - 32) * 0.5556;
	printf ("O valor da conversão é de: %.2f", C);
	
	
	return 0;
}
