/*
3. Escreva uma funcao recursiva que calcule a soma dos primeiros n cubos: S(n) = 1^3 + 2^3 + ... + n^3
*/

#include <stdio.h>
#include <math.h>

int somaDosCubos (int N);

int main ()    {
    int N = 2;
    int aux;
    aux = somaDosCubos(N);
    printf ("Soma dos numeros n ao cubo: %d", aux);

}

int somaDosCubos (int N)    {
    if (N < 0)    {
        printf ("Digite um numero inteiro positivo!\n");
    }
    if (N == 0)    {
        return 0;
    } else    {
        return (N*N*N) + somaDosCubos(N-1);
      }
}