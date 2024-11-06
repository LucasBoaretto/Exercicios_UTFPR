#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void criarVetorDe0Limite(int vet[], int tam, int limite);
void imprimirVetor(int vet[], int tam);

int main()
{
    int tam;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetA[tam], vetB[tam], i;

    printf("\n--------------------Vetor A --------------------\n");
    criarVetorDe0Limite(vetA, tam, 10);
    imprimirVetor(vetA, tam);

    printf("\n--------------------Vetor B --------------------\n");
    for (i = 0; i < tam; i++)
    {
        vetB[i] = vetA[i] * 2;
    }

    imprimirVetor(vetB, tam);

    return 0;
}

void criarVetorDe0Limite(int vet[], int tam, int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vet[i] = rand() % (limite + 1);
    }
}

void imprimirVetor(int vet[], int tam)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        printf("%d\t", vet[i]);
    }
}