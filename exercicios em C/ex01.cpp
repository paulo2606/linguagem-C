#include<stdio.h>

int main(){
	
	float C, F;
	printf ("Digite a temperatura em F�: ");
	scanf ("%f", &F);
	
	C = (F - 32) * 0.5556;
	printf ("O valor da convers�o � de: %.2f", C);
	
	
	return 0;
}
