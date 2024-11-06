void mostrarPares(int x)
{
    int i;
    for (i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d  ", i);
        }
    }
}

int somarPares(int x)
{
    int i, soma = 0;
    for (i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            soma = soma + i;
        }
    }
    return soma;
}