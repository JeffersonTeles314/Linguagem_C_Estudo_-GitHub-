#include <stdio.h>

// Função para calcular o Máximo Divisor Comum (MDC) usando o Algoritmo de Euclides
int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Função para calcular o Mínimo Múltiplo Comum (MMC)
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

int main() {
    int num1, num2;

    // Entrada dos dois números
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    // Cálculo e exibição do MMC
    printf("O MMC de %d e %d é: %d\n", num1, num2, mmc(num1, num2));

    return 0;
}