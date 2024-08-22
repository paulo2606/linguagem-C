#include <stdio.h>

int main(){
	int opc;
	
	printf("Calcule o valor da sua energia\n");
	printf("1: 0 a 100 kWh\n");
	printf("2: 101 a 300 kWh\n");
	printf("3: 301 a 500 kWh\n");
	printf("4: Acima de 500 kWh\n");
	printf("5: Sair\n");
	printf("Escolha uma opção:");
	scanf("%i", &opc);
	
	switch(opc){
		case 1:
			printf("0 a 100 kWh\n"); {
				float kwh, valor;
				printf("kWh:");
				scanf("%f", &kwh);
				
				valor = kwh * 0.50;
				printf("O valor da sua conta é de R$ %.2f", valor);
			}
		break;
		case 2:
			printf("101 a 300 kWh\n"); {
				float kwh, valor;
				printf("kWh:");
				scanf("%f", &kwh);
				
				valor = kwh * 0.75;
				printf("O valor da sua conta é de R$ %.2f", valor);
			}
		break;
		case 3:
			printf("301 a 500 kWh\n"); {
				float kwh, valor;
				printf("kWh:");
				scanf("%f", &kwh);
				
				valor = kwh * 1.00;
				printf("O valor da sua conta é de R$ %.2f", valor);
			}
		break;
		case 4:
			printf("Acima de 500 kWh\n"); {
				float kwh, valor;
				printf("kWh:");
				scanf("%f", &kwh);
				
				valor = kwh * 1.50;
				printf("O valor da sua conta é de R$ %.2f", valor);
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
