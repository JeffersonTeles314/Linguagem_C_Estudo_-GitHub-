#include <stdio.h>

int main(){
        
    int x = 5; //Cria uma variável
    int *pt_x; //Cria um Ponteiro
    // pt_x = &x; //Aponta o Ponteiro Para a Variável
    *pt_x = x;

    printf("%p\n",pt_x);
    printf("%p",*pt_x);

}