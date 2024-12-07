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

void questao2(int *menor, int *maior, float *media, Fila *F)
{

    *maior = 0;
    int soma = 0, cont = 0;
    Fila aux = *F;
    while (!fila_vazia(&aux))
    {
        int auxiliar = desenfileirar(&aux);
        if (*maior < auxiliar)
        {
            *maior = auxiliar;
            soma += auxiliar;
            cont++;
        }
    }
    *menor = *maior;
    Fila aux2 = *F;
    while (!fila_vazia(&aux2))
    {
        int auxiliar = desenfileirar(&aux2);
        if (*menor > auxiliar)
        {
            *menor = auxiliar;
        }
    }
    *media = soma / (float)cont;

    printf("\nO elemento de menor valor da fila eh: %d\n", *menor);
    printf("\nO elemento de maior valor da fila eh: %d", *maior);
    printf("\nA media aritimetica dos valores armazenados na fila eh: %.2f", *media);
}
