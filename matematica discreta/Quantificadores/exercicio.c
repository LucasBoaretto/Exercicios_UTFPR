#include <stdio.h>

int primo(int x);

int vet67[17] = {13, 62, 44, 25, 28, 39, 17, 58, 66, 55, 38, 51, 12, 62, 75, -67, 94}, i;
int cont = 0, numPrimo, verificador = 0;

int main()
{

    for (i = 0; i < 17; i++)
    {
        if (vet67[i] > 0)
        {
            cont++;
        }
    }

    if (cont == 17)
    {
        printf("Todos os numeros sao positivos\n");
    }
    else if (cont == 0)
    {
        printf("Todos os numeros nao sao positivos\n");
    }

    for (i = 0; i < 17; i++)
    {
        if (primo(vet67[i]) == 0 && vet67[i] > 0)
        {
            verificador++;
        }
    }
    int vetPrimo[verificador], j = 0;
    for (i = 0; i < 17; i++)
    {
        if (primo(vet67[i]) == 0 && vet67[i] > 0)
        {
            vetPrimo[j] = vet67[i];
            j++;
        }
    }

    if (verificador != 0)
    {
        printf("Ha um numero primo cujo valor e");
        for (i = 0; i < verificador; i++)
        {
            printf(" %d ", vetPrimo[i]);
        }
    }
    else
    {
        printf("Nao ha numeros primos\n");
    }

    return 0;
}

int primo(int x)
{
    int i, contDiv = 0;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            contDiv++;
            break;
        }
    }
    return contDiv;
}