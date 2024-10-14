#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{
       setlocale(LC_ALL,"portuguese");

       double  eps;
       int     conta;
       conta =   0;
       eps   = 1.0;
       while( 1.0 + eps > 1.0)
       {
            conta = conta +1;
            eps = eps / 2.0;
            printf("\n giro(%d)    eps = %.24f" , conta , eps);
        }
        printf("\n\n  Total de rotações: %d " , conta);
        printf("\n\n  O zero desse computador é: %.24f" , eps);
        getch();
}
