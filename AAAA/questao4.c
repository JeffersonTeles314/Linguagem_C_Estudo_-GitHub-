#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a;
    int b;
    scanf("%i%i", &a, &b);
    int soma = a + b;
    printf("%i + %i = %i",a,b,soma);
    return 0;
}

