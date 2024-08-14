#include <stdio.h>

int main(){
	
	int valor;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &valor);
	
	if(valor < 0){
		valor = valor * (-1);
	}
	
	printf("Valor %d ", valor);
	
	return 0;7
}
