#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{

    Pilha *par = criar_pilha();
    Pilha *impar = criar_pilha();
    Pilha *pos = criar_pilha();

    int dados, contador = 0;
    printf("\nInsira valores para empilhar(0 encerra a entrada de dados):\n");
    do
    {
        scanf("%d", &dados);
        if (dados % 2 == 0 && dados != 0)
        {
            empilhar(par, dados);
        }
        else if (dados % 2 != 0 && dados != 0)
        {
            empilhar(impar, dados);
        }
        contador++;
    } while (dados != 0);

    while (!pilha_vazia(par))
    {
        int item = desempilhar(par);
        if (item > 0)
        {
            empilhar(pos, item);
        }
    }

    while (!pilha_vazia(impar))
    {
        int item = desempilhar(impar);
        if (item > 0)
        {
            empilhar(pos, item);
        }
    }

    printf("Pilha obtida: ");
    imprimir_pilha(pos);
    liberar_pilha(pos);
    liberar_pilha(par);
    liberar_pilha(impar);

    return 0;
}