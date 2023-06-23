#include <stdio.h>
#include <locale.h>
#include <math.h>

int potencia(int valor1, int valor2)
{
int result = pow(valor1,(1+valor2));
return result;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor1;
    int valor2;
    scanf("%i",&valor1);
    scanf("%i",&valor2);
    int result = potencia(valor1,valor2);
    printf("%i",result);
    return 0;
}