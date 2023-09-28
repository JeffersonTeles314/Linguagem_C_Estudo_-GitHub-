#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
struct alunos{
    char nome[50];
    int matricula;
    char cursos [30];
    
}alunos[5];

    for (i=0;i<5;i++){
        printf("Digite o nome do %d aluno.: ", i+1);
        scanf("%s", &alunos[i].nome);
        printf("Digite a matricula do %d aluno.: ", i+1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o curso do %d aluno.: ", i+1);
        scanf("%s", &alunos[i].cursos);
        fflush(stdin);    

    }
    for (i=0;i<5;i++){
        printf("%s \t %d\t %s", alunos[i].nome, alunos[i].matricula, alunos[i].cursos);
        
    }

return 0;
    
}