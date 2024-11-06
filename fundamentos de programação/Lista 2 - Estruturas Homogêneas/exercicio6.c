/*Uma locadora de vídeos armazena em um vetor A de 300 posições a quantidade de filmes retirados por
seus clientes durante o ano. A locadora está fazendo uma promoção e para cada 10 filmes retirados, o cliente
tem direito a uma locação grátis. Faça um programa que crie um vetor B contendo a quantidade de locações
gratuitas a que cada cliente tem direito. Declare ambos os vetores com valores inteiros.*/

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include "vetores.h"

int main()
{
    char reset;
    int tam = 300, vetA[tam], vetB[tam], i;

    do
    {
        printf("\n==== VETOR A ====\n");
        gerarVetorInteiroDe1aLimite(vetA, tam, 100);
        mostrarVetorInteiros(vetA, tam);
        printf("\n==== VETOR B ====\n");
        for (i = 0; i < tam; i++)
        {
            vetB[i] = vetA[i] / 10;
        }
        mostrarVetorInteiros(vetB, tam);

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