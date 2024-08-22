#include <stdio.h>

int main(){
	int nota;
	
	printf("Descubra o desempenho do aluno.\n");
	printf("Digite a nota do aluno:");
	scanf("%i", &nota);
	
		switch (nota) {
        case 0:
        	printf("Desempenho insuficiente!\n");
            break;
        case 1:
        	printf("Desempenho insuficiente!\n");
            break;
        case 2:
            printf("Desempenho insuficiente!\n");
            break;
        case 3:
        	printf("Desempenho insuficiente!\n");
            break;
        case 4:
        	printf("Desempenho insuficiente!\n");
            break;
        case 5:
            printf("Desempenho regular!\n");
            break;
        case 6:
        	printf("Desempenho insuficiente!\n");
            break;
        case 7:
        	printf("Desempenho insuficiente!\n");
            break;
        case 8:
            printf("Desempenho bom!\n");
            break;
        case 9:
        	printf("Desempenho insuficiente!\n");
            break;
        case 10:
            printf("Desempenho excelente!\n");
            break;
        default:
            printf("Nota inválida!\n");
    }
	
	return 0;
}
