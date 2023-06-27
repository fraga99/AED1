#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct    {
    char nome[30];
    int idade;
    char endereco[50];
}Dados;


int main ()    {
    Dados Pessoa;
    printf ("Digite o nome da pessoa: ");
    scanf ("%s", Pessoa.nome);
    printf ("\nDigite a idade: ");
    scanf ("%d", &Pessoa.idade);
    printf ("\nDigite o endereco da pessoa: ");
    scanf ("%s", Pessoa.endereco);

    printf ("\n\nApresentacao dos dados\n\n");
    printf ("Nome: %s\nIdade: %d\nEndereco: %s", Pessoa.nome, Pessoa.idade, Pessoa.endereco);
    
    return 0;
}   