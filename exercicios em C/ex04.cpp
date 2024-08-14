#include<stdio.h>
#include<Math.h>

int main(){
	
	float taxa, tempo, valor, pretacao;
	
	printf("Digite o valor: ");
	scanf("%f", &valor);
	
	printf("Digite o valor o tempo: ");
	scanf("%f", &tempo);
	
	printf("Digite o valor da taxa: ");
	scanf("%f", &taxa);
	
	pretacao = valor + ( valor * (taxa/100) * tempo);
	
	printf("O valor da pretacao é de: %.2f", pretacao);
	
	return 0;
		
}
