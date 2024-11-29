#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int **arr; // Matriz l x c (arranjo bidimensional)
    int l;     // quantidade de linhas
    int c;     // quantidade de colunas
} Matriz;

Matriz *iniciar(int l, int c);

void alterar(Matriz *m, int x, int i, int j);

int *obter_linha(Matriz *m, int i);

int *obter_coluna(Matriz *m, int i);

Matriz *obter_submat(Matriz *m, int li, int ci, int lf, int cf);