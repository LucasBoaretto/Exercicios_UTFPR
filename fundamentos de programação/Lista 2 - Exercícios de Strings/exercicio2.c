/*Fazer uma função que verifica se uma substring pertence a uma string.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "string.h"

int main()
{

    char reset, string[100], subString[20];

    do
    {
        printf("Informe uma string: ");
        fflush(stdin);
        gets(string);

        printf("Informe uma substring: ");
        fflush(stdin);
        gets(subString);

        if (compararStringComSubstring(string, subString) == 1)
        {
            printf("A substring \"%s\" faz parte da string \"%s\"", subString, string);
        }
        else
        {
            printf("A substring \"%s\" nao faz parte da string \"%s\"", subString, string);
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