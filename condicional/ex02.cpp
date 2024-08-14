#include <stdio.h>
#include <Math.h>

int main(){
	
	float media, notaA, notaB, notaC, notaD;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &notaA);
	
	printf("Digite a Segunda nota: ");
	scanf("%f", &notaB);
	
	printf("Digite a Terceira nota: ");
	scanf("%f", &notaC);
	
	printf("Digite a Quarta nota: ");
	scanf("%f", &notaD);
	
	media = (notaA + notaB + notaC + notaD) / 4; 
	
	if(media >= 5){
		 media = media;
		 printf("Aprovado com media %.2f", media);
	}
	else{
		media = media;
		printf("Retido com media %.2f", media);
	}
	
	return 0;
}
