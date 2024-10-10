#include <stdio.h>
#include <locale.h>

int compare(int valor1, int valor2)
{
if (valor1 > valor2)
{
    return valor1;
}else{if (valor2 > valor1)
    {
        return valor1;
    }
else
    {
        return 0;
    }
}
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int valor1;
    int valor2;
    scanf("%i",&valor1);
    scanf("%i",&valor1);
    int result = compare(valor1,valor2);
    printf("%i",result);
    return 0;
}
