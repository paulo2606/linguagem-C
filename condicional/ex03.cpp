#include <stdio.h>
#include <Math.h>

int main(){
	
	float media, notaA, notaB, notaC, notaD, mediaFinal, exame;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &notaA);
	
	printf("Digite a Segunda nota: ");
	scanf("%f", &notaB);
	
	printf("Digite a Terceira nota: ");
	scanf("%f", &notaC);
	
	printf("Digite a Quarta nota: ");
	scanf("%f", &notaD);
	
	media = (notaA + notaB + notaC + notaD) / 4; 
	
	if(media >= 7){
		printf("Aprovado com media %.2f", media);
		return 0;
	}
	else{
		printf("Nota do exame: ");
		scanf("%f", &notaD);
	}
	
	mediaFinal = (media + exame) / 2;
	
	if(mediaFinal >= 5){
		printf("Aprovado por exame\n Com media %.2f", mediaFinal);		
	}
	else{
		printf("Retido com com media %.2f", mediaFinal);
	}
	
	return 0;
}
