int contarCaracteres(char vet[])
{
    int i = 0;
    while (vet[i] != '\0')
    {
        i++;
    }
    return i;
}

int contarCaracteresSemEspaco(char vet[])
{
    int i = 0, cont = 0;
    while (vet[i] != '\0')
    {
        if (vet[i] != ' ')
        {
            cont++;
        }
        i++;
    }
    return cont;
}

