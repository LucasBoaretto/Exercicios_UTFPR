#include <stdio.h>

void ordenarColunas(float matriz[][100], int linha, int coluna)
{
    for (int j = 0; j < coluna; j++)
    {
        for (int i = 0; i < linha - 1; i++)
        {
            for (int k = i + 1; k < linha; k++)
            {
                if (matriz[i][j] < matriz[k][j])
                {
                    float aux = matriz[i][j];
                    matriz[i][j] = matriz[k][j];
                    matriz[k][j] = aux;
                }
            }
        }
    }
}

void imprimirMatriz(float matriz[][100], int linha, int coluna)
{
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int l, c;
    scanf("%d %d", &l, &c);
    float matriz[100][100];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }

    ordenarColunas(matriz, l, c);
    imprimirMatriz(matriz, l, c);

    return 0;
}