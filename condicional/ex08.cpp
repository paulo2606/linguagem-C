#include <stdio.h>

int main(){
	
	int n;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	if(n > 1 && n < 9){
		printf("Valor valido");
	}else{
		printf("Valor invalido");
	}
	
	return 0;
}
