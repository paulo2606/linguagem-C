#include <stdio.h>

int main(){
	
	int valor1, valor2, valor3, valor4;
	
	printf("Digite um valor: ");
	scanf("%i", &valor1);
	
	printf("Digite um valor: ");
	scanf("%i", &valor2);
	
	printf("Digite um valor: ");
	scanf("%i", &valor3);
	
	printf("Digite um valor: ");
	scanf("%i", &valor4);
	
	if(valor1 % 2 == 0 || valor1 % 3 == 0){
		printf("O valor é %i e divisivel\n", valor1);
	}else{
		printf("O valor 1 não e divisivel por 2 e 3\n");
	}
	
	if(valor2 % 2 == 0 || valor2 % 3 == 0){
		printf("O valor é %i e divisivel\n", valor2);
	}else{
		printf("O valor 2 não e divisivel por 2 e 3\n");
	}
	
	
	if(valor3 % 2 == 0 || valor3 % 3 == 0){
		printf("O valor é %i e divisivel\n", valor3);
	}else{
		printf("O valor 3 não e divisivel por 2 e 3\n");
	}
	
	
	if(valor4 % 2 == 0 || valor4 % 3 == 0){
		printf("O valor é %i e divisivel\n", valor4);
	}else{
		printf("O valor 4 não e divisivel por 2 e 3\n");
	}
	
	return 0;
}
