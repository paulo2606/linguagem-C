#include <stdio.h>

int main(){
	int opc;
	
	printf("Escolha a categoria do produto\n");
	printf("1: Eletronicos\n");
	printf("2: Roupas\n");
	printf("3: Alimentos\n");
	printf("4: Moveis\n");
	printf("5: Sair\n");
	printf("Escolha uma opção:");
	scanf("%i", &opc);
	
	switch(opc){
		case 1:
			printf("Eletronicos\n"); {
				float valor, valorFinal, desconto;
				
				printf("\nDigite o valor: ");
				scanf("%f", &valor);
				
				desconto = (10.0/100) * valor;
				valorFinal = valor - desconto;
				
				printf("O valor com desconto é de %.2f", valorFinal);
				
			}
		break;
		case 2:
			printf("Roupas\n"); {
				float valor, valorFinal, desconto;
				
				printf("\nDigite o valor: ");
				scanf("%f", &valor);
				
				desconto = (15.0/100) * valor;
				valorFinal = valor - desconto;
				
				printf("O valor com desconto é de %.2f", valorFinal);
				
			}
		break;
		case 3:
			printf("Alimentos\n"); {
				float valor, valorFinal, desconto;
				
				printf("\nDigite o valor: ");
				scanf("%f", &valor);
				
				desconto = (5.0/100) * valor;
				valorFinal = valor - desconto;
				
				printf("O valor com desconto é de %.2f", valorFinal);
				
			}
		break;
		case 4:
			printf("Móveis\n"); {
				float valor, valorFinal, desconto;
				
				printf("\nDigite o valor: ");
				scanf("%f", &valor);
				
				desconto = (20.0/100) * valor;
				valorFinal = valor - desconto;
				
				printf("O valor com desconto é de %.2f", valorFinal);
				
			}
		break;
		case 5:
			printf("Saindo!");
		break;
		default:
			printf("Opção Invalida!");
			return 0;
	}
}
