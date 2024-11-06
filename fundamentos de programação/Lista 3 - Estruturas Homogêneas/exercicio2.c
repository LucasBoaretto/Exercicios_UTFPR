/* (Desafio) Implemente uma função que recebe por parâmetro um vetor numérico e retorna o número de
maior ocorrência no vetor.
Use a função para verificar o número que ocorre com maior frequência em um vetor de 10 posições com
valores aleatórios entre 1 e 5. Se ocorrer de mais de um elemento ter a maior frequência, considere apenas o
que ocorre primeiro no vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "vetores.h"

int main()
{
    char reset;
    int tam = 10, vet[tam], i, j, cont;
    do
    {
        printf("\n==== VETOR ====\n");
        gerarVetorInteiroDe1aLimite(vet, tam, 5);
        mostrarVetorInteiros(vet, tam);

        printf("\nMaior frequencia no vetor: %d", QtdeMaiorOcorrencia(vet, tam));

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