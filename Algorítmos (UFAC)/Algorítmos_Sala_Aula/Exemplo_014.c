#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{   float val,soma;
    int  conta;
    setlocale(LC_ALL,"portuguese");
    soma=0.0;
    conta=0;
    printf("\n  digite valores:");
    printf("\n  Digite -1 para encerrar");
    do
    {
        printf("\n  valor: ");
        scanf("%f",&val);
        if(val < 0.0)
        {                            // se val for negativo...
            continue;                // ...salta para...
        }
        conta=conta+1;               // se (val < 0.0) estas instruções
        soma = soma + val;           // não são executadas!
    }while(val >= 0.0);              // ...fim do laço

    printf("\n  média: %f", soma/conta );
    getch();
}
