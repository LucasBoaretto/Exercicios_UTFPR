#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define TAM_MAX 100

typedef struct Pilha Pilha;

struct Pilha
{
    int item[TAM_MAX];
    int topo;
};

Pilha *criar_pilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));

    p->topo = -1;

    return p;
}

int pilha_cheia(Pilha *p)
{
    if (p == NULL)
        return -1;
    else if (p->topo >= (TAM_MAX - 1))
        return 1;
    else
        return 0;
}

int pilha_vazia(Pilha *p)
{
    if (p == NULL)
        return -1;
    else if (p->topo < 0)
        return 1;
    else
        return 0;
}

int empilhar(Pilha *p, int item)
{
    if (p == NULL)
        p = criar_pilha();

    if (!pilha_cheia(p))
    {
        p->topo++;

        p->item[p->topo] = item;

        return 1;
    }

    return 0;
}

int desempilhar(Pilha *p)
{
    int item = INT_MIN;

    if (!pilha_vazia(p))
    {
        item = p->item[p->topo];

        p->topo--;
    }

    return item;
}

void imprimir_pilha(Pilha *p)
{
    Pilha aux = *p;
    int item;

    while (!pilha_vazia(&aux))
    {
        item = desempilhar(&aux);

        printf("%d ", item);
    }

    printf("\n");
}

void liberar_pilha(Pilha *p)
{
    if (p != NULL)
        free(p);
}

int obter_posicao_topo(Pilha *p)
{
    if (!pilha_vazia(p))
        return p->topo;
    else
        return -1;
}

int acessar_valor_topo(Pilha *p)
{
    if (!pilha_vazia(p))
        return p->item[p->topo];
    else
        return INT_MIN;
}

Pilha *concatena(Pilha *p1, Pilha *p2)
{
    Pilha *resultado = criar_pilha();
    Pilha *pares = criar_pilha();
    Pilha *impares = criar_pilha();

    // Processando a primeira pilha (p1)
    while (!pilha_vazia(p1))
    {
        int item = desempilhar(p1);
        if (item % 2 == 0)
        {
            empilhar(pares, item); // Empilha os pares
        }
        else
        {
            empilhar(impares, item); // Empilha os ímpares
        }
    }

    // Processando a segunda pilha (p2)
    while (!pilha_vazia(p2))
    {
        int item = desempilhar(p2);
        if (item % 2 == 0)
        {
            empilhar(pares, item); // Empilha os pares
        }
        else
        {
            empilhar(impares, item); // Empilha os ímpares
        }
    }

    // Empilhando os pares (topo da pilha resultado)
    while (!pilha_vazia(pares))
    {
        empilhar(resultado, desempilhar(pares));
    }

    // Empilhando os ímpares (base da pilha resultado)
    while (!pilha_vazia(impares))
    {
        empilhar(resultado, desempilhar(impares));
    }

    liberar_pilha(pares);
    liberar_pilha(impares);

    return resultado;
}
