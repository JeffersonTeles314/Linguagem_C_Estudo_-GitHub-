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
    int multi = a * b;
    int divi = a / b;
    int sub = a - b;
    printf("%i + %i = %i\n",a,b,soma);
    printf("%i - %i = %i\n",a,b,sub);
    printf("%i / %i = %i\n",a,b,divi);
    printf("%i * %i = %i\n",a,b,multi);
    return 0;
}