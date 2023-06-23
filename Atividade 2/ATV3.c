#include <stdio.h>

int isPar(int num) {
    if (num % 2 == 0) {
        return 1; // retorna verdadeiro (1) se for par
    } else {
        return 0; // retorna falso (0) se for ímpar
    }
}

int main() {
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if (isPar(valor)) {
        printf("%d é um número par.\n", valor);
    } else {
        printf("%d é um número ímpar.\n", valor);
    }

    return 0;
}
