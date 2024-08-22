#include <stdio.h>

int main(){
	
	float nota;
	
	printf("Digite a nota do aluno: ");
	scanf("%f", &nota);
	
	if(nota = 0 && nota <=50){
		printf("\nInsuficiente");
	}
	else if(nota >= 51 && nota <= 69){
		printf("\nSuficiente");
	}
	else if(nota >= 70 && nota <= 85){
		printf("\nBom");
	}
	else if(nota >=86 && nota <= 100){
		printf("\nExelente");
	}
	else{
		printf("\nNota invalida");
	}
		
	return 0;
}
