/*Ler um texto com até 50 caracteres e imprimir o texto na vertical com uma palavra por linha.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{

    char reset, texto[50];
    int i;

    do
    {
        printf("Informe um texto com ate 50 caracteres: ");
        fflush(stdin);
        gets(texto);

        printf("==== TEXTO NA VERTICAL ====\n");
        i = 0;
        while (texto[i] != '\0')
        {
            if (texto[i] != ' ')
            {
                printf("%c", texto[i]);
            }
            else if (texto[i] == ' ' && texto[i + 1] != ' ')
            {
                printf("\n");
            }
            i++;
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