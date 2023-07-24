#include <stdio.h>
#include <stdlib.h>

int fibonacci (int n);


int main()  {
    int n = 4, aux;
    aux = fibonacci(n);

    printf ("Fibonacci: %d", aux);

return 0;
}

int fibonacci (int n)   {
    if ( n == 0 || n == 1)    {
        return n;
    } else    {
        return fibonacci(n-1) + fibonacci(n-2);
    }

}