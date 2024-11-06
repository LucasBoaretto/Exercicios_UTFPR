/*Ler uma string e contar quantos espaços sucessivos ela contém. Armazenar esses valores em um vetor.
Mostrar esse vetor.
Por exemplo (os traços representam os espaços):
String informada: -Universidade---Tecnologica--Federal----do--Parana--
Vetor gerado: 1 3 2 4 2 2*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "string.h"
#include "vetores.h"

int main()
{

    char reset, texto[100];
    int i, j, vet[50], contEsp;

    do
    {
        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);

        printf("\n==== VETOR ====\n");
        j = 0;
        contEsp = 0;
        for (i = 0; texto[i] != '\0'; i++)
        {
            if (texto[i] == ' ')
            {
                contEsp++;
            }
            else if (contEsp != 0)
            {
                vet[j] = contEsp;
                contEsp = 0;
                j++;
            }
        }
        if (contEsp != 0)
        {
            vet[j] = contEsp;
            contEsp = 0;
            j++;
        }
        mostrarVetorInteiros(vet, j);

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