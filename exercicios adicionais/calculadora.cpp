#include <stdio.h>

int main(){
	float n1, n2, result;
	char operacao;
		
	printf("+\n");
	printf("-\n");
	printf("*\n");
	printf("/\n");
	
	printf("Digite a operacao: ");
	scanf("%c", &operacao);
	
	switch(operacao){
		case '+': {
			
			printf("Valor 1: ");
			scanf("%f", &n1);
			printf("Valor 2: ");
			scanf("%f", &n2);
			
			result = n1 + n1;
			printf("O resultado e = %f", result);
			break;
		}
		case '-': {
			
			printf("Valor 1: ");
			scanf("%f", &n1);
			printf("Valor 2: ");
			scanf("%f", &n2);
			
			result = n1 - n1;
			printf("O resultado e = %f", result);
			break;
		}
		case '*': {
			
			printf("Valor 1: ");
			scanf("%f", &n1);
			printf("Valor 2: ");
			scanf("%f", &n2);
			
			result = n1 * n1;
			printf("O resultado e = %f", result);
			break;
		}
		case '/': {
			
			printf("Valor 1: ");
			scanf("%f", &n1);
			printf("Valor 2: ");
			scanf("%f", &n2);
			
			result = n1 / n1;
			printf("O resultado e = %f", result);
			break;
		}
		default: 
			printf("Valor invalido");
			return 0;
	}
	return 0;
}
