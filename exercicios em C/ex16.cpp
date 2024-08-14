#include <stdio.h>

int main() {
    float raio, area;
    float PI = 3.14159;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A área da circunferencia e: %.2f", area);

    return 0;
}
