char contarCaracteres(char vet[])
{
    int i = 0;
    while (vet[i] != '\0')
    {
        i++;
    }
    return i;
}

char contarCaracteresSemEspaco(char vet[])
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

char contarEspacos(char vet[])
{
    int i = 0, contEsp = 0;
    while (vet[i] != '\0')
    {
        if (vet[i] == ' ')
        {
            contEsp++;
        }
        i++;
    }
    return contEsp++;
}

char compararStringComSubstring(char vetA[], char vetB[])
{
    int i = 0, j, retorno = 0;
    while (vetA[i] != '\0')
    {
        if (vetA[i] == vetB[0])
        {
            j = 0;
            while (vetB[j] != '\0' && vetA[i] != '\0')
            {
                if (vetA[i] != vetB[j])
                {
                    break;
                }
                i++;
                j++;
            }
            if (vetB[j] == '\0')
            {
                retorno = 1;
            }
        }
        i++;
    }
    return retorno;
}

void concatenarString(char vetA[], char vetB[])
{
    int i = 0, j = 0;
    while (vetA[i] != '\0')
    {
        i++;
    }
    vetA[i] = ' ';
    i++;
    while (vetB[j] != '\0')
    {
        vetA[i] = vetB[j];
        i++;
        j++;
    }
    vetA[i] = '\0';
}

char contarLetraRepetida(char vet[], char letra)
{
    int i = 0, contLetra = 0;
    while (vet[i] != '\0')
    {
        if (vet[i] == letra)
        {
            contLetra++;
        }
        i++;
    }
    return contLetra;
}

int contarPalavrasEmString(char vet[])
{
    int i, contPalavra = 0;

    i = 0;
    if (vet[0] != ' ')
    {
        contPalavra++;
    }
    while (vet[i] != '\0')
    {
        if (vet[i] == ' ' && vet[i + 1] != ' ' && vet[i + 1] != '\0')
        {
            contPalavra++;
        }
        i++;
    }
    return contPalavra;
}

void contarLetrasDePalavras(char string[], int vet[])
{
    int i = 0, contLetras = 0, j = 0;

    while (string[i] != '\0')
    {
        if (string[i] != ' ')
        {
            contLetras++;
            if (string[i + 1] == ' ' || string[i + 1] == '\0')
            {
                vet[j] = contLetras;
                j++;
                contLetras = 0;
            }
        }
        i++;
    }
}