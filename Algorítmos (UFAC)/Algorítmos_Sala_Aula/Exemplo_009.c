#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{
    setlocale(LC_ALL,"portuguese");
    int a;
    printf("\n Entre com um n�mero:");
    scanf("%d", &a);
    if( a > 10)
    {
        	printf("\n\n O n�mero digitado � maior que 10");
        	printf("\n\n %d > 10" , a);
    }
    else
    {
        	printf("\n\n O n�mero digitado � menor ou igual que 10");
        	printf("\n\n %d <= 10" , a);
    }
    getch();
}
