/* Criar um arquivo de cabeçalho chamado vetores.h com:
- Função para gerar valores aleatórios inteiros que variem entre 0 e limite em um vetor;
- Função para mostrar um vetor de números inteiros.
Utilizar essas funções para:
a) Gerar números inteiros em um vetor em que a quantidade de elementos e o valor do limite sejam
informados pelo usuário. Validar as entradas para que sejam informados valores inteiros positivos.
b) Mostrar o vetor de números inteiros.
c) Encontrar e mostrar o menor elemento armazenado no vetor.
d) Fazer a média dos números pares que estão armazenados no vetor. Validar para que não seja realizada
divisão por zero no cálculo da média.
O programa permanecerá em execução até que seja escolhida a opção sair*/

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include "vetores.h"

int main()
{
    char reset;
    int tam, n, menor, i, soma, indice;
    float media;

    do
    {
        do
        {
            printf("Informe o tamanho do vetor: ");
            scanf("%d", &tam);

            if (tam < 0)
            {
                printf("Valor invalido!\n");
            }
        } while (tam < 0);
        int vetA[tam];

        do
        {
            printf("Informe o valor de n: ");
            scanf("%d", &n);

            if (n < 0)
            {
                printf("Valor invalido!\n");
            }
        } while (n < 0);

        printf("\n=== VETOR GERADO ===\n");
        criarVetorDe0Limite(vetA, tam, n);
        mostrarVetorInteiros(vetA, tam);

        menor = vetA[0];
        soma = 0;
        for (i = 0; i < tam; i++)
        {
            if (vetA[i] % 2 == 0)
            {
                soma = soma + vetA[i];
            }

            if (menor > vetA[i])
            {
                menor = vetA[i];
                indice = i;
            }
        }
        printf("\nO menor valor eh %d e esta no indice %d", menor, indice);
        media = (float)soma / tam;
        printf("\nMedia dos pares: %.2f\n", media);

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