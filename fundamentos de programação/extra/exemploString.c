#include <stdio.h>
#include <string.h>

int main()
{

    char texto[20], textoCopiado[20], textoInvertido[20];
    int i = 0, j;

    printf("Informe o texto: ");
    // scanf("%[^\n]s", texto); // nao vai o & pois é um vetor de caracteres mas no de inteiros vai.
    gets(texto);
    // printf("String: %s", texto); // forma manual de imprimir a string
    // puts(texto); //forma automatica de imprimir a string

    while (texto[i] != '\0') // imprime a string e de quebra conta o tamanho dela;
    {
        printf("%c", texto[i]);
        i++;
    }

    /*for (i = 0; texto[i] != '\0'; i++) // faz a mesma coisa que o de cima mas é mais complexo
    {
        printf("%c", texto[i]);
    }*/

    i = 0;
    while (texto[i] != '\0')
    {
        textoCopiado[i] = texto[i];
        i++;
    }
    textoCopiado[i] = '\0';

    printf("\n------Quantidade de caracteres da string copiada------\n");
    i = 0;
    while (textoCopiado[i] != '\0')
    {
        i++;
    }
    printf("%d\n", i);

    printf("\n------String invertida------\n");
    // i = i - 1;
    j = 0;
    for (i = i - 1; i >= 0; i--)
    {
        textoInvertido[j] = texto[i];
        j++;
    }
    textoInvertido[j] = '\0';
    puts(textoInvertido);

    return 0;
}
