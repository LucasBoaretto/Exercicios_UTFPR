#include <stdio.h>
#include "fila.h"

int main()
{
    Fila *estacionamento = criar_fila();

    // Lendo os tickets dos carros
    int ticket;
    while (1)
    {
        scanf("%d", &ticket);
        if (ticket == -1)
            break;
        enfileirar(estacionamento, ticket);
    }

    // Lendo o ticket a ser procurado
    int ticket_procurado;
    scanf("%d", &ticket_procurado);

    // Gerenciando o estacionamento
    gerenciar_estacionamento(estacionamento, ticket_procurado);

    liberar_fila(estacionamento);

    return 0;
}
