#include <stdio.h>

int main(){
	
	int opc;
	
	printf("Escolha qual a unidade de medida\n");
	printf("1: Metros para Cm\n");
	printf("2: Metros para Km\n");
	printf("3: Cm para Metros\n");
	printf("4: Km para Metros\n");
	printf("0: Para sair\n");
	printf("Digite a opção: ");
	scanf("%i", &opc);

	switch(opc){
		case 1:
			printf("Metros para Cm\n"); {
				float metros, cm;

    		    printf("Digite o valor em metros: ");
    			scanf("%f", &metros);
    			
			    cm = metros * 100;

    			printf("%.2f metros equivalem a %.2f centímetros.\n", metros, cm);
			}
		break;
		
		case 2:
			printf("Metros para Km\n"); {
				float metros, km;

    		    printf("Digite o valor em metros: ");
    			scanf("%f", &metros);
    			
			    km = metros / 1000;

    			printf("%.2f metros equivalem a %.2f Km.\n", metros, km);
			}
		break;
		
		case 3:
			printf("Cm para Metros\n"); {
				float metros, cm;

    		    printf("Digite o valor em Cm: ");
    			scanf("%f", &cm);
    			
			    metros = cm / 100;

    			printf("%.2f Cm equivalem a %.2f Metros.\n", cm, metros);
			}
		break;
		
		case 4:
			printf("Km para Metros\n"); {
				float metros, km;

    		    printf("Digite o valor em Km: ");
    			scanf("%f", &km);
    			
			    metros = km * 1000;

    			printf("%.2f Km equivalem a %.2f m.\n", km, metros);
    		}
		break;
		
		case 0:
			printf("Saindo...");
			return 0;
		break;
		
		default:
			printf("Opção Invalida!");
			return 0;		
	}
}
