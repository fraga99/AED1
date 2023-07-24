#include <stdio.h>

void regua (int h); 

int main()    {
    int h;
    printf ("Digite o tamanho da regua: ");
    scanf ("%d", &h);

    regua(h);
}

void regua (int h)    {
    if (h == 0)    {
        printf ("-\n");
        return;
    }

    regua (h - 1);

    for (int i = 0; i < (i < h); i++ )    {
        for (int j = 0; j < h; j++)    {
            printf ("-");
        }
        printf("\n");
    }

    regua (h - 1);
}