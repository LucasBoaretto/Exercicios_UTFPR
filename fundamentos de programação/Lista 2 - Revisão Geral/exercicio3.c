/* Ler uma string e armazenar em um vetor o valor decimal ASCII apenas dos caracteres que fazem parte do
alfabeto. Mostrar o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Em uma segunda string, armazenar os
caracteres ordenados do vetor e mostrar a string.*/

#include "bibliotecas.h"

int main()
{

    char string1[100];
    int tam, i;

    printf("Informe uma string: ");
    gets(string1);

    printf("String 1: %s\n", string1);
    tam = contarCaracteresSemEspaco(string1);
    int vet[tam];
    stringParaInt(string1, vet);
    printf("\n== VETOR LETRAS ==\n");
    mostrarVetorInteiros(vet, tam);
    printf("\n== VETOR LETRAS ORDENADO ==\n");
    ordenarVetorInteiro(vet, tam);
    mostrarVetorInteiros(vet, tam);
    char string2[tam];
    for (i = 0; i < tam; i++)
    {
        string2[i] = vet[i];
    }
    printf("String 2: %s", string2);

    return 0;
}