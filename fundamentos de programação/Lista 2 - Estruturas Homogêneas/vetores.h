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
void gerarVetorCharMinuscula(char vetor[], int tam)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % 26 + 97;
    }
}

void gerarVetorCharMaiuscula(char vetor[], int tam)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % 26 + 65;
    }
}

void mostrarVetorChar(char vetor[], int tam, int n)
{
    int i, contLinha = 0;
    for (i = 0; i < tam; i++)
    {
        printf("%c ", vetor[i]);
        contLinha++;
        if (contLinha % n == 0)
        {
            printf("\n");
        }
    }
}

void gerarVetorPositivoNegativo(int vetor[], int tam, int limNegativo, int limPositivo)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = rand() % (limPositivo + limNegativo + 1) - limNegativo;
    }
}

void gerarVetorFloat0a1(float vetor[], int tam)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = (float)(rand()) / RAND_MAX;
    }
}

void gerarVetorFloat0a100(float vetor[], int tam)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vetor[i] = ((float)(rand()) / RAND_MAX) * 100;
    }
}

void mostrarVetorFloat(float vetor[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%.1f\t", vetor[i]);
    }
}

float somarVetorFloat(float vetor[], int tam)
{
    int i;
    float soma = 0;
    for (i = 0; i < tam; i++)
    {
        soma = soma + vetor[i];
    }
    return soma;
}