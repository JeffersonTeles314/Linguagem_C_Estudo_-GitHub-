#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a;
    scanf("%f", &a);
    printf("%f",a);
    return 0;
}