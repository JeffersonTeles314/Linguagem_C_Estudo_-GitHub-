#include <stdio.h>
#include <locale.h>
    
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int acai_jubs;
    printf("Quantos Açaí Jubiscreuda Vendeu:");
    scanf("%i", &acai_jubs);
    float valor_custo = 2.5 * 100;
    float lucro = (acai_jubs * 8) - valor_custo;
    printf("Jubiscreuda Lucrou %f Unidades Monetárias",lucro);
}
