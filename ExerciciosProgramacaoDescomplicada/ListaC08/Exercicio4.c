/*
4. Crie uma funcao recursiva que receba dois inteiros positivos k e n e calcule k^n
*/
#include <stdio.h>
#include <math.h>

int pot(int k, int n);

int main()    {
    int k = 0, n = 0, aux;

    aux = pow(k,n);
    printf("\nValor de %d ^ %d: %d\n", k, n, aux);
    
}

int pot(int k, int n)   {
/*    if (n == 0)   {

}