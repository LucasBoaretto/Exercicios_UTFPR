#include <stdio.h>
#include "fila.h"

int main()
{

    Fila *E1 = criar_fila();
    Fila *E2 = criar_fila();
    Fila *E3 = criar_fila();
    Fila *R = criar_fila();

    int valor;
    while (scanf("%d", &valor) && valor != -1)
    {
        enfileirar(E1, valor);
    }
    printf("\n----\n");
    while (scanf("%d", &valor) && valor != -1)
    {
        enfileirar(E2, valor);
    }
    printf("\n----\n");
    while (scanf("%d", &valor) && valor != -1)
    {
        enfileirar(E3, valor);
    }
    printf("\n----\n");

    gerenciar_transito(E1, E2, E3, R);

    imprimir_fila(R);

    liberar_fila(E1);
    liberar_fila(E2);
    liberar_fila(E3);
    liberar_fila(R);

    return 0;
}
