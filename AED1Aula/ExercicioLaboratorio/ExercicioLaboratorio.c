#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multMatriz(int **matA, int **matB, int **matC, int tamMatriz);
void imprimir(int **matC, int tamMatriz);


int main (void)    {
    clock_t inicio, fim;
    double tempo_decorrido;

    int **matA, **matB, **matC;
    int tamMatriz, nl, nc;

    srand(time(NULL));

    printf ("Digite o tamanho da matriz: ");
    scanf ("%d", &tamMatriz);

    inicio = clock(); // Inicio da contagem do tempo do codigo
    for (int i = 0; i < 1000000000; i++)    {
        matA = malloc (tamMatriz * sizeof(int*)); 
        for (int i = 0; i < tamMatriz; i++)    {
            matA[i] = (int*)malloc (tamMatriz * sizeof(int));
        }

        matB = malloc (tamMatriz * sizeof(int*));
        for (int i = 0; i < tamMatriz; i++)    {
            matB[i] = (int*)malloc (tamMatriz * sizeof(int));
        }

        matC = malloc (tamMatriz * sizeof(int*));
        for (int i = 0; i < tamMatriz; i++)    {
            matC[i] = (int*)malloc (tamMatriz * sizeof(int));
        }

        for (nl = 0; nl < tamMatriz; nl++)     {
            for (nc = 0; nc < tamMatriz; nc++)     {
                matA[nl][nc] = rand() % tamMatriz;
            }
        }

        for (nl = 0; nl < tamMatriz; nl++)     {
            for (nc = 0; nc < tamMatriz; nc++)     {
                matB[nl][nc] = rand() % tamMatriz;
            }
        }
        multMatriz(matA, matB, matC, tamMatriz);  
        imprimir(matC, tamMatriz);

        fim = clock(); //Fim da contagem do tempo do codigo
        tempo_decorrido = (double)(fim-inicio)/ CLOCKS_PER_SEC;
        printf("Tempo decorrido: %f segundos\n", tempo_decorrido);
        return 0;
    }
}

void multMatriz(int **matA, int **matB, int **matC, int tamMatriz)    {
    int nl, nc;
    for (nl = 0; nl < tamMatriz; nl++)    {
        for (nc = 0; nc < tamMatriz; nc++)    {
            matC[nl][nc] = 0;
            for (int i = 0; i < tamMatriz; i++)    {
                matC[nl][nc] += matA[nl][i] * matB[i][nc];
            }
        }
    }
    free(matA);
    free(matB);
}

void imprimir(int **matC, int tamMatriz)    {
    int nl, nc;
    printf ("Matriz C: \n");

    for (nl = 0; nl < tamMatriz; nl++)     {
        for (nc = 0; nc < tamMatriz; nc++)     {
            printf ("%d ", *(*(matC + nl) + nc));
        }   
    printf ("\n");
    }
    free(matC);
}
