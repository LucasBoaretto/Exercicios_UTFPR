#include <stdio.h>
#include "Matriz.h"

int main()
{
    int l, c;
    scanf("%d %d", &l, &c);

    Matriz *m = iniciar(l, c);

    // Preenchendo a matriz com os valores fornecidos
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int val;
            scanf("%d", &val);
            alterar(m, val, i, j);
        }
    }

    int pl, pc;
    scanf("%d %d", &pl, &pc);

    int li, ci, lf, cf;
    scanf("%d %d %d %d", &li, &ci, &lf, &cf);

    // Imprimindo a linha
    int *linha = obter_linha(m, pl);
    if (linha)
    {
        for (int i = 0; i < m->c; i++)
        {
            printf("%d ", linha[i]);
        }
    }
    printf("\n\n");

    // Imprimindo a coluna
    int *coluna = obter_coluna(m, pc);
    if (coluna)
    {
        for (int i = 0; i < m->l; i++)
        {
            printf("%d ", coluna[i]);
        }
        free(coluna); // Liberar a memória alocada
    }
    printf("\n\n");

    // Imprimindo a submatriz
    Matriz *submat = obter_submat(m, li, ci, lf, cf);
    if (submat)
    {
        for (int i = 0; i < submat->l; i++)
        {
            for (int j = 0; j < submat->c; j++)
            {
                printf("%d ", submat->arr[i][j]);
            }
            printf("\n");
        }
        liberar_matriz(submat); // Liberar a submatriz
    }

    liberar_matriz(m); // Liberar a matriz principal

    return 0;
}
