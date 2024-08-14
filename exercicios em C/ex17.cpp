#include <stdio.h>
 
int main (){
	float vn, vb, v1, v2, v3, vv, pvv, pv1, pv2, pv3, pvn, pvb;
	int T;
	printf("Primeiro valor: ");
	scanf("%f",&vv);
	
	printf("Segundo valor: ");
	scanf("%f",&vn);
	
	printf("Terceiro valor: ");
	scanf("%f",&vb);
	
	printf("Quarto valor: ");
	scanf("%f",&v1);
	
	printf("Quinto valor: ");
	scanf("%f",&v2);
	
	printf("Sexto valor: ");
	scanf("%f",&v3);	
	
	pvv = vv/T;
	pv1 = v1/T;
	pv2 = v2/T;
	pv3 = v3/T;
	pvn = vn/T;
	pvb = vb/T;
	T = vn + vb + v1 + v2 + v3;
	vv = v1 + v2 + v3;

 
	printf("Total de Votos Validos: %.0f", vv);
	printf("\nTotal de Votos primeiro candidato: %.0f", v1);
	printf("\nTotal de Votos segundo candidato: %.0f", v2);
	printf("\nTotal de Votos terceito candidato: %.0f", v3);
	printf("\nTotal de Votos nulos: %.0f", vn);
	printf("\nTotal de Votos brancos: %.0f", vb);

	printf("\nTotal de votos: %.2i", T);
	
	return 0;
}
