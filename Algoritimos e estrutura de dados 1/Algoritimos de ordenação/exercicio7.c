#include <stdio.h>

void quicksort(int x[], int esq, int dir)
{
    int i = esq, j = dir, pivo = x[(i + j) / 2], aux;
    do
    {
        while (x[i] < pivo)
            i++;
        while (x[j] > pivo)
            j--;
        if (i <= j)
        {
            aux = x[i];
            x[i] = x[j];
            x[j] = aux;
            i++;
            j--;
        }
    } while (i <= j);
    if (j > esq)
        quicksort(x, esq, j);
    if (i < dir)
        quicksort(x, i, dir);
}

int main()
{
    int tam;
    scanf("%d", &tam);
    int vet[tam];
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
    quicksort(vet, 0, tam - 1);
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}