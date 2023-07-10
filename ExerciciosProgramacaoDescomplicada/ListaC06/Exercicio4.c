#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct    {
    int numMatricula;
    char nome[30];
    float nota1, nota2, nota3;
}Dados;

int main()    {
    Dados aluno[4];

    printf ("\n##### Curso Ciencia da Computacao #####\n");
    for (int i = 0; i < 2; i++)    {
        printf ("\n");
        printf ("Digite o nome do aluno: ");
        fflush (stdin);
        fgets( aluno[i].nome, 30, stdin);

        printf ("Digite o numero da matricula: ");
        scanf ("%d", &aluno[i].numMatricula);
        
        printf ("Digite a nota da prova 1: ");
            scanf ("%f", &aluno[i].nota1);
        printf ("Digite a nota da prova 2: ");
            scanf ("%f", &aluno[i].nota2);
        printf ("Digite a nota da prova 3: ");
            scanf ("%f", &aluno[i].nota3);
    }

    printf ("\n### Dados dos alunos ###\n");
    for (int i = 0; i < 2; i++)    {
        printf ("\n");
        printf ("\nAluno: %s", aluno[i].nome);
        printf ("Numero da matricula: %d", aluno[i].numMatricula);
        printf ("\nDigite a nota da prova 1: %.2f", aluno[i].nota1);
        printf ("\nDigite a nota da prova 2: %.2f", aluno[i].nota2);
        printf ("\nDigite a nota da prova 3: %.2f", aluno[i].nota3);

    }
    
}