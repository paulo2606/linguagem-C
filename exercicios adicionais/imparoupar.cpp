#include <stdio.h>

int main(){
	
	int num;
	
	printf("Digite um número para saber se é par ou impar: ");
	scanf("%i", &num);
	
	if(!num % 2 == 0){
		printf("Numero impar");
	}else{
		printf("Numero par");
	}
	
	
	
	return 0;
}
