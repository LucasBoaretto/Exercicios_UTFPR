void gerarMatrizInteiroDe0ALimite(int linha, int coluna, int matriz[linha][coluna], int limite)
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            matriz[i][j] = rand() % (limite + 1);
        }
    }
}

void gerarMatrizInteiroDe1ALimite(int linha, int coluna, int matriz[linha][coluna], int limite)
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            matriz[i][j] = rand() % limite + 1;
        }
    }
}

void imprimirMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int somarDiagonaPrincipal(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j, soma = 0;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            if (i == j)
            {
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
}

int somarDiagonaSecundaria(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j, soma = 0;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            if (i + j == coluna - 1)
            {
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
}

int somarElementosDaMatriz(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j, soma = 0;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            soma = soma + matriz[i][j];
        }
    }
    return soma;
}

int expoente(int base, int expoente)
{
    int resultado;

    resultado = pow(base, expoente);

    return resultado;
}