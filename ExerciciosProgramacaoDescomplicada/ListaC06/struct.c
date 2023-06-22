#include <stdio.h>
#include <stdlib.h>

/*   
    // Forma geral da struct:
    // struct geralment é definida como escopo global

    struct nome struct  {
        tipo1 nome1;
        tipo2 nome2;
        // ....
        tipoN nomeN;

/*int main (void)    {
    }

return 0;
}*/

//  ### Exemplo ###

// definindo uma estrutura
struct pessoa   {
    char nome[50], rua [50];
    int idade, numero;
};

int main (void)    {
    //declaracao das variaveis
    //char nome[50], rua[50];
    //int idade, numero;
    // struct pessoa p;

    /*  dentro da variavel p esta todas as variaveis declaradas a cima, portanto nao precisa da declaracao a cima
        cada campo (variavel) da struct pode ser acessada usando o operados "."
        declaracao de uma variavel struct    */

    /*  struct pessoa p;
    p.idade = 31; // atribuindo 31 a variavel idade;
    scanf ("%d", &p.numero); // lendo as informacoes digitadas pelo usuario e armazenando-as na variavel numero
    gets (p.nome); //comando de leitura
    p.numero = p.numero + p.idade - 100; //expressao
    printf ("%d", p.numero);
    return 0;   */

    // SEM struct
    char nome1[50], nome2[50], nome3[50], nome4[50];
    int idade1, idade2, idade3, idade4;
    char rua1[50], rua2[50], rua3[50], rua4[50];
    int numero1, numero2, numero3, numero4;

    // COM struct
    struct pessoa p1, p2, p3, p4;
    return 0;  

}