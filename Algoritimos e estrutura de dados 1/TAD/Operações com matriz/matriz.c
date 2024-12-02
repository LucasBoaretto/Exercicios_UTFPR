#include <stdio.h>
#include <stdlib.h>
#include "Matriz.h"

Matriz *iniciar(int l, int c)
{
    Matriz *m = (Matriz *)malloc(sizeof(Matriz));
    m->l = l;
    m->c = c;
    m->arr = (int **)malloc(l * sizeof(int *));
    for (int i = 0; i < l; i++)
    {
        m->arr[i] = (int *)malloc(c * sizeof(int));
    }
    return m;
}

void alterar(Matriz *m, int x, int i, int j)
{
    if (m && i >= 0 && i < m->l && j >= 0 && j < m->c)
    {
        m->arr[i][j] = x;
    }
}

int *obter_linha(Matriz *m, int i)
{
    if (m && i >= 0 && i < m->l)
    {
        return m->arr[i];
    }
    return NULL;
}

int *obter_coluna(Matriz *m, int j)
{
    if (m && j >= 0 && j < m->c)
    {
        int *coluna = (int *)malloc(m->l * sizeof(int));
        for (int i = 0; i < m->l; i++)
        {
            coluna[i] = m->arr[i][j];
        }
        return coluna;
    }
    return NULL;
}

Matriz *obter_submat(Matriz *m, int li, int ci, int lf, int cf)
{
    if (m && li >= 0 && ci >= 0 && lf < m->l && cf < m->c && li <= lf && ci <= cf)
    {
        int l = lf - li + 1;
        int c = cf - ci + 1;
        Matriz *submat = iniciar(l, c);
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                submat->arr[i][j] = m->arr[li + i][ci + j];
            }
        }
        return submat;
    }
    return NULL;
}

void liberar_matriz(Matriz *m)
{
    if (m)
    {
        for (int i = 0; i < m->l; i++)
        {
            free(m->arr[i]);
        }
        free(m->arr);
        free(m);
    }
}
