#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
main()
{      int idade;
       setlocale(LC_ALL,"portuguese");

       idade = 40;

       printf("\n    Sua idade é de %d anos" , idade);

       getch();
}

