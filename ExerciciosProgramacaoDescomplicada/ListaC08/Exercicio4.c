/*
4. Crie uma funcao recursiva que receba dois inteiros positivos k e n e calcule k^n
*/
#include <stdio.h>
#include <math.h>

int pot(int k, int n);

int main()    {
    int k = 2, n = 2, aux;

    aux = pot(k,n);

    printf("\nValor de %d ^ %d: %d\n", k, n, aux);
    
}

int pot(int k, int n)   {
    if (n == 0)    {
        return 1;
    } else if (n % 2 == 0)  {
        int temp = pot(k,n/2);
        return temp * temp;
      } else  {
            int temp = pot(k,(n-1)/2);
            return k * temp * temp;
        }
}