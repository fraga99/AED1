#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct    {
    char nome [30];
    int numMatricula;
    char curso[30];
}info;


int main()  {
    info Aluno[5];
    printf ("\n##### Cadastro do aluno #####\n");
    for( int i = 0; i < 5; i++)    {
        printf ("Digite o nome do Aluno: ");
        fflush (stdin);
        fgets (Aluno[i].nome, 30, stdin);

        printf ("Digite o curso do aluno: ");
        fflush (stdin);
        fgets(Aluno[i].curso, 30, stdin);

        printf("Digite o numero de matricula do aluno: ");
        scanf ("%d", &Aluno[i].numMatricula);
        printf("\n");
    }

    printf ("\n\n##### Imprimindo as informacoes do aluno #####\n\n");
    for (int i = 0; i < 5; i++)    {
        printf ("Nome do aluno: %sCurso: %sMatricula: %d\n\n", Aluno[i].nome, Aluno[i].curso, Aluno[i].numMatricula);
    }
    return 0;
}