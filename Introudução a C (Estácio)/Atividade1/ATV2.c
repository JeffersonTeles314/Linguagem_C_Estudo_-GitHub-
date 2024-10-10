#include <stdio.h>
#include <locale.h>
    
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int qv;
    printf("Quantos Açaí Jubiscreuda Vendeu:");
    scanf("%i", &qv);
    float valor_custo = 2.5 * 100;
    float lucro = (qv * 8) - valor_custo;
    printf("Jubiscreuda Lucrou %f Unidades Monetárias",lucro);
    return 0;
}
