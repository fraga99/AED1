/*
    1 - Faça um programa que pergunte ao usuário o tamanho do vetor que deseja. 
    Crie o vetor dinamicamente, permita que o usuário preencha e, por fim, imprima os valores de forma ordenada.

*/

#include <stdio.h>
#include <stdlib.h>

int comparador (const void *a, const void *b)   {
    return (*(int*)a - *(int*)b);
}

int main (void)    {
    int n;
    int *vet;

    printf("Digite o tamanho desejado para o vetor: ");
    scanf ("%d", &n);

    vet = (int*)malloc (n * sizeof(int)); // Alocando a memoria para o vetor

        if (vet == NULL)    {
            printf ("\nErro ao alocar a memoria!\n" );
            return 1;
        }

    printf("Digite os elementos do vetor: \n");
        for (int i = 0; i < n; i++)    {
            scanf ("%d", &vet[i]);
        }

    qsort (vet, n, sizeof(int), comparador); //ordenando  o vetor em ordem crescente

    printf ("Vetor em ordem crescente: \n"); 
        for (int i = 0; i < n; i++)     {
            printf ("%d, ", vet[i]);     //Imprimindo o vetor em ordem crescente
        }
    printf("\n");                   
 
free (vet);
return 0;
}
