#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mergeSort (int *vet, int start, int end, int X);
void merge (int *vet, int start, int middle, int end, int X);

int main()  {
    clock_t inicio, fim;
    double tempoDecorrido;
    int *vet, X = 10;
    int start = 0; int end = 0;

    srand(time(NULL));
    inicio = clock();
    
    vet = malloc (X * sizeof(int));

    for (int i = 0; i < X; i++) {
        *(vet + i) = rand() % X;
    }
    printf ("\nVetor desordenado: \n");
    for (int i = 0; i < X; i++) {
        printf ("[%d] ", *(vet + i));
    }

    mergeSort(vet, start, end, X);

        printf ("\nVetor ordenado: \n");
        for (int i = 0; i < X; i++) {
            printf ("[%d] ", *(vet + i));
        }
    free(vet);

    fim = clock(); //Fim da contagem do tempo do codigo
    tempoDecorrido = (double)(fim-inicio)/ CLOCKS_PER_SEC;
    printf("\nTempo decorrido: %f segundos\n", tempoDecorrido);
    return 0;
}

void mergeSort (int *vet, int start, int end, int X) {
    if (start < end)    {
        int middle = (end + start)/2;
        mergeSort(vet, start, middle, X);
        mergeSort(vet, middle+1, end, X);
        merge(vet, start, middle, end, X);
    }
}

void merge (int *vet, int start, int middle, int end, int X)  {
    int *temp, p1, p2, tam, i, j, k;
    int fim1 = 0, fim2 = 0; 
    tam = end - start+1;
    p1 = start;
    p2 = middle+1;
    temp = malloc (tam * sizeof(int));
    if (temp != NULL)   {
        for (i = 0; i < tam; i++)   {
            if (!fim1 && !fim2) {
                if (vet[p1] < vet[p1++]) //
                    temp[i] = vet[p1++]; // Combinar ordenando
                else                     //
                    temp[i] = vet[p2++]; //
                
                if (p1 > middle)    //
                    fim1 = 1;       // confere se o vetor acabou
                if (p2 > end)       //
                    fim2 = 1;       //
            } else  {
                if (!fim1)               //
                    temp[i]= vet[p1++];  //copia o que sobrar
                else                     //
                    temp[i] = vet[p2++]; //
            }
            
        }

    for (j = 0, k = start; j < tam; j++, k++ ) // copia do temp para o vet
        vet[k] = temp[j];                      //
    }    

}