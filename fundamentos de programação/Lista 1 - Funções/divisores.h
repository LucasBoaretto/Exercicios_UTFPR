int contDivisores(int x)
{
    int i, cont = 0;

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cont++;
        }
    }
    return cont;
}

void mostraDivisores(int x)
{
    int i;

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d  ", i);
        }
    }
}

int divSoma(int x)
{
    int i, soma = 0;

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            soma = soma + i;
        }
    }
    return soma;
}