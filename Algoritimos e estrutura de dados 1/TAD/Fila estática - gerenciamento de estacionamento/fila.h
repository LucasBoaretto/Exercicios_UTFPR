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

int gerenciar_estacionamento(Fila *f, int ticket)
{
    int movimentos = 0;
    int carro_encontrado = 0;

    Fila *temp_fila = criar_fila();

    while (!fila_vazia(f))
    {
        int carro = desenfileirar(f);
        if (carro == ticket)
        {
            carro_encontrado = 1;
            break;
        }
        enfileirar(temp_fila, carro);
        movimentos++;
    }

    // Restaurando os carros na fila
    while (!fila_vazia(temp_fila))
    {
        enfileirar(f, desenfileirar(temp_fila));
    }

    liberar_fila(temp_fila);

    // Imprimir a fila
    imprimir_fila(f);

    // Imprimir o número de movimentos
    printf("%d\n", movimentos);

    // Retornar o resultado
    if (carro_encontrado)
    {
        printf("sucesso\n");
    }
    else
    {
        printf("falha\n");
    }

    return movimentos;
}