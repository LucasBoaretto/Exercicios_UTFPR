/*Gerar um vetor com 20 elementos aleatórios entre 5 e 20. Ordenar o vetor. Percorrer o vetor ordenado e
mostrar os pares e a soma dos pares de cada um dos valores armazenados. Caso existam elementos
repetidos, considerar apenas um deles.
Neste exercício, além de utilizar a função gerarVetorInteiroComFaixa(), a função mostrarVetorInteiro() e a
função ordenarVetorInteiro(), criar também função mostrarPares(), que recebe um número e mostra todos os
números pares positivos até esse número, e função somarPares(), que recebe um número e retorna a soma
de todos os números pares positivos até esse número. As funções mostrarPares() e somarPares()devem ser
criadas ema biblioteca chamada "pares.h".*/

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include "pares.h"

void gerarVetorInteiroComFaixa(int vet[], int tam, int limInf, int limSup);
void mostrarVetorInteiros(int vet[], int tam);
void ordenarVetorInteiro(int vetor[], int tam);

int main()
{
    char reset;
    int tam = 20, i, soma;
    do
    {
        int vet[tam];
        printf("\n==== VETOR ORIGINAL ====\n");
        gerarVetorInteiroComFaixa(vet, tam, 5, 20);
        mostrarVetorInteiros(vet, tam);
        printf("\n==== VETOR ORDENADO ====\n");
        ordenarVetorInteiro(vet, tam);
        mostrarVetorInteiros(vet, tam);
        printf("\n==== PARES ====\n");

        for (i = 0; i < tam; i++)
        {
            if (i == 0 || vet[i] != vet[i - 1])
            {
                printf("%2d => ", vet[i]);
                soma = somarPares(vet[i]);
                mostrarPares(vet[i]);
                printf("Soma = %d\n", soma);
            }
        }

        do
        {
            printf("\nExecutar novamente (S ou N)?:");
            fflush(stdin);
            scanf("%c", &reset);
            reset = toupper(reset);

            if (reset != 'S' && reset != 'N')
            {
                printf("Opcao invalida!\n");
            }
        } while (reset != 'S' && reset != 'N');
    } while (reset == 'S');

    return 0;
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
void mostrarVetorInteiros(int vet[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d\t", vet[i]);
    }
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