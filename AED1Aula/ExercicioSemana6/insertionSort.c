#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort (int *vet, int X); 
    

int main()  {
    clock_t inicio, fim;
    double tempoDecorrido;
    
    int *vet, X = 10;

    srand(time(NULL));
    inicio = clock();
    vet = malloc (X * sizeof(int));

    if (vet)    {
        printf ("Memoria alocada com sucesso! ");
        for (int i = 0; i < X; i++) {
            *(vet + i) = rand() % X;
        }
        printf ("\nVetor desordenado: \n");
        for (int i = 0; i < X; i++) {
            printf ("[%d] ", *(vet + i));           
        }
        printf ("\n");
    } else  {
        printf ("Erro ao alocar a memoria! ");
     }
    insertionSort(vet, X);


        fim = clock(); //Fim da contagem do tempo do codigo
        tempoDecorrido = (double)(fim-inicio)/ CLOCKS_PER_SEC;
        printf("\nTempo decorrido: %f segundos\n", tempoDecorrido);
        return 0;
}

void insertionSort (int *vet, int X)  {
    int i, j, atual;
    for (i = 0; i < X; i++)    {
        atual = vet[i];
        for (j = i; (j > 0) && (atual < vet[j - 1]); j--)    {
                vet[j] = vet[j - 1];
        }
    vet[j] = atual;
    }
    printf("\nVetor ordenado: \n");
    for (i = 0; i < X; i++)    {
            printf ("[%d] ", *(vet + i));           
    }


free (vet);
}