#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    Fila *f = criar_fila();

    for (int i = 0; i < 10; i++)
    {
        enfileirar(f, i);
    }

    int menor;
    int maior;
    float media;

    questao2(&menor, &maior, &media, f);

    return 0;
}