#include <stdio.h>
#include <math.h>

int main() {
    int opcao;

    printf("Escolha uma op��o:\n");
    printf("1. Exerc�cio 1\n");
    printf("2. Exerc�cio 2\n");
    printf("3. Exerc�cio 3\n");
    printf("4. Exerc�cio 4\n");
    printf("5. Exerc�cio 5\n");
    printf("6. Exerc�cio 6\n");
    printf("7. Exerc�cio 7\n");
    printf("8. Exerc�cio 8\n");
    printf("9. Exerc�cio 9\n");
    printf("10. Exerc�cio 10\n");
    printf("11. Exerc�cio 11\n");
    printf("12. Exerc�cio 12\n");
    printf("13. Exerc�cio 13\n");
    printf("14. Exerc�cio 14\n");
    printf("15. Exerc�cio 15\n");
    printf("0. Sair\n");
    printf("Digite sua op��o: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Exerc�cio 1.\n");
            {
                int valor;

                printf("Digite um valor inteiro: ");
                scanf("%d", &valor);

                if(valor < 0) {
                    valor = valor * (-1);
                }

                printf("Valor %d ", valor);
            }
            break;

        case 2:
            printf("Exerc�cio 2.\n");
            {
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

                if(media >= 5) {
                    media = media;
                    printf("Aprovado com media %.2f", media);
                } else {
                    media = media;
                    printf("Retido com media %.2f", media);
                }
            }
            break;

        case 3:
            printf("Exerc�cio 3.\n");
            {
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

                if(media >= 7) {
                    printf("Aprovado com media %.2f", media);
                    return 0;
                } else {
                    printf("Nota do exame: ");
                    scanf("%f", &notaD);
                }

                mediaFinal = (media + exame) / 2;

                if(mediaFinal >= 5) {
                    printf("Aprovado por exame\n Com media %.2f", mediaFinal);
                } else {
                    printf("Retido com com media %.2f", mediaFinal);
                }
            }
            break;

        case 4:
            printf("Exerc�cio 4.\n");
            {
                float A, B, C, x1, x2;

                printf("Digite o valor A: ");
                scanf("%f", &A);	

                printf("\nDigite o valor B: ");
                scanf("%f", &B);

                printf("\nDigite o valor C: ");
                scanf("%f", &C);

                float delta = pow(B, 2) - 4 * A * C;

                if(A == 0 || B == 0 || C == 0) {
                    printf("Os valores n�o podem ser zero");
                } else if(delta < 0) {
                    printf("Nao ha raizes reais");
                } else if(delta == 0) {
                    x1 = -B / (2 * A);
                    printf("Delta = 0, uma raiz real (raiz dupla):\n");
                    printf("x = %.2f\n", x1);
                } else {
                    x1 = B + sqrt(delta)/2 * A;
                    x2 = B - sqrt(delta)/2 * A;
                    printf("X1: %.2f, X2: %.2f", x1, x2);
                }
            }
            break;

        case 5:
            printf("Exerc�cio 5.\n");
            {
                int a, b, c;
                int temp;

                printf("Digite o valor de A: ");
                scanf("%d", &a);
                printf("Digite o valor de B: ");
                scanf("%d", &b);
                printf("Digite o valor de C: ");
                scanf("%d", &c);

                if (a > b) {
                    temp = a;
                    a = b;
                    b = temp;
                }

                if (a > c) {
                    temp = a;
                    a = c;
                    c = temp;
                }

                if (b > c) {
                    temp = b;
                    b = c;
                    c = temp;
                }

                printf("Os valores em ordem crescente s�o: %d, %d, %d\n", a, b, c);
            }
            break;

        case 6:
            printf("Exerc�cio 6.\n");
            {
                float C, F;
                printf("Digite a temperatura em F�: ");
                scanf("%f", &F);

                C = (F - 32) * 0.5556;
                printf("O valor da convers�o � de: %.2f", C);	
            }
            break;

        case 7:
            printf("Exerc�cio 7.\n");
            {
                float a, v, r;

                printf("Digite o valor do Raio: ");
                scanf("%f", &r);

                printf("Digite a altura da lata: ");
                scanf("%f", &a);

                v = 3.14 * (r * r)* a;

                printf("O volume da lata � = %.2f", v);
            }
            break;

        case 8:
            printf("Exerc�cio 8.\n");
            {
                float tempo, velocidade, distancia, litros_usados, autonomia;

                printf("Digite o tempo gasto na viagem (em horas): ");
                scanf("%f", &tempo);

                printf("Digite a velocidade m�dia durante a viagem (em km/h): ");
                scanf("%f", &velocidade);

                printf("Digite a autonomia(em Litros): ");
                scanf("%f", &autonomia);

                distancia = tempo * velocidade;

                litros_usados = distancia / autonomia;

                printf("\nVelocidade m�dia: %.2f km/h\n", velocidade);
                printf("Tempo gasto na viagem: %.2f horas\n", tempo);
                printf("Dist�ncia percorrida: %.2f km\n", distancia);
                printf("Quantidade de litros utilizada: %.2f litros\n", litros_usados);
            }
            break;

        case 9:
            printf("Exerc�cio 9.\n");
            {
                float taxa, tempo, valor, pretacao;

                printf("Digite o valor: ");
                scanf("%f", &valor);

                printf("Digite o valor o tempo: ");
                scanf("%f", &tempo);

                printf("Digite o valor da taxa: ");
                scanf("%f", &taxa);

                pretacao = valor + (valor * (taxa/100) * tempo);

                printf("O valor da pretacao � de: %.2f", pretacao);
            }
            break;

        case 10:
            printf("Exerc�cio 10.\n");
            {
                float a, b, c;

                printf("Digite o valor de A: ");
                scanf("%f", &a);

                printf("Digite o valor de B: ");
                scanf("%f", &b);

                c = a;
                a = b;
                b = c;

                printf("O valor de A = %.0f e o valor de B = %.0f", a, b);
            }
            break;

        case 11:
            printf("Exerc�cio 11.\n");
            {
                float a, b, c;

                printf("Digite o valor de A: ");
                scanf("%f", &a);

                printf("Digite o valor de B: ");
                scanf("%f", &b);

                c = a;
                a = b;
                b = c;

                printf("O valor de A = %.0f e o valor de B = %.0f", a, b);
            }
            break;

        case 12:
            printf("Exerc�cio 12.\n");
            {
                float volume, comprimento, largura, altura;

                printf("Digite o Comprimento: ");
                scanf("%f", &comprimento );

                printf("Digite o Largura: ");
                scanf("%f", &largura );

                printf("Digite o Altura: ");
                scanf("%f", &altura );

                volume = comprimento * largura * altura;

                printf("O volume tem o valor de %.2f", volume);
            }
            break;

        case 13:
            printf("Exerc�cio 13.\n");
            {
                int numero, result, potencia;

                printf("Digite o numero para saber o cubo do valor: ");
                scanf("%d", &numero);

                result = numero * numero * numero;

                printf("O cubo do valor %d e igual a %d", numero, result);
            }
            break;

        case 14:
            printf("Exerc�cio 14.\n");
            {
                int num;

                printf("Digite um numero: ");
                scanf("%d", &num);

                if(num % 2 == 0) {
                    printf("%d e par", num);
                } else {
                    printf("%d e impar", num);
                }
            }
            break;

        case 15:
            printf("Exerc�cio 15.\n");
            {
                int num;

                printf("Digite um numero: ");
                scanf("%d", &num);

                if(num >= 0) {
                    printf("%d � positivo", num);
                } else {
                    printf("%d � negativo", num);
                }
            }
            break;

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Op��o inv�lida. Por favor, escolha uma op��o v�lida.\n");
            break;
    }

    return 0;
}

