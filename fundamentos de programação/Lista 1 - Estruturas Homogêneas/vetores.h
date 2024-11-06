void criarVetorDe0Limite(int vet[], int tam, int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vet[i] = rand() % (limite + 1);
    }
}

void mostrarVetorInteiros(int vet[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d\t", vet[i]);
    }
}

void gerarVetorInteiroDe1aLimite(int vet[], int tam, int limite)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vet[i] = rand() % limite + 1;
    }
}
