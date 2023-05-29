#include <stdio.h>

int soma(int var1,int var2){
int soma;
soma = var1 + var2;
return soma;
}

int sub(int var1,int var2){
int subtra;
subtra = var1 - var2;
return subtra;
}

int mult(int var1,int var2){
int mult;
mult = var1 * var2;
return mult;
}

int Div(int var1,int var2){
int div;
div = var1 - var2;
return div;
}


int main()
{
    int car1 = mult(5,3);
    printf("%i",car1);
    return 0;
}