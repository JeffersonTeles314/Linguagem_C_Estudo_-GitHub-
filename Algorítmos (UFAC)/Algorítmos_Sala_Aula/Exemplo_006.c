#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>
main()
{
    	setlocale(LC_ALL,"portuguese");
    	int idade;                  // declaração de variável

     	printf("\n  Digite sua Idade: ");

        scanf("%d" , &idade);                   // Lê a idade

        printf("\n  Sua idade é de  %d anos " ,  idade);

        getch();
}
