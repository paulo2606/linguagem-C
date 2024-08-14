#include <stdio.h>
#include <Math.h>

int main(){
	
	float salario, reajuste, novoSal; 
	
	printf("Salario: ");
	scanf("%f", &salario);
	
	printf("Reajuste(porcentagem): ");
	scanf("%f", &reajuste);
	
	novoSal = ((reajuste/100) * salario) + salario;

	printf("O novo salario sera de: %.2f", novoSal);
	
	return 0;
}
