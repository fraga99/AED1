#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu();                          //funcao menu
//void encontrarValor (int *x);       //funcao usada para encontrar o valor informado pelo usuario
//void calculaProduto ();             //funcao para calcular todos os elementos do vetor
//void contadorDeValores (int *v);    //funcao para contar quantas vezes determinado valor informado pelo usuario aparece no vetor
//void verificaOrdem ();              //funcao para verificar a ordem 
//void maioresValores();              //funcao para mostrar todos os numeros que sao maiores que a media de todos os numeros informados
void imprimirVetor();               //funcao para imprimir o vetor

int main()  {
    int numAleatorio = 25;
    int *vetor;
    vetor = (int*)malloc (numAleatorio * sizeof(int));

    srand ( time(NULL)); 
        for (int i = 0; i< numAleatorio; i++)    {
            printf("Numero %d: %d\n", i, rand()%numAleatorio);
        }
   
    menu();
return 0;
}

void menu()     {  
    int escolha;
    printf ("\n ##### Menu #####");
    printf ("\n1-Encontrar o valor\n2-Calcular o produto\n3-Conta os valores\n4-Verificador de ordem\n5-Mostrar os maiores valores\n6-Imprimir o vetor\n0-Sair\n");
    printf ("Digite o valores desejado: ");
    scanf ("%d", &escolha); 
    switch (escolha)    {
        case (1):
            //encontrarValor();            
        break;

        case (2):
            //calculaProduto();            
        break;
        
        case (3):
            //contadorDeValores();    
        break;

        case (4):
            //verificaOrdem();
        break;

        case (5):
            //maioresValores();
        break;

        case (6):
            imprimirVetor();
        break;

        case (0):
            printf ("\nSaindo...\n");
        break;

        default:
            printf ("\nDigite a opcao corretamente!!!\n");
            menu(escolha);
        break;
    }
}

/*void encontrarValor (int *x)     {

}*/

/*void calculaProduto ()     {

}*/

/*void contadorDeValores (int *v)    {

}*/

/*void verificaOrdem ()    {

}*/

/*void maioresValores()    {

}*/

void imprimirVetor(int escolha, int *vetor)    {
    int numAleatorio = 25;
    for (int i = 0; i < numAleatorio; i++)     {
        printf ("%d", vetor[i]);
    }
    printf("\n");
menu(escolha);
}