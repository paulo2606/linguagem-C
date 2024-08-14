#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros_usados, autonomia;

    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média durante a viagem (em km/h): ");
    scanf("%f", &velocidade);
    
    printf("Digite a autonomia(em Litros): ");
    scanf("%f", &autonomia);

    distancia = tempo * velocidade;

    litros_usados = distancia / autonomia;

    printf("\nVelocidade média: %.2f km/h\n", velocidade);
    printf("Tempo gasto na viagem: %.2f horas\n", tempo);
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Quantidade de litros utilizada: %.2f litros\n", litros_usados);

    return 0;
}
