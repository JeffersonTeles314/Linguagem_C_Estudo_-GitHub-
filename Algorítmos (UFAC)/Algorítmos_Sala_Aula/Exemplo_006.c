#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>
main()
{
    	setlocale(LC_ALL,"portuguese");
    	int idade;                  // Declaração de Variável

     	printf("\n  Digite sua Idade: ");

        scanf("%d" , &idade);                   // Lê a idade

        printf("\n  Sua idade � de  %d anos " ,  idade);

        getch();
}
