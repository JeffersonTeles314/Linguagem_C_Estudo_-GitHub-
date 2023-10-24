//TODAS AS OPERACOES SOBRE LISTA ENCADEADA SIMPLES
#include <stdio.h>]
#include <stdlib.h>
//ESTRUTURA DA NOSSA LISTA
struct reg{
    int info;
    struct reg *prox;
};
typedef struct reg Celula;
//CRIACAO DA LISTA
void criar_lista(Celula** cabeca){
        *cabeca = NULL;
}
//INSERCAO DE ELEMENTO NA LISTA
void inserir_elemento(Celula** cabeca, int elemento){
    Celula Novo = (Celula)malloc(sizeof(Celula));
    Novo->info = elemento;
    Novo->prox = *cabeca;
    *cabeca = Novo;
}
void imprimir_lista(Celula *cabeca){
    Celula *imp = cabeca;
    while(imp!=NULL){
        printf("%d\n",imp->info);
        imp = imp->prox;
    }
    printf("\n\n");
}
void busca(Celula *cabeca, int elemento){
    Celula *buscar = cabeca;
    while(buscar!=NULL){
        if(buscar->info == elemento){
            printf("\nElemento esta na lista!!!");
            return;
        }
        buscar = buscar->prox;
    }
    printf("Desculpa!!! O elemento nao se encontra na lista!");
}
void deleteElemento(Celula** cabeca, int elemento){
    Celula *atual = *cabeca;
    Celula *ant = NULL;
    while(atual!= NULL && atual->info!=elemento){
        ant = atual;
        atual = atual->prox;
    }
    if(atual == NULL){
        printf("Lista Vazia!");
        return;
    }
    if(ant == NULL){
        *cabeca = atual->prox;
    }else{
        ant->prox = atual->prox;
    }
    free(atual);
}
void liberarLista(Celula** cabeca){
    Celula *atual = *cabeca;
    while(atual!=NULL){
        Celula *temp = atual;
        atual = atual->prox;
        free(temp);
    }
    *cabeca = NULL;
    printf("\nLISTA ESTA VAZIA!!!");
}
int main(){
    Celula *minhaLista;
    criar_lista(&minhaLista);
    inserir_elemento(&minhaLista,1);
    inserir_elemento(&minhaLista,2);
    inserir_elemento(&minhaLista,3);
    imprimir_lista(minhaLista);
    deleteElemento(&minhaLista,2);
    imprimir_lista(minhaLista);
    liberarLista(&minhaLista);
    imprimir_lista(minhaLista);
    return 0;
}