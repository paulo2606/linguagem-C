#include <stdio.h>

int main(){
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%i", &n);
	
	if (!(n > 3)) {
		printf("Valor v�lido"); 		
	}else{
		printf("Valor invalido");
	}
}
