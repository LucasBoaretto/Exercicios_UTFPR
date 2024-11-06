/*Criar uma função para concatenar duas strings.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "string.h"

int main()
{

    char reset, stringA[100], stringB[100];

    do
    {
        printf("Informe a primeira string: ");
        fflush(stdin);
        gets(stringA);
        printf("Informe a segunda string: ");
        gets(stringB);
        concatenarString(stringA, stringB);
        puts(stringA);

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