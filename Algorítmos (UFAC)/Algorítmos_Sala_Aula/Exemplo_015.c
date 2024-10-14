#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{   float val,soma;
    int num;
    num  = 0;
    soma = 0.0;
    printf("\n\n digite valores:");
    printf("\n\n digite -1 para encerrar");
    do
    {
        printf("\n  valor:");
        scanf("%f",&val);
        if(val < 0.0)
        {
            break; // saída do laço
        }
        num++;
        soma = soma + val;
    }while(1);                           // sempre verdadeiro
    printf("\n\n M�dia: %f",soma/num);
    getch();
}
