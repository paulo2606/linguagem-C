#include <stdio.h>

int main() {
	
    float peso, altura, imc;


    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25.0) {
        printf("Classificacao: Peso normal\n");
    } else if (imc >= 25.0 && imc < 30.0) {
        printf("Classificacao: Sobrepeso\n");
    } else if (imc >= 30.0 && imc < 35.0) {
        printf("Classificacao: Obesidade grau I\n");
    } else if (imc >= 35.0 && imc < 40.0) {
        printf("Classificacao: Obesidade grau II (severa)\n");
    } else {
        printf("Classificacao: Obesidade grau III (mórbida)\n");
    }

    return 0;
}

