#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Qual sua idade: ");
	scanf("%i", &idade);
	
	if(idade >= 18){
		printf("Vc é maior de idade");
		return 0;
	}
	
	printf("Menor de idade");
	
	return 0;
}
