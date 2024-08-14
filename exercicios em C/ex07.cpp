#include <stdio.h>

int main(){
	
	float volume, comprimento, largura, altura;
	
	printf("Digite o Comprimento: ");
	scanf("%f", &comprimento );
	
	printf("Digite o Largura: ");
	scanf("%f", &largura );
	
	printf("Digite o Altura: ");
	scanf("%f", &altura );
	
	volume = comprimento * largura * altura;
	
	printf("O volume tem o valor de %.2f", volume);
	
	return 0;
}
