/*
1. Crie uma func¸ao recursiva que receba um n ˜ umero inteiro positivo N e calcule o somat ´ orio ´
dos numeros de 1 a N. 
*/

#include <stdio.h>
#include <stdlib.h>

int recursao (int N);

int main()    {
    int N = 3, rec;
    //printf ("Digite um valor inteiro positivo para realizar seu somatorio:");
    //scanf("%d", &N);

    rec = recursao(N);
    printf ("\nValor do somatorio: %d", rec);

}


int recursao (int N)   {
if (N < 0)  {
    printf ("Digite um numero inteiro positivo!\n");
}

if (N == 0)    {
    return 0;
}   else   {
        return N + recursao(N-1);
    }
}