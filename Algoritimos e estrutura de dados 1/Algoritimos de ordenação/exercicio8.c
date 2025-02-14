#include <stdio.h>

void bubbleSort(int v[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {

                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void quickSort(int vet[], int baixo, int alto, int m)
{
    if (baixo < alto)
    {

        int aux = vet[alto];
        int i = baixo - 1;
        for (int j = baixo; j < alto; j++)
        {
            if (vet[j] < aux)
            {
                i++;

                int temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }

        int temp = vet[i + 1];
        vet[i + 1] = vet[alto];
        vet[alto] = temp;

        int indiceAux= i + 1;

        if (indiceAux - baixo + 1 > m)
        {
            quickSort(vet, baixo, indiceAux - 1, m);
        }
        else
        {
            bubbleSort(vet + baixo, indiceAux - baixo);
        }

        if (alto - indiceAux > m)
        {
            quickSort(vet, indiceAux + 1, alto, m);
        }
        else
        {
            bubbleSort(vet + indiceAux + 1, alto - indiceAux);
        }
    }
}

int main()
{
    int n, m;

    scanf("%d", &n);
    int vet[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    scanf("%d", &m);

    quickSort(vet, 0, n - 1, m);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}