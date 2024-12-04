#include <stdio.h>
#include "pilha.h"

int main()
{
    Pilha *p1 = criar_pilha();
    Pilha *p2 = criar_pilha();

    int num;

    // Lendo a primeira pilha
    while (scanf("%d", &num) && num != -1)
    {
        empilhar(p1, num);
    }

    // Lendo a segunda pilha
    while (scanf("%d", &num) && num != -1)
    {
        empilhar(p2, num);
    }

    Pilha *resultado = concatena(p1, p2);
    imprimir_pilha(resultado);

    liberar_pilha(p1);
    liberar_pilha(p2);
    liberar_pilha(resultado);

    return 0;
}
