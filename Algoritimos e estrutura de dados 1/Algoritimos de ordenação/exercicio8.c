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

        int pivo = vet[alto];
        int i = baixo - 1;
        for (int j = baixo; j < alto; j++)
        {
            if (vet[j] < pivo)
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

        int indicePivo = i + 1;

        if (indicePivo - baixo + 1 > m)
        {
            quickSort(vet, baixo, indicePivo - 1, m);
        }
        else
        {
            bubbleSort(vet + baixo, indicePivo - baixo);
        }

        if (alto - indicePivo > m)
        {
            quickSort(vet, indicePivo + 1, alto, m);
        }
        else
        {
            bubbleSort(vet + indicePivo + 1, alto - indicePivo);
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