#include <stdio.h>

int buscaBinaria(int item, int vet[], int n)
{
    int esquerda = 0, direita = n - 1;

    while (esquerda <= direita)
    {
        int meio = ((esquerda + direita) / 2);

        if (vet[meio] == item)
        {
            return meio;
        }

        if (vet[meio] < item)
        {
            esquerda = meio + 1;
        }
        else
        {
            direita = meio - 1;
        }
    }
    return -1;
}

int main()
{
    int tam, qtdeChaves, chave;
    scanf("%d", &tam);
    int vet[tam];
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &qtdeChaves);
    for (int i = 0; i < qtdeChaves; i++)
    {
        scanf("%d", &chave);
        printf("%d\n", buscaBinaria(chave, vet, tam));
    }

    return 0;
}