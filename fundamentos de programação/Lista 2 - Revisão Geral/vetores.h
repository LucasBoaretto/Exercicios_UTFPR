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

void gerarEImprimirTabuada(int vet[], int pos)
{
    int i, multiplicacao;
    for (i = 0; i <= 10; i++)
    {
        multiplicacao = vet[pos] * i;
        printf("%d * %2d = %2d\n", vet[pos], i, multiplicacao);
    }
}

int QtdeMaiorOcorrencia(int vet[], int tam)
{
    int i, cont = 0, j;
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (i == 0 || vet[j] == vet[i])
            {
                vet[j] = vet[i];
                cont = vet[j];
            }
        }
    }
    return cont;
}

void gerarVetorSemRepeticao(int vetor[], int tam, int lim)
{
    int i, j;

    srand(time(NULL));

    for (i = 0; i < tam; i++)
    {
        vetor[i] = 1 + rand() % lim;

        for (j = 0; j < i; j++) // percorre at� o valor anterior gerado
        {
            if (vetor[i] == vetor[j]) // se j� existe
            {
                i--; // decrementa o i para gerar um novo valor para aquele �ndice
                break;
            }
        }
    }
}

void zerarVetor(int vet[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        vet[i] = 0;
    }
}

int verificarSeHaRepetido(int vet[], int tam, int num)
{
    int i, repetido = 0;
    for (i = 0; i < tam; i++)
    {
        if (vet[i] == num)
        {
            repetido++;
        }
    }
    return repetido;
}

void ordenarVetorInteiro(int vetor[], int tam)
{
    int aux, i, j;

    for (j = tam - 1; j > 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }
}

void gerarVetorInteiroComFaixa(int vet[], int tam, int limInf, int limSup)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vet[i] = (rand() % ((limSup - limInf) + 1)) + limInf;
    }
}
