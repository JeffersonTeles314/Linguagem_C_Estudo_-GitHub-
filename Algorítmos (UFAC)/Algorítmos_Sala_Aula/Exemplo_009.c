#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{
    setlocale(LC_ALL,"portuguese");
    int a;
    printf("\n Entre com um número:");
    scanf("%d", &a);
    if( a > 10)
    {
        	printf("\n\n O número digitado é maior que 10");
        	printf("\n\n %d > 10" , a);
    }
    else
    {
        	printf("\n\n O número digitado é menor ou igual que 10");
        	printf("\n\n %d <= 10" , a);
    }
    getch();
}
