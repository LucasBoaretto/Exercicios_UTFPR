#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define TAM_MAX 10

typedef struct Fila Fila;

struct Fila
{
    int item[TAM_MAX];
    int ini;
    int fim;
    int tam;
};

Fila *criar_fila()
{
    Fila *f = (Fila *)malloc(sizeof(Fila));

    f->ini = -1;
    f->fim = -1;
    f->tam = 0;

    return f;
}

int fila_cheia(Fila *f)
{

    if (f == NULL)
        return -1;
    else if (f->tam < TAM_MAX)
        return 0;
    else
        return 1;
}

int fila_vazia(Fila *f)
{
    if (f == NULL)
        return -1;
    else if (f->tam > 0)
        return 0;
    else
        return 1;
}

int enfileirar(Fila *f, int chave)
{
    if (f == NULL)
        f = criar_fila();

    if (!fila_cheia(f))
    {
        if (f->ini < 0)
            f->ini = 0;

        if (f->fim < TAM_MAX - 1)
            f->fim++;
        else
            f->fim = 0;

        f->item[f->fim] = chave;

        f->tam++;

        return 1;
    }

    return 0;
}

int desenfileirar(Fila *f)
{
    int item = INT_MIN;

    if (!fila_vazia(f))
    {
        item = f->item[f->ini];

        if (f->ini < TAM_MAX - 1)
            f->ini++;
        else
            f->ini = 0;

        f->tam--;

        if (f->tam == 0)
        {
            f->ini = -1;
            f->fim = -1;
        }
    }

    return item;
}

void imprimir_fila(Fila *f)
{
    Fila aux = *f;
    int item;

    while (!fila_vazia(&aux))
    {
        item = desenfileirar(&aux);

        printf("%d ", item);
    }

    printf("\n");
}

void liberar_fila(Fila *f)
{
    if (f != NULL)
        free(f);
}

int tamanho_fila(Fila *f)
{
    if (f != NULL)
        return f->tam;
    else
        return 0;
}

int verificar_inicio(Fila *f)
{
    if (!fila_vazia(f))
        return f->item[f->ini];
    else
        return INT_MIN;
}

int verificar_fim(Fila *f)
{
    if (!fila_vazia(f))
        return f->item[f->fim];
    else
        return INT_MIN;
}

void gerenciar_transito(Fila *E1, Fila *E2, Fila *E3, Fila *R)
{
    Fila *estradas[3] = {E1, E2, E3};
    int i = 0;

    while (!fila_vazia(E1) || !fila_vazia(E2) || !fila_vazia(E3))
    {
        Fila *atual = estradas[i];
        int transferidos = 0;

        while (!fila_vazia(atual) && transferidos < 3)
        {
            enfileirar(R, desenfileirar(atual));
            transferidos++;
        }

        // Passa para a próxima estrada
        i = (i + 1) % 3;
    }
}