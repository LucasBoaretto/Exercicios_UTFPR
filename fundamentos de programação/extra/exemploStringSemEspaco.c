#include <stdio.h>
#include <string.h>

int contarCaracteres(char vet[]);
int contarCaracteresSemEspaco(char vet[]);

int main()
{
    char texto[100];

    printf("Informe um texto: ");
    gets(texto);
    printf("Caracteres com espaco: %d\n", contarCaracteres(texto));
    printf("Caracteres sem espaco: %d\n", contarCaracteresSemEspaco(texto));

    return 0;
}

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