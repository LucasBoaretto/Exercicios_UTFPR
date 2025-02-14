#include <stdio.h>

int receberInteiros(int k, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return k * receberInteiros(k, n - 1);
}

void exibeArray(int m, int vet[], int i)
{
    if (m == i)
    {
        printf("\n");
        return;
    }
    printf("%d ", vet[i]);
    exibeArray(m, vet, i + 1);
}

int menorElemento(int m, int vet[], int i)
{
    if (m - 1 == i)
    {
        return vet[i];
    }
    int menor = menorElemento(m, vet, i + 1);

    if (vet[i] < menor)
    {
        return vet[i];
    }
    else
        return menor;
}

int main()
{
    int k, n;
    int m;
    float v;

    scanf("%d %d", &k, &n);
    printf("%d/n", receberInteiros(k, n));
    scanf("%d", &m);
    int vet[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%f", &v);
        vet[i] = v;
    }
    exibeArray(m, vet, 0);
    printf("%d", menorElemento(m, vet, 0));

    return 0;
}
