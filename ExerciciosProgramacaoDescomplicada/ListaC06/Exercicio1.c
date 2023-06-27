#include <stdio.h>
#include <stdlib.h>

struct Horario    {
    int hora;
    int minuto;
    int segundo;
};
struct Data    {
    int dia;
    int mes;
    int ano;
};
struct Compromisso    {
    struct Data data;
    struct Horario hora;
    char compromisso [100];
};

int main()    {


}