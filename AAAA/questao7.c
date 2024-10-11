#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a;
    scanf("%f", &a);
    a = a / 2;
    printf("%f",a);
    return 0;
}
