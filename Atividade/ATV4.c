#include <stdio.h>

int main()
{
    int valor1,valor2,valor3,valor4,valor5;
    printf("Valor 1: ");
    scanf("%d",&valor1);
    printf("Valor 2: ");
    scanf("%d",&valor2);
    printf("Valor 3: ");
    scanf("%d",&valor3);
    printf("Valor 4: ");
    scanf("%d",&valor4);
    printf("Valor 5: ");
    scanf("%d",&valor4);
    float X[] = {valor1,valor2,valor3,valor3,valor4,valor5};
    float soma = X[0] + X[1] + X[2] + X[3] + X[4];
    printf("%f",soma);
    return 0;
}
