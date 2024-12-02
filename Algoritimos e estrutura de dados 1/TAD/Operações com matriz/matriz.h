#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct
{
    int **arr; // Matriz l x c
    int l;     // Quantidade de linhas
    int c;     // Quantidade de colunas
} Matriz;

// Inicializa uma matriz com as dimensões especificadas
Matriz *iniciar(int l, int c);

// Altera o valor na posição [i][j] da matriz
void alterar(Matriz *m, int x, int i, int j);

// Obtém a linha na posição i
int *obter_linha(Matriz *m, int i);

// Obtém a coluna na posição j
int *obter_coluna(Matriz *m, int j);

// Obtém uma submatriz de [li][ci] a [lf][cf]
Matriz *obter_submat(Matriz *m, int li, int ci, int lf, int cf);

// Libera a memória da matriz
void liberar_matriz(Matriz *m);

#endif
