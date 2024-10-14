#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{
    	setlocale(LC_ALL,"portuguese");
    	int i;

    	printf("\n Para encerrar digite um valor negativo");
    	do
    	{
       	        printf("\n Digite um valor positivo: ");
                scanf("%d", &i);
    	}while(i>=0);
    	printf("\n Encerrado");
    	getch();
}
