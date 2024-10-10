#include <stdio.h>

float soma(float num1, float num2) {
    return num1 + num2;
}

float subtracao(float num1, float num2) {
    return num1 - num2;
}

float multiplicacao(float num1, float num2) {
    return num1 * num2;
}

float divisao(float num1, float num2) {
    return num1 / num2;
}

int main() {
    int escolha;
    float num1, num2, resultado;

    do {
        printf("===== Calculadora Interativa =====\n");
        printf("Escolha a operação:\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("0. Sair\n");
        scanf("%d", &escolha);

        if (escolha == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        if (escolha < 1 || escolha > 4) {
            printf("Opção inválida!\n");
            continue;
        }

        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);

        switch (escolha) {
            case 1:
                resultado = soma(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = subtracao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicacao(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Erro: divisão por zero não é permitida!\n");
                } else {
                    resultado = divisao(num1, num2);
                    printf("Resultado: %.2f\n", resultado);
                }
                break;
        }

        printf("\n");

    } while (escolha != 0);

    return 0;
}
