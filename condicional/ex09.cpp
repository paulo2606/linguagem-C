#include <stdio.h>

int main(){
	
	int n;
	
	printf("Digite um número: ");
	scanf("%i", &n);
	
	if (!(n > 3)) {
		printf("Valor válido"); 		
	}else{
		printf("Valor invalido");
	}
}
