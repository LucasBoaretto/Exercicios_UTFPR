/*Criar uma função para gerar valores aleatórios em um vetor com o seguinte protótipo:
void gerarVetorInteiroComFaixa(int vet[], int tam, int limInf, int
limSup);
Sendo que limInf e limSup são os limites da faixa de valores sorteados.
Dica: Use vetor[i] = (rand() % ((limSup - limInf) + 1)) + limInf; para
gerar valores aleatórios entre os limites informados.
Usando a função gerarVetorInteiroComFaixa(), gerar aleatoriamente um vetor com 20 elementos entre 5 e 20.
Em seguida ordenar o vetor. Percorrer o vetor ordenado e mostrar os divisores e a quantidade de divisores de
cada um dos valores armazenados. Caso existam elementos repetidos, considerar apenas um deles.
Atenção: Neste exercício, além de utilizar a função gerarVetorInteiroComFaixa(), usar também a função
mostrarVetorInteiro(), para exibir os elementos de um vetor, a função ordenarVetorInteiro(), para ordenar os
elementos de um vetor, e as funções mostrarDivisores() e qtdeDivisores(), que criadas em listas de exercícios
anteriores e estão armazenadas em uma biblioteca chamada "divisores.h"*/

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void gerarVetorInteiroComFaixa(int vet[], int tam, int limInf, int limSup);
void mostrarVetorInteiros(int vet[], int tam);
void ordenarVetorInteiro(int vetor[], int tam);
int contDivisores(int x);
void mostraDivisores(int x);

int main()
{
    char reset;
    int tam = 20, i, cont;
    do
    {

        int vetA[tam];
        printf("==== VETOR ORIGINAL ====\n");
        gerarVetorInteiroComFaixa(vetA, tam, 5, 20);
        mostrarVetorInteiros(vetA, tam);
        printf("\n==== VETOR ORDENADO ====\n");
        ordenarVetorInteiro(vetA, tam);
        mostrarVetorInteiros(vetA, tam);

        printf("\n==== DIVISORES ====\n");
        for (i = 0; i < tam; i++)
        {
            if (i == 0 || vetA[i] != vetA[i - 1])
            {
                printf("%d => ", vetA[i]);
                cont = contDivisores(vetA[i]);
                mostraDivisores(vetA[i]);
                if (cont > 0)
                {
                    printf("- %d divisores", cont);
                }
                printf("\n");
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