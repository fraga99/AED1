/*
2. Faca uma funcao recursiva que calcule e retorne o fatorial de um numero inteiro N
*/
#include <stdio.h>

int fatorial (int N);

int main()    {
    int N = 4, aux;

    aux = fatorial(N);

    printf ("\nValor do fatorial: %d", aux);
}

int fatorial (int N)    {
    if ( N < 0 )    {
        printf ("Digite um numero inteiro positivo!\n");
    }
    if (N == 0)    {
        return 1;
    }   else    {
            return N * fatorial(N-1);
        }
}