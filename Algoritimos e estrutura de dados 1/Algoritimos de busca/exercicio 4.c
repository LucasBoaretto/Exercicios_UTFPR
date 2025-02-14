#include <stdio.h>

int busca_sequencial1(int x, int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (x == v[i])
            return i;
    return -1;
}

int buscaGeral(int item, int vet[], int n, int m)
{
    int esquerda = 0;
    int direito = n - 1;

    while (direito - esquerda + 1 > m)
    {
        int meio = esquerda + (direito - esquerda) / 2;

        if (vet[meio] == item)
            return meio;
        else if (vet[meio] < item)
            esquerda = meio + 1;
        else
            direito = meio - 1;
    }

    if (direito >= esquerda)
    {
        for (int i = esquerda; i <= direito; i++)
        {
            printf("%d ", vet[i]);
        }
        printf("\n");

        for (int i = esquerda; i <= direito; i++)
        {
            if (vet[i] == item)
                return i;
        }
    }
    return -1;

    return busca_sequencial1(item, vet, n);
}

int main()
{
    int x, tam, m;
    scanf("%d", &x);
    scanf("%d", &tam);
    int vet[tam];
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &m);
    int resultado = buscaGeral(x, vet, tam, m);

    if (resultado != -1)
    {
        printf("%d", resultado);
    }
    else
    {
        printf("-1");
    }
    return 0;
}